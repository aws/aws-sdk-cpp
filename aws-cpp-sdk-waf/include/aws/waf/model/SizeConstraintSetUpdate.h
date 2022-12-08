/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/SizeConstraint.h>
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
namespace WAF
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
   * web request that you want to inspect the size of and indicates whether you want
   * to add the specification to a <a>SizeConstraintSet</a> or delete it from a
   * <code>SizeConstraintSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SizeConstraintSetUpdate">AWS
   * API Reference</a></p>
   */
  class SizeConstraintSetUpdate
  {
  public:
    AWS_WAF_API SizeConstraintSetUpdate();
    AWS_WAF_API SizeConstraintSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API SizeConstraintSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_actionHasBeenSet = false;

    SizeConstraint m_sizeConstraint;
    bool m_sizeConstraintHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
