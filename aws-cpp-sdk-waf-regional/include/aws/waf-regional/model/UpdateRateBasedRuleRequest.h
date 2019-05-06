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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RuleUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API UpdateRateBasedRuleRequest : public WAFRegionalRequest
  {
  public:
    UpdateRateBasedRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRateBasedRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline UpdateRateBasedRuleRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline UpdateRateBasedRuleRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <code>RateBasedRule</code> that you want to
     * update. <code>RuleId</code> is returned by <code>CreateRateBasedRule</code> and
     * by <a>ListRateBasedRules</a>.</p>
     */
    inline UpdateRateBasedRuleRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRateBasedRuleRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRateBasedRuleRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRateBasedRuleRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline const Aws::Vector<RuleUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline void SetUpdates(const Aws::Vector<RuleUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline void SetUpdates(Aws::Vector<RuleUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline UpdateRateBasedRuleRequest& WithUpdates(const Aws::Vector<RuleUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline UpdateRateBasedRuleRequest& WithUpdates(Aws::Vector<RuleUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline UpdateRateBasedRuleRequest& AddUpdates(const RuleUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>RateBasedRule</a>. </p>
     */
    inline UpdateRateBasedRuleRequest& AddUpdates(RuleUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline long long GetRateLimit() const{ return m_rateLimit; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline UpdateRateBasedRuleRequest& WithRateLimit(long long value) { SetRateLimit(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<RuleUpdate> m_updates;
    bool m_updatesHasBeenSet;

    long long m_rateLimit;
    bool m_rateLimitHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
