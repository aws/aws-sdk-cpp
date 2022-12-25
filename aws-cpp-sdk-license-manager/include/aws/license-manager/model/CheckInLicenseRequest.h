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
  class CheckInLicenseRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CheckInLicenseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckInLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const{ return m_licenseConsumptionToken; }

    /**
     * <p>License consumption token.</p>
     */
    inline bool LicenseConsumptionTokenHasBeenSet() const { return m_licenseConsumptionTokenHasBeenSet; }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(const Aws::String& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = value; }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(Aws::String&& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = std::move(value); }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(const char* value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken.assign(value); }

    /**
     * <p>License consumption token.</p>
     */
    inline CheckInLicenseRequest& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline CheckInLicenseRequest& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline CheckInLicenseRequest& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}


    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const{ return m_beneficiary; }

    /**
     * <p>License beneficiary.</p>
     */
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(const Aws::String& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = value; }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(Aws::String&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::move(value); }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(const char* value) { m_beneficiaryHasBeenSet = true; m_beneficiary.assign(value); }

    /**
     * <p>License beneficiary.</p>
     */
    inline CheckInLicenseRequest& WithBeneficiary(const Aws::String& value) { SetBeneficiary(value); return *this;}

    /**
     * <p>License beneficiary.</p>
     */
    inline CheckInLicenseRequest& WithBeneficiary(Aws::String&& value) { SetBeneficiary(std::move(value)); return *this;}

    /**
     * <p>License beneficiary.</p>
     */
    inline CheckInLicenseRequest& WithBeneficiary(const char* value) { SetBeneficiary(value); return *this;}

  private:

    Aws::String m_licenseConsumptionToken;
    bool m_licenseConsumptionTokenHasBeenSet = false;

    Aws::String m_beneficiary;
    bool m_beneficiaryHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
