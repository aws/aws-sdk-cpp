#include <aws/s3-encryption/materials/KMSEncryptionMaterialsProvider.h>
#include <aws/kms/KMSClient.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/EncryptResult.h>

using namespace Aws::Utils;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;

namespace Aws
{
namespace S3Encryption
{
namespace Materials
{

KMSEncryptionMaterialsProvider::KMSEncryptionMaterialsProvider(const Aws::String & customerMasterKeyID, const Aws::Client::ClientConfiguration& clientConfig):
    m_customerMasterKeyID(customerMasterKeyID), m_clientConfig(clientConfig), m_kmsClient()
{
}

KMSEncryptionMaterialsProvider::KMSEncryptionMaterialsProvider(const Aws::String & customerMasterKeyID, const Aws::KMS::KMSClient& kmsClient):
    m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(kmsClient), m_clientConfig()
{
}

Aws::Utils::CryptoBuffer KMSEncryptionMaterialsProvider::EncryptCEK(Utils::CryptoBuffer contentKey)
{
    /*if (m_kmsClient.)
    {
        m_kmsClient = 
    }
    else
    {
        
    }*/
    /*KMSClient kmsClient(m_clientConfig);
    EncryptRequest encryptRequest;
    encryptRequest.SetKeyId(m_customerMasterKeyID);
    encryptRequest.SetPlaintext(contentKey);
    EncryptResult result = kmsClient.Encrypt(encryptRequest);
    return Aws::Utils::CryptoBuffer(result.GetCiphertextBlob());*/
    return CryptoBuffer();
}

Aws::Utils::CryptoBuffer KMSEncryptionMaterialsProvider::DecryptCEK(Utils::CryptoBuffer contentKey)
{

    return CryptoBuffer();
}

const EncryptionMaterials KMSEncryptionMaterialsProvider::FetchEncryptionMaterials()
{
    EncryptionMaterials materials(CryptoBuffer(0));
    return materials;
}

}//namespace Materials
}//namespace S3Encryption
}//namespace Aws
