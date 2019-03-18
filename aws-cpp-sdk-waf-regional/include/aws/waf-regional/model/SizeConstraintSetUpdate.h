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
#include <aws/waf-regional/model/SizeConstraint.h>
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
   * <p>Specifies the part of a web request that you want to inspect the size of and
   * indicates whether you want to add the specification to a
   * <a>SizeConstraintSet</a> or delete it from a
   * <code>SizeConstraintSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SizeConstraintSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API SizeConstraintSetUpdate
  {
  public:
    SizeConstraintSetUpdate();
    SizeConstraintSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    SizeConstraintSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline SizeConstraintSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline SizeConstraintSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline const SizeConstraint& GetSizeConstraint() const{ return m_sizeConstraint; }

    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline bool SizeConstraintHasBeenSet() const { return m_sizeConstraintHasBeenSet; }

    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline void SetSizeConstraint(const SizeConstraint& value) { m_sizeConstraintHasBeenSet = true; m_sizeConstraint = value; }

    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline void SetSizeConstraint(SizeConstraint&& value) { m_sizeConstraintHasBeenSet = true; m_sizeConstraint = std::move(value); }

    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline SizeConstraintSetUpdate& WithSizeConstraint(const SizeConstraint& value) { SetSizeConstraint(value); return *this;}

    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline SizeConstraintSetUpdate& WithSizeConstraint(SizeConstraint&& value) { SetSizeConstraint(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    SizeConstraint m_sizeConstraint;
    bool m_sizeConstraintHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
