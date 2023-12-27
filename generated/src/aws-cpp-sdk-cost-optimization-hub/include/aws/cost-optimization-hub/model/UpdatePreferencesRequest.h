/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
#include <aws/cost-optimization-hub/model/SavingsEstimationMode.h>
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
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePreferences"; }

    AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

    AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline const MemberAccountDiscountVisibility& GetMemberAccountDiscountVisibility() const{ return m_memberAccountDiscountVisibility; }

    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline bool MemberAccountDiscountVisibilityHasBeenSet() const { return m_memberAccountDiscountVisibilityHasBeenSet; }

    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline void SetMemberAccountDiscountVisibility(const MemberAccountDiscountVisibility& value) { m_memberAccountDiscountVisibilityHasBeenSet = true; m_memberAccountDiscountVisibility = value; }

    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline void SetMemberAccountDiscountVisibility(MemberAccountDiscountVisibility&& value) { m_memberAccountDiscountVisibilityHasBeenSet = true; m_memberAccountDiscountVisibility = std::move(value); }

    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline UpdatePreferencesRequest& WithMemberAccountDiscountVisibility(const MemberAccountDiscountVisibility& value) { SetMemberAccountDiscountVisibility(value); return *this;}

    /**
     * <p>Sets the "member account discount visibility" preference.</p>
     */
    inline UpdatePreferencesRequest& WithMemberAccountDiscountVisibility(MemberAccountDiscountVisibility&& value) { SetMemberAccountDiscountVisibility(std::move(value)); return *this;}


    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline const SavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }

    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }

    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline void SetSavingsEstimationMode(const SavingsEstimationMode& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }

    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline void SetSavingsEstimationMode(SavingsEstimationMode&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::move(value); }

    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline UpdatePreferencesRequest& WithSavingsEstimationMode(const SavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}

    /**
     * <p>Sets the "savings estimation mode" preference.</p>
     */
    inline UpdatePreferencesRequest& WithSavingsEstimationMode(SavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}

  private:

    MemberAccountDiscountVisibility m_memberAccountDiscountVisibility;
    bool m_memberAccountDiscountVisibilityHasBeenSet = false;

    SavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
