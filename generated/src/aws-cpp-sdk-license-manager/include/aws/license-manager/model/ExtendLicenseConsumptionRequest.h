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
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionRequest();

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
    inline const Aws::String& GetLicenseConsumptionToken() const{ return m_licenseConsumptionToken; }
    inline bool LicenseConsumptionTokenHasBeenSet() const { return m_licenseConsumptionTokenHasBeenSet; }
    inline void SetLicenseConsumptionToken(const Aws::String& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = value; }
    inline void SetLicenseConsumptionToken(Aws::String&& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = std::move(value); }
    inline void SetLicenseConsumptionToken(const char* value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken.assign(value); }
    inline ExtendLicenseConsumptionRequest& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}
    inline ExtendLicenseConsumptionRequest& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}
    inline ExtendLicenseConsumptionRequest& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request. Provides an error response if you do not have the
     * required permissions.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ExtendLicenseConsumptionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConsumptionToken;
    bool m_licenseConsumptionTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
