/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  private:

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
