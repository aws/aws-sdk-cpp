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
#include <aws/waf-regional/model/XssMatchTuple.h>
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
   * <p>Specifies the part of a web request that you want to inspect for cross-site
   * scripting attacks and indicates whether you want to add the specification to an
   * <a>XssMatchSet</a> or delete it from an <code>XssMatchSet</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/XssMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API XssMatchSetUpdate
  {
  public:
    XssMatchSetUpdate();
    XssMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    XssMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline const XssMatchTuple& GetXssMatchTuple() const{ return m_xssMatchTuple; }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline bool XssMatchTupleHasBeenSet() const { return m_xssMatchTupleHasBeenSet; }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline void SetXssMatchTuple(const XssMatchTuple& value) { m_xssMatchTupleHasBeenSet = true; m_xssMatchTuple = value; }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline void SetXssMatchTuple(XssMatchTuple&& value) { m_xssMatchTupleHasBeenSet = true; m_xssMatchTuple = std::move(value); }

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline XssMatchSetUpdate& WithXssMatchTuple(const XssMatchTuple& value) { SetXssMatchTuple(value); return *this;}

    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline XssMatchSetUpdate& WithXssMatchTuple(XssMatchTuple&& value) { SetXssMatchTuple(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    XssMatchTuple m_xssMatchTuple;
    bool m_xssMatchTupleHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
