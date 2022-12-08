/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class DeleteRuleGroupRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API DeleteRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRuleGroup"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline DeleteRuleGroupRequest& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline DeleteRuleGroupRequest& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to delete.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline DeleteRuleGroupRequest& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


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
    inline DeleteRuleGroupRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRuleGroupRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRuleGroupRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
