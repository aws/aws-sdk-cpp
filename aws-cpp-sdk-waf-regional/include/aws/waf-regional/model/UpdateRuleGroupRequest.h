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
#include <aws/waf-regional/model/RuleGroupUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API UpdateRuleGroupRequest : public WAFRegionalRequest
  {
  public:
    UpdateRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleGroupId</code> of the <a>RuleGroup</a> that you want to update.
     * <code>RuleGroupId</code> is returned by <a>CreateRuleGroup</a> and by
     * <a>ListRuleGroups</a>.</p>
     */
    inline UpdateRuleGroupRequest& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline const Aws::Vector<RuleGroupUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline void SetUpdates(const Aws::Vector<RuleGroupUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline void SetUpdates(Aws::Vector<RuleGroupUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline UpdateRuleGroupRequest& WithUpdates(const Aws::Vector<RuleGroupUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline UpdateRuleGroupRequest& WithUpdates(Aws::Vector<RuleGroupUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline UpdateRuleGroupRequest& AddUpdates(const RuleGroupUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>RuleGroupUpdate</code> objects that you want to insert into
     * or delete from a <a>RuleGroup</a>.</p> <p>You can only insert
     * <code>REGULAR</code> rules into a rule group.</p> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline UpdateRuleGroupRequest& AddUpdates(RuleGroupUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }


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
    inline UpdateRuleGroupRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRuleGroupRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRuleGroupRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet;

    Aws::Vector<RuleGroupUpdate> m_updates;
    bool m_updatesHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
