/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Describes a key pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/KeyPair">AWS API
   * Reference</a></p>
   */
  class CreateKeyPairResponse
  {
  public:
    AWS_EC2_API CreateKeyPairResponse();
    AWS_EC2_API CreateKeyPairResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateKeyPairResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprint = value; }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprint = std::move(value); }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprint.assign(value); }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline CreateKeyPairResponse& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline CreateKeyPairResponse& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the SHA-1 digest of the
     * DER encoded private key.</p> </li> <li> <p>For ED25519 key pairs, the key
     * fingerprint is the base64-encoded SHA-256 digest, which is the default for
     * OpenSSH, starting with OpenSSH 6.8.</p> </li> </ul>
     */
    inline CreateKeyPairResponse& WithKeyFingerprint(const char* value) { SetKeyFingerprint(value); return *this;}


    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline const Aws::String& GetKeyMaterial() const{ return m_keyMaterial; }

    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline void SetKeyMaterial(const Aws::String& value) { m_keyMaterial = value; }

    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline void SetKeyMaterial(Aws::String&& value) { m_keyMaterial = std::move(value); }

    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline void SetKeyMaterial(const char* value) { m_keyMaterial.assign(value); }

    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyMaterial(const Aws::String& value) { SetKeyMaterial(value); return *this;}

    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyMaterial(Aws::String&& value) { SetKeyMaterial(std::move(value)); return *this;}

    /**
     * <p>An unencrypted PEM encoded RSA or ED25519 private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyMaterial(const char* value) { SetKeyMaterial(value); return *this;}


    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The ID of the key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const{ return m_keyPairId; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const Aws::String& value) { m_keyPairId = value; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(Aws::String&& value) { m_keyPairId = std::move(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const char* value) { m_keyPairId.assign(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyPairId(const Aws::String& value) { SetKeyPairId(value); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyPairId(Aws::String&& value) { SetKeyPairId(std::move(value)); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyPairId(const char* value) { SetKeyPairId(value); return *this;}


    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline CreateKeyPairResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline CreateKeyPairResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline CreateKeyPairResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline CreateKeyPairResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateKeyPairResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateKeyPairResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_keyFingerprint;

    Aws::String m_keyMaterial;

    Aws::String m_keyName;

    Aws::String m_keyPairId;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
