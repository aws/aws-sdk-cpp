#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/kms/KMSClient.h>
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

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            static const char* const ALLOCATION_TAG = "KMSEncryptionMaterials";
            const char* cmkID_Identifier = "kms_cmk_id";

            KMSEncryptionMaterials::KMSEncryptionMaterials(const String& customerMasterKeyID, const ClientConfiguration& clientConfig) :
                m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(Aws::MakeShared<KMSClient>(ALLOCATION_TAG, clientConfig))
            {
            }

            KMSEncryptionMaterials::KMSEncryptionMaterials(const String & customerMasterKeyID, const std::shared_ptr<KMSClient>& kmsClient) :
                m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(kmsClient)
            {
            }

            void KMSEncryptionMaterials::EncryptCEK(ContentCryptoMaterial & contentCryptoMaterial)
            {
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
                    return;
                }

                EncryptResult result = outcome.GetResult();
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
                contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, m_customerMasterKeyID);
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(result.GetCiphertextBlob());
            }

            void KMSEncryptionMaterials::DecryptCEK(ContentCryptoMaterial & contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::KMS)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The KeyWrapAlgorithm is not KMS during decryption, therefore the"
                        << " current encryption materials can not decrypt the content encryption key.");
                    //return without changing the encrypted content encryption key
                    return;
                }
                auto materialDescription = contentCryptoMaterial.GetMaterialsDescription();
                auto iterator = materialDescription.find(cmkID_Identifier);
                if (iterator != materialDescription.end() && iterator->second != m_customerMasterKeyID)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Materials Description does not match encryption context.");
                    return;
                }

                auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
                if (encryptedContentEncryptionKey.GetLength() == 0)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Encrypted content encryption key does not exist.");
                    return;
                }

                DecryptRequest request;
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());
                request.SetCiphertextBlob(encryptedContentEncryptionKey);

                DecryptOutcome outcome = m_kmsClient->Decrypt(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "KMS decryption not successful: "
                        << outcome.GetError().GetExceptionName() << outcome.GetError().GetMessage());
                    return;
                }

                DecryptResult result = outcome.GetResult();
                contentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer(result.GetPlaintext()));
                if (contentCryptoMaterial.GetContentEncryptionKey().GetLength() == 0u)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Content Encryption Key could not be decrypted.");
                }
            }

        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
