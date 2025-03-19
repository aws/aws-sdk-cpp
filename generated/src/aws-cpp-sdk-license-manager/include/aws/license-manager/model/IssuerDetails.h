/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details associated with the issuer of a license.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/IssuerDetails">AWS
   * API Reference</a></p>
   */
  class IssuerDetails
  {
  public:
    AWS_LICENSEMANAGER_API IssuerDetails() = default;
    AWS_LICENSEMANAGER_API IssuerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API IssuerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Issuer name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IssuerDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline const Aws::String& GetSignKey() const { return m_signKey; }
    inline bool SignKeyHasBeenSet() const { return m_signKeyHasBeenSet; }
    template<typename SignKeyT = Aws::String>
    void SetSignKey(SignKeyT&& value) { m_signKeyHasBeenSet = true; m_signKey = std::forward<SignKeyT>(value); }
    template<typename SignKeyT = Aws::String>
    IssuerDetails& WithSignKey(SignKeyT&& value) { SetSignKey(std::forward<SignKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Issuer key fingerprint.</p>
     */
    inline const Aws::String& GetKeyFingerprint() const { return m_keyFingerprint; }
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }
    template<typename KeyFingerprintT = Aws::String>
    void SetKeyFingerprint(KeyFingerprintT&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::forward<KeyFingerprintT>(value); }
    template<typename KeyFingerprintT = Aws::String>
    IssuerDetails& WithKeyFingerprint(KeyFingerprintT&& value) { SetKeyFingerprint(std::forward<KeyFingerprintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_signKey;
    bool m_signKeyHasBeenSet = false;

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
