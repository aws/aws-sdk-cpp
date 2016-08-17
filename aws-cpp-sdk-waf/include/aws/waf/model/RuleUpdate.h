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
#include <aws/waf/model/Predicate.h>

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
   * <p>Specifies a <code>Predicate</code> (such as an <code>IPSet</code>) and
   * indicates whether you want to add it to a <code>Rule</code> or delete it from a
   * <code>Rule</code>.</p>
   */
  class AWS_WAF_API RuleUpdate
  {
  public:
    RuleUpdate();
    RuleUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    RuleUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specify <code>INSERT</code> to add a <code>Predicate</code> to a
     * <code>Rule</code>. Use <code>DELETE</code> to remove a <code>Predicate</code>
     * from a <code>Rule</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specify <code>INSERT</code> to add a <code>Predicate</code> to a
     * <code>Rule</code>. Use <code>DELETE</code> to remove a <code>Predicate</code>
     * from a <code>Rule</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add a <code>Predicate</code> to a
     * <code>Rule</code>. Use <code>DELETE</code> to remove a <code>Predicate</code>
     * from a <code>Rule</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add a <code>Predicate</code> to a
     * <code>Rule</code>. Use <code>DELETE</code> to remove a <code>Predicate</code>
     * from a <code>Rule</code>.</p>
     */
    inline RuleUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specify <code>INSERT</code> to add a <code>Predicate</code> to a
     * <code>Rule</code>. Use <code>DELETE</code> to remove a <code>Predicate</code>
     * from a <code>Rule</code>.</p>
     */
    inline RuleUpdate& WithAction(ChangeAction&& value) { SetAction(value); return *this;}

    /**
     * <p>The ID of the <code>Predicate</code> (such as an <code>IPSet</code>) that you
     * want to add to a <code>Rule</code>.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }

    /**
     * <p>The ID of the <code>Predicate</code> (such as an <code>IPSet</code>) that you
     * want to add to a <code>Rule</code>.</p>
     */
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }

    /**
     * <p>The ID of the <code>Predicate</code> (such as an <code>IPSet</code>) that you
     * want to add to a <code>Rule</code>.</p>
     */
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = value; }

    /**
     * <p>The ID of the <code>Predicate</code> (such as an <code>IPSet</code>) that you
     * want to add to a <code>Rule</code>.</p>
     */
    inline RuleUpdate& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}

    /**
     * <p>The ID of the <code>Predicate</code> (such as an <code>IPSet</code>) that you
     * want to add to a <code>Rule</code>.</p>
     */
    inline RuleUpdate& WithPredicate(Predicate&& value) { SetPredicate(value); return *this;}

  private:
    ChangeAction m_action;
    bool m_actionHasBeenSet;
    Predicate m_predicate;
    bool m_predicateHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
