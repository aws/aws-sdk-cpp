/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RuleSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class AWS_WAFV2_API DescribeManagedRuleGroupResult
  {
  public:
    DescribeManagedRuleGroupResult();
    DescribeManagedRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeManagedRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group. AWS WAF uses
     * web ACL capacity units (WCU) to calculate and control the operating resources
     * that are used to run your rules, rule groups, and web ACLs. AWS WAF calculates
     * capacity differently for each rule type, to reflect each rule's relative cost.
     * Rule group capacity is fixed at creation, so users can plan their web ACL WCU
     * usage when they use a rule group. The WCU limit for web ACLs is 1,500. </p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group. AWS WAF uses
     * web ACL capacity units (WCU) to calculate and control the operating resources
     * that are used to run your rules, rule groups, and web ACLs. AWS WAF calculates
     * capacity differently for each rule type, to reflect each rule's relative cost.
     * Rule group capacity is fixed at creation, so users can plan their web ACL WCU
     * usage when they use a rule group. The WCU limit for web ACLs is 1,500. </p>
     */
    inline void SetCapacity(long long value) { m_capacity = value; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group. AWS WAF uses
     * web ACL capacity units (WCU) to calculate and control the operating resources
     * that are used to run your rules, rule groups, and web ACLs. AWS WAF calculates
     * capacity differently for each rule type, to reflect each rule's relative cost.
     * Rule group capacity is fixed at creation, so users can plan their web ACL WCU
     * usage when they use a rule group. The WCU limit for web ACLs is 1,500. </p>
     */
    inline DescribeManagedRuleGroupResult& WithCapacity(long long value) { SetCapacity(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<RuleSummary>& GetRules() const{ return m_rules; }

    /**
     * <p/>
     */
    inline void SetRules(const Aws::Vector<RuleSummary>& value) { m_rules = value; }

    /**
     * <p/>
     */
    inline void SetRules(Aws::Vector<RuleSummary>&& value) { m_rules = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& WithRules(const Aws::Vector<RuleSummary>& value) { SetRules(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& WithRules(Aws::Vector<RuleSummary>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& AddRules(const RuleSummary& value) { m_rules.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& AddRules(RuleSummary&& value) { m_rules.push_back(std::move(value)); return *this; }

  private:

    long long m_capacity;

    Aws::Vector<RuleSummary> m_rules;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
