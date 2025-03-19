/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListPricingPlansAssociatedWithPricingRuleResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult() = default;
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline const Aws::String& GetBillingPeriod() const { return m_billingPeriod; }
    template<typename BillingPeriodT = Aws::String>
    void SetBillingPeriod(BillingPeriodT&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::forward<BillingPeriodT>(value); }
    template<typename BillingPeriodT = Aws::String>
    ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(BillingPeriodT&& value) { SetBillingPeriod(std::forward<BillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline const Aws::String& GetPricingRuleArn() const { return m_pricingRuleArn; }
    template<typename PricingRuleArnT = Aws::String>
    void SetPricingRuleArn(PricingRuleArnT&& value) { m_pricingRuleArnHasBeenSet = true; m_pricingRuleArn = std::forward<PricingRuleArnT>(value); }
    template<typename PricingRuleArnT = Aws::String>
    ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(PricingRuleArnT&& value) { SetPricingRuleArn(std::forward<PricingRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingPlanArns() const { return m_pricingPlanArns; }
    template<typename PricingPlanArnsT = Aws::Vector<Aws::String>>
    void SetPricingPlanArns(PricingPlanArnsT&& value) { m_pricingPlanArnsHasBeenSet = true; m_pricingPlanArns = std::forward<PricingPlanArnsT>(value); }
    template<typename PricingPlanArnsT = Aws::Vector<Aws::String>>
    ListPricingPlansAssociatedWithPricingRuleResult& WithPricingPlanArns(PricingPlanArnsT&& value) { SetPricingPlanArns(std::forward<PricingPlanArnsT>(value)); return *this;}
    template<typename PricingPlanArnsT = Aws::String>
    ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(PricingPlanArnsT&& value) { m_pricingPlanArnsHasBeenSet = true; m_pricingPlanArns.emplace_back(std::forward<PricingPlanArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPricingPlansAssociatedWithPricingRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::String m_pricingRuleArn;
    bool m_pricingRuleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_pricingPlanArns;
    bool m_pricingPlanArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
