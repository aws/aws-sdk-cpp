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
    AWS_BCMPRICINGCALCULATOR_API UpdatePreferencesRequest() = default;

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
    inline const Aws::Vector<RateType>& GetManagementAccountRateTypeSelections() const { return m_managementAccountRateTypeSelections; }
    inline bool ManagementAccountRateTypeSelectionsHasBeenSet() const { return m_managementAccountRateTypeSelectionsHasBeenSet; }
    template<typename ManagementAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    void SetManagementAccountRateTypeSelections(ManagementAccountRateTypeSelectionsT&& value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections = std::forward<ManagementAccountRateTypeSelectionsT>(value); }
    template<typename ManagementAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    UpdatePreferencesRequest& WithManagementAccountRateTypeSelections(ManagementAccountRateTypeSelectionsT&& value) { SetManagementAccountRateTypeSelections(std::forward<ManagementAccountRateTypeSelectionsT>(value)); return *this;}
    inline UpdatePreferencesRequest& AddManagementAccountRateTypeSelections(RateType value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The updated preferred rate types for member accounts. </p>
     */
    inline const Aws::Vector<RateType>& GetMemberAccountRateTypeSelections() const { return m_memberAccountRateTypeSelections; }
    inline bool MemberAccountRateTypeSelectionsHasBeenSet() const { return m_memberAccountRateTypeSelectionsHasBeenSet; }
    template<typename MemberAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    void SetMemberAccountRateTypeSelections(MemberAccountRateTypeSelectionsT&& value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections = std::forward<MemberAccountRateTypeSelectionsT>(value); }
    template<typename MemberAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    UpdatePreferencesRequest& WithMemberAccountRateTypeSelections(MemberAccountRateTypeSelectionsT&& value) { SetMemberAccountRateTypeSelections(std::forward<MemberAccountRateTypeSelectionsT>(value)); return *this;}
    inline UpdatePreferencesRequest& AddMemberAccountRateTypeSelections(RateType value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The updated preferred rate types for a standalone account. </p>
     */
    inline const Aws::Vector<RateType>& GetStandaloneAccountRateTypeSelections() const { return m_standaloneAccountRateTypeSelections; }
    inline bool StandaloneAccountRateTypeSelectionsHasBeenSet() const { return m_standaloneAccountRateTypeSelectionsHasBeenSet; }
    template<typename StandaloneAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    void SetStandaloneAccountRateTypeSelections(StandaloneAccountRateTypeSelectionsT&& value) { m_standaloneAccountRateTypeSelectionsHasBeenSet = true; m_standaloneAccountRateTypeSelections = std::forward<StandaloneAccountRateTypeSelectionsT>(value); }
    template<typename StandaloneAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    UpdatePreferencesRequest& WithStandaloneAccountRateTypeSelections(StandaloneAccountRateTypeSelectionsT&& value) { SetStandaloneAccountRateTypeSelections(std::forward<StandaloneAccountRateTypeSelectionsT>(value)); return *this;}
    inline UpdatePreferencesRequest& AddStandaloneAccountRateTypeSelections(RateType value) { m_standaloneAccountRateTypeSelectionsHasBeenSet = true; m_standaloneAccountRateTypeSelections.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<RateType> m_managementAccountRateTypeSelections;
    bool m_managementAccountRateTypeSelectionsHasBeenSet = false;

    Aws::Vector<RateType> m_memberAccountRateTypeSelections;
    bool m_memberAccountRateTypeSelectionsHasBeenSet = false;

    Aws::Vector<RateType> m_standaloneAccountRateTypeSelections;
    bool m_standaloneAccountRateTypeSelectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
