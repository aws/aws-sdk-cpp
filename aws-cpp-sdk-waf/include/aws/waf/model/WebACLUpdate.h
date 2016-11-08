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
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/ActivatedRule.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>Specifies whether to insert a <code>Rule</code> into or delete a
   * <code>Rule</code> from a <code>WebACL</code>.</p>
   */
  class AWS_WAF_API WebACLUpdate
  {
  public:
    WebACLUpdate();
    WebACLUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    WebACLUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline WebACLUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert a <code>Rule</code> into or delete a
     * <code>Rule</code> from a <code>WebACL</code>.</p>
     */
    inline WebACLUpdate& WithAction(ChangeAction&& value) { SetAction(value); return *this;}

    
    inline const ActivatedRule& GetActivatedRule() const{ return m_activatedRule; }

    
    inline void SetActivatedRule(const ActivatedRule& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = value; }

    
    inline void SetActivatedRule(ActivatedRule&& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = value; }

    
    inline WebACLUpdate& WithActivatedRule(const ActivatedRule& value) { SetActivatedRule(value); return *this;}

    
    inline WebACLUpdate& WithActivatedRule(ActivatedRule&& value) { SetActivatedRule(value); return *this;}

  private:
    ChangeAction m_action;
    bool m_actionHasBeenSet;
    ActivatedRule m_activatedRule;
    bool m_activatedRuleHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
