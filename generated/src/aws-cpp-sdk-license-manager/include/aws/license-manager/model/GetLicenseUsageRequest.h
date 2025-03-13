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
  class GetLicenseUsageRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseUsage"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    GetLicenseUsageRequest& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
