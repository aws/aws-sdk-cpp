/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RuleGroupSummary.h>
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
  class CreateRuleGroupResult
  {
  public:
    AWS_WAFV2_API CreateRuleGroupResult();
    AWS_WAFV2_API CreateRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CreateRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>High-level information about a <a>RuleGroup</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RuleGroup</code>, and the ARN, that you provide to
     * the <a>RuleGroupReferenceStatement</a> to use the rule group in a
     * <a>Rule</a>.</p>
     */
    inline const RuleGroupSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>High-level information about a <a>RuleGroup</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RuleGroup</code>, and the ARN, that you provide to
     * the <a>RuleGroupReferenceStatement</a> to use the rule group in a
     * <a>Rule</a>.</p>
     */
    inline void SetSummary(const RuleGroupSummary& value) { m_summary = value; }

    /**
     * <p>High-level information about a <a>RuleGroup</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RuleGroup</code>, and the ARN, that you provide to
     * the <a>RuleGroupReferenceStatement</a> to use the rule group in a
     * <a>Rule</a>.</p>
     */
    inline void SetSummary(RuleGroupSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>High-level information about a <a>RuleGroup</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RuleGroup</code>, and the ARN, that you provide to
     * the <a>RuleGroupReferenceStatement</a> to use the rule group in a
     * <a>Rule</a>.</p>
     */
    inline CreateRuleGroupResult& WithSummary(const RuleGroupSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>High-level information about a <a>RuleGroup</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RuleGroup</code>, and the ARN, that you provide to
     * the <a>RuleGroupReferenceStatement</a> to use the rule group in a
     * <a>Rule</a>.</p>
     */
    inline CreateRuleGroupResult& WithSummary(RuleGroupSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    RuleGroupSummary m_summary;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
