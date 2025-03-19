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
  class ExtendLicenseConsumptionRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExtendLicenseConsumption"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const { return m_licenseConsumptionToken; }
    inline bool LicenseConsumptionTokenHasBeenSet() const { return m_licenseConsumptionTokenHasBeenSet; }
    template<typename LicenseConsumptionTokenT = Aws::String>
    void SetLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = std::forward<LicenseConsumptionTokenT>(value); }
    template<typename LicenseConsumptionTokenT = Aws::String>
    ExtendLicenseConsumptionRequest& WithLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { SetLicenseConsumptionToken(std::forward<LicenseConsumptionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request. Provides an error response if you do not have the
     * required permissions.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ExtendLicenseConsumptionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConsumptionToken;
    bool m_licenseConsumptionTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
