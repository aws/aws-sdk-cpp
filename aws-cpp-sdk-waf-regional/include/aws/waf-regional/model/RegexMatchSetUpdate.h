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
#include <aws/waf-regional/model/RegexMatchTuple.h>
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
   * <p>In an <a>UpdateRegexMatchSet</a> request, <code>RegexMatchSetUpdate</code>
   * specifies whether to insert or delete a <a>RegexMatchTuple</a> and includes the
   * settings for the <code>RegexMatchTuple</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API RegexMatchSetUpdate
  {
  public:
    RegexMatchSetUpdate();
    RegexMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    RegexMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline RegexMatchSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline RegexMatchSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline const RegexMatchTuple& GetRegexMatchTuple() const{ return m_regexMatchTuple; }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline bool RegexMatchTupleHasBeenSet() const { return m_regexMatchTupleHasBeenSet; }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline void SetRegexMatchTuple(const RegexMatchTuple& value) { m_regexMatchTupleHasBeenSet = true; m_regexMatchTuple = value; }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline void SetRegexMatchTuple(RegexMatchTuple&& value) { m_regexMatchTupleHasBeenSet = true; m_regexMatchTuple = std::move(value); }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSetUpdate& WithRegexMatchTuple(const RegexMatchTuple& value) { SetRegexMatchTuple(value); return *this;}

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline RegexMatchSetUpdate& WithRegexMatchTuple(RegexMatchTuple&& value) { SetRegexMatchTuple(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    RegexMatchTuple m_regexMatchTuple;
    bool m_regexMatchTupleHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
