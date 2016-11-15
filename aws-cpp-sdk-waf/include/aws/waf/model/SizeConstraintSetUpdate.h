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
#include <aws/waf/model/SizeConstraint.h>

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
   * <p>Specifies the part of a web request that you want to inspect the size of and
   * indicates whether you want to add the specification to a
   * <a>SizeConstraintSet</a> or delete it from a <code>SizeConstraintSet</code>.</p>
   */
  class AWS_WAF_API SizeConstraintSetUpdate
  {
  public:
    SizeConstraintSetUpdate();
    SizeConstraintSetUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    SizeConstraintSetUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = value; }

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
    inline SizeConstraintSetUpdate& WithAction(ChangeAction&& value) { SetAction(value); return *this;}

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
    inline void SetSizeConstraint(const SizeConstraint& value) { m_sizeConstraintHasBeenSet = true; m_sizeConstraint = value; }

    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline void SetSizeConstraint(SizeConstraint&& value) { m_sizeConstraintHasBeenSet = true; m_sizeConstraint = value; }

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
    inline SizeConstraintSetUpdate& WithSizeConstraint(SizeConstraint&& value) { SetSizeConstraint(value); return *this;}

  private:
    ChangeAction m_action;
    bool m_actionHasBeenSet;
    SizeConstraint m_sizeConstraint;
    bool m_sizeConstraintHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
