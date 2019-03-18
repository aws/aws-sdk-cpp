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
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/ActivatedRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>Specifies whether to insert a <code>Rule</code> into or delete a
   * <code>Rule</code> from a <code>WebACL</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/WebACLUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API WebACLUpdate
  {
  public:
    WebACLUpdate();
    WebACLUpdate(Aws::Utils::Json::JsonView jsonValue);
    WebACLUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline WebACLUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline WebACLUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
     * specifies a <code>Rule</code> that you want to insert or delete, the priority of
     * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
     * AWS WAF to take when a web request matches the <code>Rule</code>
     * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p>
     */
    inline const ActivatedRule& GetActivatedRule() const{ return m_activatedRule; }

    /**
     * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
     * specifies a <code>Rule</code> that you want to insert or delete, the priority of
     * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
     * AWS WAF to take when a web request matches the <code>Rule</code>
     * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p>
     */
    inline bool ActivatedRuleHasBeenSet() const { return m_activatedRuleHasBeenSet; }

    /**
     * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
     * specifies a <code>Rule</code> that you want to insert or delete, the priority of
     * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
     * AWS WAF to take when a web request matches the <code>Rule</code>
     * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p>
     */
    inline void SetActivatedRule(const ActivatedRule& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = value; }

    /**
     * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
     * specifies a <code>Rule</code> that you want to insert or delete, the priority of
     * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
     * AWS WAF to take when a web request matches the <code>Rule</code>
     * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p>
     */
    inline void SetActivatedRule(ActivatedRule&& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = std::move(value); }

    /**
     * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
     * specifies a <code>Rule</code> that you want to insert or delete, the priority of
     * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
     * AWS WAF to take when a web request matches the <code>Rule</code>
     * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p>
     */
    inline WebACLUpdate& WithActivatedRule(const ActivatedRule& value) { SetActivatedRule(value); return *this;}

    /**
     * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
     * specifies a <code>Rule</code> that you want to insert or delete, the priority of
     * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
     * AWS WAF to take when a web request matches the <code>Rule</code>
     * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p>
     */
    inline WebACLUpdate& WithActivatedRule(ActivatedRule&& value) { SetActivatedRule(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    ActivatedRule m_activatedRule;
    bool m_activatedRuleHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
