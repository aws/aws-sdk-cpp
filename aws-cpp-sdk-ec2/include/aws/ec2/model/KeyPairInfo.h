/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_EC2_API KeyPairInfo
  {
  public:
    KeyPairInfo();
    KeyPairInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    KeyPairInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = value; }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::move(value); }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint.assign(value); }

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline KeyPairInfo& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
     */
    inline KeyPairInfo& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1
     * digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to
     * provide AWS the public key, this is the MD5 public key fingerprint as specified
     * in section 4 of RFC4716.</p>
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

  private:

    Aws::String m_keyPairId;
    bool m_keyPairIdHasBeenSet;

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
