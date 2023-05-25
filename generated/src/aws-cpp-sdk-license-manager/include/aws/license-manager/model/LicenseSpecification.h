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
    AWS_LICENSEMANAGER_API LicenseSpecification();
    AWS_LICENSEMANAGER_API LicenseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline LicenseSpecification& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline LicenseSpecification& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline LicenseSpecification& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline const Aws::String& GetAmiAssociationScope() const{ return m_amiAssociationScope; }

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline bool AmiAssociationScopeHasBeenSet() const { return m_amiAssociationScopeHasBeenSet; }

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline void SetAmiAssociationScope(const Aws::String& value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope = value; }

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline void SetAmiAssociationScope(Aws::String&& value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope = std::move(value); }

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline void SetAmiAssociationScope(const char* value) { m_amiAssociationScopeHasBeenSet = true; m_amiAssociationScope.assign(value); }

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline LicenseSpecification& WithAmiAssociationScope(const Aws::String& value) { SetAmiAssociationScope(value); return *this;}

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline LicenseSpecification& WithAmiAssociationScope(Aws::String&& value) { SetAmiAssociationScope(std::move(value)); return *this;}

    /**
     * <p>Scope of AMI associations. The possible value is
     * <code>cross-account</code>.</p>
     */
    inline LicenseSpecification& WithAmiAssociationScope(const char* value) { SetAmiAssociationScope(value); return *this;}

  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    Aws::String m_amiAssociationScope;
    bool m_amiAssociationScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
