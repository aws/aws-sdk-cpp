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
    AWS_LICENSEMANAGER_API CheckInLicenseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckInLicense"; }

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
    CheckInLicenseRequest& WithLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { SetLicenseConsumptionToken(std::forward<LicenseConsumptionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const { return m_beneficiary; }
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }
    template<typename BeneficiaryT = Aws::String>
    void SetBeneficiary(BeneficiaryT&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::forward<BeneficiaryT>(value); }
    template<typename BeneficiaryT = Aws::String>
    CheckInLicenseRequest& WithBeneficiary(BeneficiaryT&& value) { SetBeneficiary(std::forward<BeneficiaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConsumptionToken;
    bool m_licenseConsumptionTokenHasBeenSet = false;

    Aws::String m_beneficiary;
    bool m_beneficiaryHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
