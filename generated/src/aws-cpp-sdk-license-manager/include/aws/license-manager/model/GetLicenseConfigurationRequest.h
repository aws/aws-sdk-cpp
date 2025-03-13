/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class GetLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    template<typename LicenseConfigurationArnT = Aws::String>
    void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value); }
    template<typename LicenseConfigurationArnT = Aws::String>
    GetLicenseConfigurationRequest& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) { SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
