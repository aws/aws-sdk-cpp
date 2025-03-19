/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/model/SavingsEstimationMode.h>
#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
#include <utility>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

  /**
   */
  class UpdatePreferencesRequest : public CostOptimizationHubRequest
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePreferences"; }

    AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

    AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline SavingsEstimationMode GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
    inline void SetSavingsEstimationMode(SavingsEstimationMode value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }
    inline UpdatePreferencesRequest& WithSavingsEstimationMode(SavingsEstimationMode value) { SetSavingsEstimationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline MemberAccountDiscountVisibility GetMemberAccountDiscountVisibility() const { return m_memberAccountDiscountVisibility; }
    inline bool MemberAccountDiscountVisibilityHasBeenSet() const { return m_memberAccountDiscountVisibilityHasBeenSet; }
    inline void SetMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value) { m_memberAccountDiscountVisibilityHasBeenSet = true; m_memberAccountDiscountVisibility = value; }
    inline UpdatePreferencesRequest& WithMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value) { SetMemberAccountDiscountVisibility(value); return *this;}
    ///@}
  private:

    SavingsEstimationMode m_savingsEstimationMode{SavingsEstimationMode::NOT_SET};
    bool m_savingsEstimationModeHasBeenSet = false;

    MemberAccountDiscountVisibility m_memberAccountDiscountVisibility{MemberAccountDiscountVisibility::NOT_SET};
    bool m_memberAccountDiscountVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
