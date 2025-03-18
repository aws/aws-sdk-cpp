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
   * <p>Details for associating a license configuration with a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseSpecification">AWS
   * API Reference</a></p>
   */
  class LicenseSpecification
  {
  public:
    AWS_LICENSEMANAGER_API LicenseSpecification() = default;
    AWS_LICENSEMANAGER_API LicenseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    template<typename LicenseConfigurationArnT = Aws::String>
    void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value); }
    template<typename LicenseConfigurationArnT = Aws::String>
    LicenseSpecification& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) { SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline const Aws::String& GetAmiAssociationScope() const { return m_amiAssociationScope; }
    inline bool AmiAssociationScopeHasBeenSet() const { return m_amiAssociationScopeHasBeenSet; }
    template<typename AmiAssociationScopeT = Aws::String>
    void SetAmiAssociationScope(AmiAssociationScopeT&& value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope = std::forward<AmiAssociationScopeT>(value); }
    template<typename AmiAssociationScopeT = Aws::String>
    LicenseSpecification& WithAmiAssociationScope(AmiAssociationScopeT&& value) { SetAmiAssociationScope(std::forward<AmiAssociationScopeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    Aws::String m_amiAssociationScope;
    bool m_amiAssociationScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
