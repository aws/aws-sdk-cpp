/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PasswordData
  {
  public:
    AWS_LIGHTSAIL_API PasswordData() = default;
    AWS_LIGHTSAIL_API PasswordData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API PasswordData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encrypted password. Ciphertext will be an empty string if access to your
     * new instance is not ready yet. When you create an instance, it can take up to 15
     * minutes for the instance to be ready.</p>  <p>If you use the default key
     * pair (<code>LightsailDefaultKeyPair</code>), the decrypted password will be
     * available in the password field.</p> <p>If you are using a custom key pair, you
     * need to use your own means of decryption.</p> <p>If you change the Administrator
     * password on the instance, Lightsail will continue to return the original
     * ciphertext value. When accessing the instance using RDP, you need to manually
     * enter the Administrator password after changing it from the default.</p> 
     */
    inline const Aws::String& GetCiphertext() const { return m_ciphertext; }
    inline bool CiphertextHasBeenSet() const { return m_ciphertextHasBeenSet; }
    template<typename CiphertextT = Aws::String>
    void SetCiphertext(CiphertextT&& value) { m_ciphertextHasBeenSet = true; m_ciphertext = std::forward<CiphertextT>(value); }
    template<typename CiphertextT = Aws::String>
    PasswordData& WithCiphertext(CiphertextT&& value) { SetCiphertext(std::forward<CiphertextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair that you used when creating your instance. If no key
     * pair name was specified when creating the instance, Lightsail uses the default
     * key pair (<code>LightsailDefaultKeyPair</code>).</p> <p>If you are using a
     * custom key pair, you need to use your own means of decrypting your password
     * using the <code>ciphertext</code>. Lightsail creates the ciphertext by
     * encrypting your password with the public key part of this key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const { return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    template<typename KeyPairNameT = Aws::String>
    void SetKeyPairName(KeyPairNameT&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::forward<KeyPairNameT>(value); }
    template<typename KeyPairNameT = Aws::String>
    PasswordData& WithKeyPairName(KeyPairNameT&& value) { SetKeyPairName(std::forward<KeyPairNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ciphertext;
    bool m_ciphertextHasBeenSet = false;

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
