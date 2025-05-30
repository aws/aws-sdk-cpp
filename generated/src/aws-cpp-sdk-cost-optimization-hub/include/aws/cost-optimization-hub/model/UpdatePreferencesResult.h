/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/SavingsEstimationMode.h>
#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
#include <aws/cost-optimization-hub/model/PreferredCommitment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostOptimizationHub
{
namespace Model
{
  class UpdatePreferencesResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesResult() = default;
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API UpdatePreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows the status of the "savings estimation mode" preference.</p>
     */
    inline SavingsEstimationMode GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
    inline void SetSavingsEstimationMode(SavingsEstimationMode value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }
    inline UpdatePreferencesResult& WithSavingsEstimationMode(SavingsEstimationMode value) { SetSavingsEstimationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the status of the "member account discount visibility" preference.</p>
     */
    inline MemberAccountDiscountVisibility GetMemberAccountDiscountVisibility() const { return m_memberAccountDiscountVisibility; }
    inline void SetMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value) { m_memberAccountDiscountVisibilityHasBeenSet = true; m_memberAccountDiscountVisibility = value; }
    inline UpdatePreferencesResult& WithMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value) { SetMemberAccountDiscountVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the updated preferences for how Reserved Instances and Savings Plans
     * cost-saving opportunities are prioritized in terms of payment option and term
     * length.</p>
     */
    inline const PreferredCommitment& GetPreferredCommitment() const { return m_preferredCommitment; }
    template<typename PreferredCommitmentT = PreferredCommitment>
    void SetPreferredCommitment(PreferredCommitmentT&& value) { m_preferredCommitmentHasBeenSet = true; m_preferredCommitment = std::forward<PreferredCommitmentT>(value); }
    template<typename PreferredCommitmentT = PreferredCommitment>
    UpdatePreferencesResult& WithPreferredCommitment(PreferredCommitmentT&& value) { SetPreferredCommitment(std::forward<PreferredCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SavingsEstimationMode m_savingsEstimationMode{SavingsEstimationMode::NOT_SET};
    bool m_savingsEstimationModeHasBeenSet = false;

    MemberAccountDiscountVisibility m_memberAccountDiscountVisibility{MemberAccountDiscountVisibility::NOT_SET};
    bool m_memberAccountDiscountVisibilityHasBeenSet = false;

    PreferredCommitment m_preferredCommitment;
    bool m_preferredCommitmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
