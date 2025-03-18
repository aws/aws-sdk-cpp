/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/PricingRuleListElement.h>
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
  class ListPricingRulesResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesResult() = default;
    AWS_BILLINGCONDUCTOR_API ListPricingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline const Aws::String& GetBillingPeriod() const { return m_billingPeriod; }
    template<typename BillingPeriodT = Aws::String>
    void SetBillingPeriod(BillingPeriodT&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::forward<BillingPeriodT>(value); }
    template<typename BillingPeriodT = Aws::String>
    ListPricingRulesResult& WithBillingPeriod(BillingPeriodT&& value) { SetBillingPeriod(std::forward<BillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline const Aws::Vector<PricingRuleListElement>& GetPricingRules() const { return m_pricingRules; }
    template<typename PricingRulesT = Aws::Vector<PricingRuleListElement>>
    void SetPricingRules(PricingRulesT&& value) { m_pricingRulesHasBeenSet = true; m_pricingRules = std::forward<PricingRulesT>(value); }
    template<typename PricingRulesT = Aws::Vector<PricingRuleListElement>>
    ListPricingRulesResult& WithPricingRules(PricingRulesT&& value) { SetPricingRules(std::forward<PricingRulesT>(value)); return *this;}
    template<typename PricingRulesT = PricingRuleListElement>
    ListPricingRulesResult& AddPricingRules(PricingRulesT&& value) { m_pricingRulesHasBeenSet = true; m_pricingRules.emplace_back(std::forward<PricingRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPricingRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPricingRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::Vector<PricingRuleListElement> m_pricingRules;
    bool m_pricingRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
