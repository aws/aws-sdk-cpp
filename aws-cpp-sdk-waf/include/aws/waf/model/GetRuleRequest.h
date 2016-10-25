/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API GetRuleRequest : public WAFRequest
  {
  public:
    GetRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline GetRuleRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline GetRuleRequest& WithRuleId(Aws::String&& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>Rule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRule</a> and by
     * <a>ListRules</a>.</p>
     */
    inline GetRuleRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:
    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
