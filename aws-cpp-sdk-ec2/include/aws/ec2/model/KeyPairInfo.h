/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/KeyType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a key pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/KeyPairInfo">AWS API
   * Reference</a></p>
   */
  class KeyPairInfo
  {
  public:
    AWS_EC2_API KeyPairInfo();
    AWS_EC2_API KeyPairInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API KeyPairInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const{ return m_keyPairId; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline bool KeyPairIdHasBeenSet() const { return m_keyPairIdHasBeenSet; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const Aws::String& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = value; }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(Aws::String&& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = std::move(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline void SetKeyPairId(const char* value) { m_keyPairIdHasBeenSet = true; m_keyPairId.assign(value); }

    /**
     * <p>The ID of the key pair.</p>
     */
    inline KeyPairInfo& WithKeyPairId(const Aws::String& value) { SetKeyPairId(value); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline KeyPairInfo& WithKeyPairId(Aws::String&& value) { SetKeyPairId(std::move(value)); return *this;}

    /**
     * <p>The ID of the key pair.</p>
     */
    inline KeyPairInfo& WithKeyPairId(const char* value) { SetKeyPairId(value); return *this;}


    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = value; }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::move(value); }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint.assign(value); }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline KeyPairInfo& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline KeyPairInfo& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair:</p> <ul> <li> <p>For
     * RSA key pairs, the key fingerprint is the SHA-1 digest of the DER encoded
     * private key.</p> </li> <li> <p>For ED25519 key pairs, the key fingerprint is the
     * base64-encoded SHA-256 digest, which is the default for OpenSSH, starting with
     * <a href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li>
     * </ul> <p>If you used <a>ImportKeyPair</a> to provide Amazon Web Services the
     * public key:</p> <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5
     * public key fingerprint as specified in section 4 of RFC4716.</p> </li> <li>
     * <p>For ED25519 key pairs, the key fingerprint is the base64-encoded SHA-256
     * digest, which is the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline KeyPairInfo& WithKeyFingerprint(const char* value) { SetKeyFingerprint(value); return *this;}


    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline KeyPairInfo& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline KeyPairInfo& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline KeyPairInfo& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The type of key pair.</p>
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The type of key pair.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The type of key pair.</p>
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of key pair.</p>
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The type of key pair.</p>
     */
    inline KeyPairInfo& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of key pair.</p>
     */
    inline KeyPairInfo& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline KeyPairInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline KeyPairInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline KeyPairInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline KeyPairInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The public key material.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key material.</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The public key material.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public key material.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public key material.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public key material.</p>
     */
    inline KeyPairInfo& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key material.</p>
     */
    inline KeyPairInfo& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key material.</p>
     */
    inline KeyPairInfo& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline KeyPairInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline KeyPairInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}

  private:

    Aws::String m_keyPairId;
    bool m_keyPairIdHasBeenSet = false;

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
