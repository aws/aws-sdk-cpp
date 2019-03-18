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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>The password data for the Windows Server-based instance, including the
   * ciphertext and the key pair name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PasswordData">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API PasswordData
  {
  public:
    PasswordData();
    PasswordData(Aws::Utils::Json::JsonView jsonValue);
    PasswordData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline const Aws::String& GetCiphertext() const{ return m_ciphertext; }

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline bool CiphertextHasBeenSet() const { return m_ciphertextHasBeenSet; }

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline void SetCiphertext(const Aws::String& value) { m_ciphertextHasBeenSet = true; m_ciphertext = value; }

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline void SetCiphertext(Aws::String&& value) { m_ciphertextHasBeenSet = true; m_ciphertext = std::move(value); }

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline void SetCiphertext(const char* value) { m_ciphertextHasBeenSet = true; m_ciphertext.assign(value); }

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline PasswordData& WithCiphertext(const Aws::String& value) { SetCiphertext(value); return *this;}

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline PasswordData& WithCiphertext(Aws::String&& value) { SetCiphertext(std::move(value)); return *this;}

    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p> <note> <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> </note>
     */
    inline PasswordData& WithCiphertext(const char* value) { SetCiphertext(value); return *this;}


    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::move(value); }

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline PasswordData& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline PasswordData& WithKeyPairName(Aws::String&& value) { SetKeyPairName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline PasswordData& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}

  private:

    Aws::String m_ciphertext;
    bool m_ciphertextHasBeenSet;

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
