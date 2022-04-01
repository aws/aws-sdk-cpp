﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/SqlInjectionMatchTuple.h>
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
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies the part of a
   * web request that you want to inspect for snippets of malicious SQL code and
   * indicates whether you want to add the specification to a
   * <a>SqlInjectionMatchSet</a> or delete it from a
   * <code>SqlInjectionMatchSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SqlInjectionMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API SqlInjectionMatchSetUpdate
  {
  public:
    SqlInjectionMatchSetUpdate();
    SqlInjectionMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    SqlInjectionMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

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
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

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
    inline SqlInjectionMatchSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


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
    inline bool SqlInjectionMatchTupleHasBeenSet() const { return m_sqlInjectionMatchTupleHasBeenSet; }

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
    inline void SetSqlInjectionMatchTuple(SqlInjectionMatchTuple&& value) { m_sqlInjectionMatchTupleHasBeenSet = true; m_sqlInjectionMatchTuple = std::move(value); }

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
    inline SqlInjectionMatchSetUpdate& WithSqlInjectionMatchTuple(SqlInjectionMatchTuple&& value) { SetSqlInjectionMatchTuple(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    SqlInjectionMatchTuple m_sqlInjectionMatchTuple;
    bool m_sqlInjectionMatchTupleHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
