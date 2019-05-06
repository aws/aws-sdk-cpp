/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API GetRuleGroupRequest : public WAFRequest
  {
  public:
    GetRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRuleGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline GetRuleGroupRequest& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline GetRuleGroupRequest& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to get.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline GetRuleGroupRequest& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}

  private:

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
