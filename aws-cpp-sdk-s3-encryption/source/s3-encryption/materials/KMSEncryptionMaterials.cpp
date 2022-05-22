#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/kms/KMSClient.h>
#include <aws/kms/model/GenerateDataKeyRequest.h>
#include <aws/kms/model/GenerateDataKeyResult.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/EncryptResult.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/kms/model/DecryptResult.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;
using namespace Aws::Client;
using namespace Aws::S3Encryption;

// TODO: temporary fix for naming conflicts on Windows.
#ifdef _WIN32
#ifdef GetMessage
#undef GetMessage
#endif
#endif

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            static const char* const ALLOCATION_TAG = "KMSEncryptionMaterials";
            const char* cmkID_Identifier = "kms_cmk_id";
            const char* kmsEncryptionContextKey = "aws:x-amz-cek-alg";

            KMSEncryptionMaterialsBase::KMSEncryptionMaterialsBase(const String& customerMasterKeyID, const ClientConfiguration& clientConfig) :
                m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(Aws::MakeShared<KMSClient>(ALLOCATION_TAG, clientConfig)), m_allowDecryptWithAnyCMK(true)
            {
            }

            KMSEncryptionMaterialsBase::KMSEncryptionMaterialsBase(const String & customerMasterKeyID, const std::shared_ptr<KMSClient>& kmsClient) :
                m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(kmsClient), m_allowDecryptWithAnyCMK(true)
            {
            }

            CryptoOutcome KMSEncryptionMaterialsBase::EncryptCEK(ContentCryptoMaterial & contentCryptoMaterial)
            {
                // non empty context map passed in.
                if (contentCryptoMaterial.GetMaterialsDescription().size())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Customized encryption context map is not allowed for KMS Key wrap algorithm.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Customized encryption context map is not allowed for KMS Key wrap algorithm.", false/*not retryable*/));
                }

                EncryptRequest request;
                request.SetKeyId(m_customerMasterKeyID);

                contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, m_customerMasterKeyID);
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());

                request.SetPlaintext(contentCryptoMaterial.GetContentEncryptionKey());

                EncryptOutcome outcome = m_kmsClient->Encrypt(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "KMS encryption call not successful: "
                        << outcome.GetError().GetExceptionName() << " : " << outcome.GetError().GetMessage());
                    //return without changing the encrypted content encryption key
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Failed to encrypt content encryption key(CEK)", false/*not retryable*/));
                }

                EncryptResult result = outcome.GetResult();
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(result.GetCiphertextBlob());
                contentCryptoMaterial.SetFinalCEK(result.GetCiphertextBlob());
                return CryptoOutcome(Aws::NoResult());
            }

            CryptoOutcome KMSEncryptionMaterialsBase::DecryptCEK(ContentCryptoMaterial &contentCryptoMaterial)
            {
                auto errorOutcome = CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::DECRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "DecryptContentEncryptionKeyFailed", "Failed to decrypt content encryption key(CEK)", false/*not retryable*/));

                if (m_customerMasterKeyID.empty() && IsKMSDecryptWithAnyCMKAllowed() == false)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to decrypt content encryption key(CEK): KMS CMK is not provided and CMK Any is not allowed.");
                    return errorOutcome;
                }

                if (!ValidateDecryptCEKMaterials(contentCryptoMaterial))
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Materials Description does not match encryption context.");
                    return errorOutcome;
                }

                auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
                if (encryptedContentEncryptionKey.GetLength() == 0)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Encrypted content encryption key does not exist.");
                    return errorOutcome;
                }

                DecryptRequest request;

                if (!m_customerMasterKeyID.empty())
                {
                    request.SetKeyId(m_customerMasterKeyID);
                }
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());
                request.SetCiphertextBlob(encryptedContentEncryptionKey);

                DecryptOutcome outcome = m_kmsClient->Decrypt(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "KMS decryption not successful: "
                        << outcome.GetError().GetExceptionName() << outcome.GetError().GetMessage());
                    return errorOutcome;
                }

                DecryptResult result = outcome.GetResult();
                contentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer(result.GetPlaintext()));
                if (contentCryptoMaterial.GetContentEncryptionKey().GetLength() == 0u)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Content Encryption Key could not be decrypted.");
                    return errorOutcome;
                }
                return CryptoOutcome(Aws::NoResult());
            }

            bool KMSEncryptionMaterialsBase::ValidateDecryptCEKMaterials(const ContentCryptoMaterial& contentCryptoMaterial) const
            {
                switch(contentCryptoMaterial.GetKeyWrapAlgorithm())
                {
                    case KeyWrapAlgorithm::KMS:
                    {
                        auto materials = contentCryptoMaterial.GetMaterialsDescription();
                        auto iterator = materials.find(cmkID_Identifier);
                        return (iterator == materials.end() || iterator->second == m_customerMasterKeyID);
                    }

                    case KeyWrapAlgorithm::KMS_CONTEXT:
                    {
                        Aws::String cekAlg = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
                        auto materials = contentCryptoMaterial.GetMaterialsDescription();
                        auto iterator = materials.find(kmsEncryptionContextKey);
                        return  (iterator != materials.end() && iterator->second == cekAlg);
                    }

                    default:
                        return false;
                }
            }

            CryptoOutcome KMSWithContextEncryptionMaterials::EncryptCEK(ContentCryptoMaterial& contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetMaterialsDescription().count(kmsEncryptionContextKey))
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Conflict in reserved KMS Encryption Context key aws:x-amz-cek-alg. This value is reserved for the S3 Encryption Client and cannot be set by the user.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, "GenerateContentEncryptionKeyFailed", "Failed to generate content encryption key(CEK)", false/*not retryable*/));
                }

                GenerateDataKeyRequest request;
                request.SetKeyId(m_customerMasterKeyID);

                // Should be "AES/GCM/NoPadding" by default
                Aws::String cekAlg = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
                contentCryptoMaterial.AddMaterialsDescription(kmsEncryptionContextKey, cekAlg);
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());
                request.SetKeySpec(DataKeySpec::AES_256);
                GenerateDataKeyOutcome outcome = m_kmsClient->GenerateDataKey(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to call KMS GenerateDataKey API with error: "
                        << outcome.GetError().GetExceptionName() << " : " << outcome.GetError().GetMessage());
                    //return without changing the encrypted content encryption key
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, "GenerateContentEncryptionKeyFailed", "Failed to generate content encryption key(CEK)", false/*not retryable*/));
                }

                GenerateDataKeyResult result = outcome.GetResult();
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS_CONTEXT);
                contentCryptoMaterial.SetContentEncryptionKey(result.GetPlaintext());
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(result.GetCiphertextBlob());
                contentCryptoMaterial.SetFinalCEK(result.GetCiphertextBlob());
                return CryptoOutcome(Aws::NoResult());
            }
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
