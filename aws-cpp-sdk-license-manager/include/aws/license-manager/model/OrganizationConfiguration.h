/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>

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
   * <p>Configuration information for AWS Organizations.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/OrganizationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LICENSEMANAGER_API OrganizationConfiguration
  {
  public:
    OrganizationConfiguration();
    OrganizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    OrganizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables AWS Organization integration.</p>
     */
    inline bool GetEnableIntegration() const{ return m_enableIntegration; }

    /**
     * <p>Enables AWS Organization integration.</p>
     */
    inline bool EnableIntegrationHasBeenSet() const { return m_enableIntegrationHasBeenSet; }

    /**
     * <p>Enables AWS Organization integration.</p>
     */
    inline void SetEnableIntegration(bool value) { m_enableIntegrationHasBeenSet = true; m_enableIntegration = value; }

    /**
     * <p>Enables AWS Organization integration.</p>
     */
    inline OrganizationConfiguration& WithEnableIntegration(bool value) { SetEnableIntegration(value); return *this;}

  private:

    bool m_enableIntegration;
    bool m_enableIntegrationHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
