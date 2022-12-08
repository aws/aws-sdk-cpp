/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleGroupResponse.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class DeleteRuleGroupResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteRuleGroupResult();
    AWS_NETWORKFIREWALL_API DeleteRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline const RuleGroupResponse& GetRuleGroupResponse() const{ return m_ruleGroupResponse; }

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline void SetRuleGroupResponse(const RuleGroupResponse& value) { m_ruleGroupResponse = value; }

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline void SetRuleGroupResponse(RuleGroupResponse&& value) { m_ruleGroupResponse = std::move(value); }

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline DeleteRuleGroupResult& WithRuleGroupResponse(const RuleGroupResponse& value) { SetRuleGroupResponse(value); return *this;}

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline DeleteRuleGroupResult& WithRuleGroupResponse(RuleGroupResponse&& value) { SetRuleGroupResponse(std::move(value)); return *this;}

  private:

    RuleGroupResponse m_ruleGroupResponse;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
