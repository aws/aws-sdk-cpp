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
    AWS_EC2_API KeyPairInfo() = default;
    AWS_EC2_API KeyPairInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API KeyPairInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const { return m_keyPairId; }
    inline bool KeyPairIdHasBeenSet() const { return m_keyPairIdHasBeenSet; }
    template<typename KeyPairIdT = Aws::String>
    void SetKeyPairId(KeyPairIdT&& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = std::forward<KeyPairIdT>(value); }
    template<typename KeyPairIdT = Aws::String>
    KeyPairInfo& WithKeyPairId(KeyPairIdT&& value) { SetKeyPairId(std::forward<KeyPairIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of key pair.</p>
     */
    inline KeyType GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    inline void SetKeyType(KeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline KeyPairInfo& WithKeyType(KeyType value) { SetKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags applied to the key pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    KeyPairInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    KeyPairInfo& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The public key material.</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    KeyPairInfo& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you used Amazon EC2 to create the key pair, this is the date and time when
     * the key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p> <p>If you imported an existing key pair to
     * Amazon EC2, this is the date and time the key was imported, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601 date-time
     * format</a>, in the UTC time zone.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    KeyPairInfo& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    KeyPairInfo& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetKeyFingerprint() const { return m_keyFingerprint; }
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }
    template<typename KeyFingerprintT = Aws::String>
    void SetKeyFingerprint(KeyFingerprintT&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::forward<KeyFingerprintT>(value); }
    template<typename KeyFingerprintT = Aws::String>
    KeyPairInfo& WithKeyFingerprint(KeyFingerprintT&& value) { SetKeyFingerprint(std::forward<KeyFingerprintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyPairId;
    bool m_keyPairIdHasBeenSet = false;

    KeyType m_keyType{KeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
