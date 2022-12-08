/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines column statistics supported for floating-point number data
   * columns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DoubleColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class DoubleColumnStatisticsData
  {
  public:
    AWS_GLUE_API DoubleColumnStatisticsData();
    AWS_GLUE_API DoubleColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DoubleColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lowest value in the column.</p>
     */
    inline double GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline void SetMinimumValue(double value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline DoubleColumnStatisticsData& WithMinimumValue(double value) { SetMinimumValue(value); return *this;}


    /**
     * <p>The highest value in the column.</p>
     */
    inline double GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>The highest value in the column.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>The highest value in the column.</p>
     */
    inline void SetMaximumValue(double value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>The highest value in the column.</p>
     */
    inline DoubleColumnStatisticsData& WithMaximumValue(double value) { SetMaximumValue(value); return *this;}


    /**
     * <p>The number of null values in the column.</p>
     */
    inline long long GetNumberOfNulls() const{ return m_numberOfNulls; }

    /**
     * <p>The number of null values in the column.</p>
     */
    inline bool NumberOfNullsHasBeenSet() const { return m_numberOfNullsHasBeenSet; }

    /**
     * <p>The number of null values in the column.</p>
     */
    inline void SetNumberOfNulls(long long value) { m_numberOfNullsHasBeenSet = true; m_numberOfNulls = value; }

    /**
     * <p>The number of null values in the column.</p>
     */
    inline DoubleColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}


    /**
     * <p>The number of distinct values in a column.</p>
     */
    inline long long GetNumberOfDistinctValues() const{ return m_numberOfDistinctValues; }

    /**
     * <p>The number of distinct values in a column.</p>
     */
    inline bool NumberOfDistinctValuesHasBeenSet() const { return m_numberOfDistinctValuesHasBeenSet; }

    /**
     * <p>The number of distinct values in a column.</p>
     */
    inline void SetNumberOfDistinctValues(long long value) { m_numberOfDistinctValuesHasBeenSet = true; m_numberOfDistinctValues = value; }

    /**
     * <p>The number of distinct values in a column.</p>
     */
    inline DoubleColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}

  private:

    double m_minimumValue;
    bool m_minimumValueHasBeenSet = false;

    double m_maximumValue;
    bool m_maximumValueHasBeenSet = false;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet = false;

    long long m_numberOfDistinctValues;
    bool m_numberOfDistinctValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
