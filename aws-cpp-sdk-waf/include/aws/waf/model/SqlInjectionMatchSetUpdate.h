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
#include <aws/waf/model/SqlInjectionMatchTuple.h>

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
   * <p>Specifies the part of a web request that you want to inspect for snippets of
   * malicious SQL code and indicates whether you want to add the specification to a
   * <a>SqlInjectionMatchSet</a> or delete it from a
   * <code>SqlInjectionMatchSet</code>.</p>
   */
  class AWS_WAF_API SqlInjectionMatchSetUpdate
  {
  public:
    SqlInjectionMatchSetUpdate();
    SqlInjectionMatchSetUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    SqlInjectionMatchSetUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SqlInjectionMatchSetUpdate</a> to a
     * <a>SqlInjectionMatchSet</a>. Use <code>DELETE</code> to remove a
     * <code>SqlInjectionMatchSetUpdate</code> from a
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SqlInjectionMatchSetUpdate</a> to a
     * <a>SqlInjectionMatchSet</a>. Use <code>DELETE</code> to remove a
     * <code>SqlInjectionMatchSetUpdate</code> from a
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SqlInjectionMatchSetUpdate</a> to a
     * <a>SqlInjectionMatchSet</a>. Use <code>DELETE</code> to remove a
     * <code>SqlInjectionMatchSetUpdate</code> from a
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SqlInjectionMatchSetUpdate</a> to a
     * <a>SqlInjectionMatchSet</a>. Use <code>DELETE</code> to remove a
     * <code>SqlInjectionMatchSetUpdate</code> from a
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline SqlInjectionMatchSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SqlInjectionMatchSetUpdate</a> to a
     * <a>SqlInjectionMatchSet</a>. Use <code>DELETE</code> to remove a
     * <code>SqlInjectionMatchSetUpdate</code> from a
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline SqlInjectionMatchSetUpdate& WithAction(ChangeAction&& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline const SqlInjectionMatchTuple& GetSqlInjectionMatchTuple() const{ return m_sqlInjectionMatchTuple; }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline void SetSqlInjectionMatchTuple(const SqlInjectionMatchTuple& value) { m_sqlInjectionMatchTupleHasBeenSet = true; m_sqlInjectionMatchTuple = value; }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline void SetSqlInjectionMatchTuple(SqlInjectionMatchTuple&& value) { m_sqlInjectionMatchTupleHasBeenSet = true; m_sqlInjectionMatchTuple = value; }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline SqlInjectionMatchSetUpdate& WithSqlInjectionMatchTuple(const SqlInjectionMatchTuple& value) { SetSqlInjectionMatchTuple(value); return *this;}

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline SqlInjectionMatchSetUpdate& WithSqlInjectionMatchTuple(SqlInjectionMatchTuple&& value) { SetSqlInjectionMatchTuple(value); return *this;}

  private:
    ChangeAction m_action;
    bool m_actionHasBeenSet;
    SqlInjectionMatchTuple m_sqlInjectionMatchTuple;
    bool m_sqlInjectionMatchTupleHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
