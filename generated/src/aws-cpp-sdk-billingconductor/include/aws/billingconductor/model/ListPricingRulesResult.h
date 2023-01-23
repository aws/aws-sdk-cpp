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
    AWS_BILLINGCONDUCTOR_API ListPricingRulesResult();
    AWS_BILLINGCONDUCTOR_API ListPricingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriod = value; }

    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriod = std::move(value); }

    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriod.assign(value); }

    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline ListPricingRulesResult& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline ListPricingRulesResult& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The billing period for which the described pricing rules are applicable.
     * </p>
     */
    inline ListPricingRulesResult& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline const Aws::Vector<PricingRuleListElement>& GetPricingRules() const{ return m_pricingRules; }

    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline void SetPricingRules(const Aws::Vector<PricingRuleListElement>& value) { m_pricingRules = value; }

    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline void SetPricingRules(Aws::Vector<PricingRuleListElement>&& value) { m_pricingRules = std::move(value); }

    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline ListPricingRulesResult& WithPricingRules(const Aws::Vector<PricingRuleListElement>& value) { SetPricingRules(value); return *this;}

    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline ListPricingRulesResult& WithPricingRules(Aws::Vector<PricingRuleListElement>&& value) { SetPricingRules(std::move(value)); return *this;}

    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline ListPricingRulesResult& AddPricingRules(const PricingRuleListElement& value) { m_pricingRules.push_back(value); return *this; }

    /**
     * <p> A list containing the described pricing rules. </p>
     */
    inline ListPricingRulesResult& AddPricingRules(PricingRuleListElement&& value) { m_pricingRules.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline ListPricingRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline ListPricingRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to get pricing rules.
     * </p>
     */
    inline ListPricingRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_billingPeriod;

    Aws::Vector<PricingRuleListElement> m_pricingRules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
