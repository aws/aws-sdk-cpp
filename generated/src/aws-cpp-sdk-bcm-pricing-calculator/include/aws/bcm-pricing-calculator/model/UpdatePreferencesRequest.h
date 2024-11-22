/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/RateType.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class UpdatePreferencesRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API UpdatePreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePreferences"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The updated preferred rate types for the management account. </p>
     */
    inline const Aws::Vector<RateType>& GetManagementAccountRateTypeSelections() const{ return m_managementAccountRateTypeSelections; }
    inline bool ManagementAccountRateTypeSelectionsHasBeenSet() const { return m_managementAccountRateTypeSelectionsHasBeenSet; }
    inline void SetManagementAccountRateTypeSelections(const Aws::Vector<RateType>& value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections = value; }
    inline void SetManagementAccountRateTypeSelections(Aws::Vector<RateType>&& value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections = std::move(value); }
    inline UpdatePreferencesRequest& WithManagementAccountRateTypeSelections(const Aws::Vector<RateType>& value) { SetManagementAccountRateTypeSelections(value); return *this;}
    inline UpdatePreferencesRequest& WithManagementAccountRateTypeSelections(Aws::Vector<RateType>&& value) { SetManagementAccountRateTypeSelections(std::move(value)); return *this;}
    inline UpdatePreferencesRequest& AddManagementAccountRateTypeSelections(const RateType& value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections.push_back(value); return *this; }
    inline UpdatePreferencesRequest& AddManagementAccountRateTypeSelections(RateType&& value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The updated preferred rate types for member accounts. </p>
     */
    inline const Aws::Vector<RateType>& GetMemberAccountRateTypeSelections() const{ return m_memberAccountRateTypeSelections; }
    inline bool MemberAccountRateTypeSelectionsHasBeenSet() const { return m_memberAccountRateTypeSelectionsHasBeenSet; }
    inline void SetMemberAccountRateTypeSelections(const Aws::Vector<RateType>& value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections = value; }
    inline void SetMemberAccountRateTypeSelections(Aws::Vector<RateType>&& value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections = std::move(value); }
    inline UpdatePreferencesRequest& WithMemberAccountRateTypeSelections(const Aws::Vector<RateType>& value) { SetMemberAccountRateTypeSelections(value); return *this;}
    inline UpdatePreferencesRequest& WithMemberAccountRateTypeSelections(Aws::Vector<RateType>&& value) { SetMemberAccountRateTypeSelections(std::move(value)); return *this;}
    inline UpdatePreferencesRequest& AddMemberAccountRateTypeSelections(const RateType& value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections.push_back(value); return *this; }
    inline UpdatePreferencesRequest& AddMemberAccountRateTypeSelections(RateType&& value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RateType> m_managementAccountRateTypeSelections;
    bool m_managementAccountRateTypeSelectionsHasBeenSet = false;

    Aws::Vector<RateType> m_memberAccountRateTypeSelections;
    bool m_memberAccountRateTypeSelectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
