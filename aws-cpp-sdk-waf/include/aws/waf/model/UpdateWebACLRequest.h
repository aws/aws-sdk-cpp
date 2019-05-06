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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/WafAction.h>
#include <aws/waf/model/WebACLUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API UpdateWebACLRequest : public WAFRequest
  {
  public:
    UpdateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline UpdateWebACLRequest& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline UpdateWebACLRequest& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline UpdateWebACLRequest& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


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
    inline UpdateWebACLRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateWebACLRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateWebACLRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<WebACLUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<WebACLUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<WebACLUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline UpdateWebACLRequest& WithUpdates(const Aws::Vector<WebACLUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline UpdateWebACLRequest& WithUpdates(Aws::Vector<WebACLUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline UpdateWebACLRequest& AddUpdates(const WebACLUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline UpdateWebACLRequest& AddUpdates(WebACLUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }


    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline const WafAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline void SetDefaultAction(const WafAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline void SetDefaultAction(WafAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline UpdateWebACLRequest& WithDefaultAction(const WafAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline UpdateWebACLRequest& WithDefaultAction(WafAction&& value) { SetDefaultAction(std::move(value)); return *this;}

  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<WebACLUpdate> m_updates;
    bool m_updatesHasBeenSet;

    WafAction m_defaultAction;
    bool m_defaultActionHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
