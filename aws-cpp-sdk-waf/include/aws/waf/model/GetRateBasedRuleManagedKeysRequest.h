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
  class AWS_WAF_API GetRateBasedRuleManagedKeysRequest : public WAFRequest
  {
  public:
    GetRateBasedRuleManagedKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRateBasedRuleManagedKeys"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline GetRateBasedRuleManagedKeysRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline GetRateBasedRuleManagedKeysRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline GetRateBasedRuleManagedKeysRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline GetRateBasedRuleManagedKeysRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline GetRateBasedRuleManagedKeysRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline GetRateBasedRuleManagedKeysRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
