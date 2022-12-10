/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericalAggregationFunction.h>
#include <aws/quicksight/model/CategoricalAggregationFunction.h>
#include <aws/quicksight/model/DateAggregationFunction.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An aggregation function aggregates values from a dimension or measure.</p>
   * <p>This is a union type structure. For this structure to be valid, only one of
   * the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AggregationFunction">AWS
   * API Reference</a></p>
   */
  class AggregationFunction
  {
  public:
    AWS_QUICKSIGHT_API AggregationFunction();
    AWS_QUICKSIGHT_API AggregationFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline const NumericalAggregationFunction& GetNumericalAggregationFunction() const{ return m_numericalAggregationFunction; }

    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline bool NumericalAggregationFunctionHasBeenSet() const { return m_numericalAggregationFunctionHasBeenSet; }

    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline void SetNumericalAggregationFunction(const NumericalAggregationFunction& value) { m_numericalAggregationFunctionHasBeenSet = true; m_numericalAggregationFunction = value; }

    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline void SetNumericalAggregationFunction(NumericalAggregationFunction&& value) { m_numericalAggregationFunctionHasBeenSet = true; m_numericalAggregationFunction = std::move(value); }

    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline AggregationFunction& WithNumericalAggregationFunction(const NumericalAggregationFunction& value) { SetNumericalAggregationFunction(value); return *this;}

    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline AggregationFunction& WithNumericalAggregationFunction(NumericalAggregationFunction&& value) { SetNumericalAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline const CategoricalAggregationFunction& GetCategoricalAggregationFunction() const{ return m_categoricalAggregationFunction; }

    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline bool CategoricalAggregationFunctionHasBeenSet() const { return m_categoricalAggregationFunctionHasBeenSet; }

    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline void SetCategoricalAggregationFunction(const CategoricalAggregationFunction& value) { m_categoricalAggregationFunctionHasBeenSet = true; m_categoricalAggregationFunction = value; }

    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline void SetCategoricalAggregationFunction(CategoricalAggregationFunction&& value) { m_categoricalAggregationFunctionHasBeenSet = true; m_categoricalAggregationFunction = std::move(value); }

    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline AggregationFunction& WithCategoricalAggregationFunction(const CategoricalAggregationFunction& value) { SetCategoricalAggregationFunction(value); return *this;}

    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline AggregationFunction& WithCategoricalAggregationFunction(CategoricalAggregationFunction&& value) { SetCategoricalAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline const DateAggregationFunction& GetDateAggregationFunction() const{ return m_dateAggregationFunction; }

    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline bool DateAggregationFunctionHasBeenSet() const { return m_dateAggregationFunctionHasBeenSet; }

    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline void SetDateAggregationFunction(const DateAggregationFunction& value) { m_dateAggregationFunctionHasBeenSet = true; m_dateAggregationFunction = value; }

    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline void SetDateAggregationFunction(DateAggregationFunction&& value) { m_dateAggregationFunctionHasBeenSet = true; m_dateAggregationFunction = std::move(value); }

    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline AggregationFunction& WithDateAggregationFunction(const DateAggregationFunction& value) { SetDateAggregationFunction(value); return *this;}

    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline AggregationFunction& WithDateAggregationFunction(DateAggregationFunction&& value) { SetDateAggregationFunction(std::move(value)); return *this;}

  private:

    NumericalAggregationFunction m_numericalAggregationFunction;
    bool m_numericalAggregationFunctionHasBeenSet = false;

    CategoricalAggregationFunction m_categoricalAggregationFunction;
    bool m_categoricalAggregationFunctionHasBeenSet = false;

    DateAggregationFunction m_dateAggregationFunction;
    bool m_dateAggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
