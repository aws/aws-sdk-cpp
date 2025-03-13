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
  class ListPricingRulesAssociatedToPricingPlanResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanResult() = default;
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline const Aws::String& GetBillingPeriod() const { return m_billingPeriod; }
    template<typename BillingPeriodT = Aws::String>
    void SetBillingPeriod(BillingPeriodT&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::forward<BillingPeriodT>(value); }
    template<typename BillingPeriodT = Aws::String>
    ListPricingRulesAssociatedToPricingPlanResult& WithBillingPeriod(BillingPeriodT&& value) { SetBillingPeriod(std::forward<BillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline const Aws::String& GetPricingPlanArn() const { return m_pricingPlanArn; }
    template<typename PricingPlanArnT = Aws::String>
    void SetPricingPlanArn(PricingPlanArnT&& value) { m_pricingPlanArnHasBeenSet = true; m_pricingPlanArn = std::forward<PricingPlanArnT>(value); }
    template<typename PricingPlanArnT = Aws::String>
    ListPricingRulesAssociatedToPricingPlanResult& WithPricingPlanArn(PricingPlanArnT&& value) { SetPricingPlanArn(std::forward<PricingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingRuleArns() const { return m_pricingRuleArns; }
    template<typename PricingRuleArnsT = Aws::Vector<Aws::String>>
    void SetPricingRuleArns(PricingRuleArnsT&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns = std::forward<PricingRuleArnsT>(value); }
    template<typename PricingRuleArnsT = Aws::Vector<Aws::String>>
    ListPricingRulesAssociatedToPricingPlanResult& WithPricingRuleArns(PricingRuleArnsT&& value) { SetPricingRuleArns(std::forward<PricingRuleArnsT>(value)); return *this;}
    template<typename PricingRuleArnsT = Aws::String>
    ListPricingRulesAssociatedToPricingPlanResult& AddPricingRuleArns(PricingRuleArnsT&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.emplace_back(std::forward<PricingRuleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPricingRulesAssociatedToPricingPlanResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPricingRulesAssociatedToPricingPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::String m_pricingPlanArn;
    bool m_pricingPlanArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_pricingRuleArns;
    bool m_pricingRuleArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
