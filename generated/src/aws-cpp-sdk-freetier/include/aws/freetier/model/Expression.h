/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/freetier/model/DimensionValues.h>
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
namespace FreeTier
{
namespace Model
{

  /**
   * <p>Use <code>Expression</code> to filter in the <code>GetFreeTierUsage</code>
   * API operation.</p> <p>You can use the following patterns:</p> <ul> <li>
   * <p>Simple dimension values (<code>Dimensions</code> root operator)</p> </li>
   * <li> <p>Complex expressions with logical operators (<code>AND</code>,
   * <code>NOT</code>, and <code>OR</code> root operators).</p> </li> </ul> <p>For
   * <i>simple dimension values</i>, you can set the dimension name, values, and
   * match type for the filters that you plan to use.</p> <p> <b>Example for simple
   * dimension values</b> </p> <p>You can filter to match exactly for
   * <code>REGION==us-east-1 OR REGION==us-west-1</code>.</p> <p>The corresponding
   * <code>Expression</code> appears like the following: <code>{ "Dimensions": {
   * "Key": "REGION", "Values": [ "us-east-1", "us-west-1" ], "MatchOptions":
   * ["EQUALS"] } }</code> </p> <p>As shown in the previous example, lists of
   * dimension values are combined with <code>OR</code> when you apply the
   * filter.</p> <p>For <i>complex expressions with logical operators</i>, you can
   * have nested expressions to use the logical operators and specify advanced
   * filtering.</p> <p> <b>Example for complex expressions with logical operators</b>
   * </p> <p>You can filter by <code>((REGION == us-east-1 OR REGION == us-west-1) OR
   * (SERVICE CONTAINS AWSLambda)) AND (USAGE_TYPE !CONTAINS
   * DataTransfer)</code>.</p> <p>The corresponding <code>Expression</code> appears
   * like the following: <code>{ "And": [ {"Or": [ {"Dimensions": { "Key": "REGION",
   * "Values": [ "us-east-1", "us-west-1" ], "MatchOptions": ["EQUALS"] }},
   * {"Dimensions": { "Key": "SERVICE", "Values": ["AWSLambda"], "MatchOptions":
   * ["CONTAINS"] } } ]}, {"Not": {"Dimensions": { "Key": "USAGE_TYPE", "Values":
   * ["DataTransfer"], "MatchOptions": ["CONTAINS"] }}} ] }</code> </p> <p>In the
   * following <b>Contents</b>, you must specify exactly one of the following root
   * operators.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_FREETIER_API Expression();
    AWS_FREETIER_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline const Aws::Vector<Expression>& GetAnd() const{ return m_and; }

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline void SetAnd(const Aws::Vector<Expression>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline void SetAnd(Aws::Vector<Expression>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline Expression& WithAnd(const Aws::Vector<Expression>& value) { SetAnd(value); return *this;}

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline Expression& WithAnd(Aws::Vector<Expression>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline Expression& AddAnd(const Expression& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>Return results that match all <code>Expressions</code> that you specified in
     * the array.</p>
     */
    inline Expression& AddAnd(Expression&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }


    /**
     * <p>The specific dimension, values, and match type to filter objects with.</p>
     */
    inline const DimensionValues& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The specific dimension, values, and match type to filter objects with.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The specific dimension, values, and match type to filter objects with.</p>
     */
    inline void SetDimensions(const DimensionValues& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The specific dimension, values, and match type to filter objects with.</p>
     */
    inline void SetDimensions(DimensionValues&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The specific dimension, values, and match type to filter objects with.</p>
     */
    inline Expression& WithDimensions(const DimensionValues& value) { SetDimensions(value); return *this;}

    /**
     * <p>The specific dimension, values, and match type to filter objects with.</p>
     */
    inline Expression& WithDimensions(DimensionValues&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>Return results that don’t match the <code>Expression</code> that you
     * specified.</p>
     */
    AWS_FREETIER_API const Expression& GetNot() const;

    /**
     * <p>Return results that don’t match the <code>Expression</code> that you
     * specified.</p>
     */
    AWS_FREETIER_API bool NotHasBeenSet() const;

    /**
     * <p>Return results that don’t match the <code>Expression</code> that you
     * specified.</p>
     */
    AWS_FREETIER_API void SetNot(const Expression& value);

    /**
     * <p>Return results that don’t match the <code>Expression</code> that you
     * specified.</p>
     */
    AWS_FREETIER_API void SetNot(Expression&& value);

    /**
     * <p>Return results that don’t match the <code>Expression</code> that you
     * specified.</p>
     */
    AWS_FREETIER_API Expression& WithNot(const Expression& value);

    /**
     * <p>Return results that don’t match the <code>Expression</code> that you
     * specified.</p>
     */
    AWS_FREETIER_API Expression& WithNot(Expression&& value);


    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline const Aws::Vector<Expression>& GetOr() const{ return m_or; }

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline void SetOr(const Aws::Vector<Expression>& value) { m_orHasBeenSet = true; m_or = value; }

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline void SetOr(Aws::Vector<Expression>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline Expression& WithOr(const Aws::Vector<Expression>& value) { SetOr(value); return *this;}

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline Expression& WithOr(Aws::Vector<Expression>&& value) { SetOr(std::move(value)); return *this;}

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline Expression& AddOr(const Expression& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }

    /**
     * <p>Return results that match any of the <code>Expressions</code> that you
     * specified. in the array.</p>
     */
    inline Expression& AddOr(Expression&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Expression> m_and;
    bool m_andHasBeenSet = false;

    DimensionValues m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    std::shared_ptr<Expression> m_not;
    bool m_notHasBeenSet = false;

    Aws::Vector<Expression> m_or;
    bool m_orHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
