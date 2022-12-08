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
  class ImportKeyPairResponse
  {
  public:
    AWS_EC2_API ImportKeyPairResponse();
    AWS_EC2_API ImportKeyPairResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportKeyPairResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprint = value; }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprint = std::move(value); }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprint.assign(value); }

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline ImportKeyPairResponse& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline ImportKeyPairResponse& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}

    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline ImportKeyPairResponse& WithKeyFingerprint(const char* value) { SetKeyFingerprint(value); return *this;}


    /**
     * <p>The key pair name that you provided.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The key pair name that you provided.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }

    /**
     * <p>The key pair name that you provided.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }

    /**
     * <p>The key pair name that you provided.</p>
     */
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }

    /**
     * <p>The key pair name that you provided.</p>
     */
    inline ImportKeyPairResponse& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The key pair name that you provided.</p>
     */
    inline ImportKeyPairResponse& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The key pair name that you provided.</p>
     */
    inline ImportKeyPairResponse& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const{ return m_keyPairId; }

    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline void SetKeyPairId(const Aws::String& value) { m_keyPairId = value; }

    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline void SetKeyPairId(Aws::String&& value) { m_keyPairId = std::move(value); }

    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline void SetKeyPairId(const char* value) { m_keyPairId.assign(value); }

    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline ImportKeyPairResponse& WithKeyPairId(const Aws::String& value) { SetKeyPairId(value); return *this;}

    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline ImportKeyPairResponse& WithKeyPairId(Aws::String&& value) { SetKeyPairId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline ImportKeyPairResponse& WithKeyPairId(const char* value) { SetKeyPairId(value); return *this;}


    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline ImportKeyPairResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline ImportKeyPairResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline ImportKeyPairResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline ImportKeyPairResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ImportKeyPairResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ImportKeyPairResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_keyFingerprint;

    Aws::String m_keyName;

    Aws::String m_keyPairId;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
