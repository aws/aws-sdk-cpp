﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RuleUpdate.h>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API UpdateRuleRequest : public WAFRequest
  {
  public:
    UpdateRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline UpdateRuleRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline UpdateRuleRequest& WithRuleId(Aws::String&& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline UpdateRuleRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRuleRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRuleRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateRuleRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<RuleUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<RuleUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<RuleUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline UpdateRuleRequest& WithUpdates(const Aws::Vector<RuleUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline UpdateRuleRequest& WithUpdates(Aws::Vector<RuleUpdate>&& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline UpdateRuleRequest& AddUpdates(const RuleUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline UpdateRuleRequest& AddUpdates(RuleUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

  private:
    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
    Aws::Vector<RuleUpdate> m_updates;
    bool m_updatesHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
