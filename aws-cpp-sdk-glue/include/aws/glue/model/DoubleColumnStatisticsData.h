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
   * <p>Defines a double column statistics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DoubleColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DoubleColumnStatisticsData
  {
  public:
    DoubleColumnStatisticsData();
    DoubleColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    DoubleColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Minimum value of the column.</p>
     */
    inline double GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline void SetMinimumValue(double value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline DoubleColumnStatisticsData& WithMinimumValue(double value) { SetMinimumValue(value); return *this;}


    /**
     * <p>Maximum value of the column.</p>
     */
    inline double GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline void SetMaximumValue(double value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline DoubleColumnStatisticsData& WithMaximumValue(double value) { SetMaximumValue(value); return *this;}


    /**
     * <p>Number of nulls.</p>
     */
    inline long long GetNumberOfNulls() const{ return m_numberOfNulls; }

    /**
     * <p>Number of nulls.</p>
     */
    inline bool NumberOfNullsHasBeenSet() const { return m_numberOfNullsHasBeenSet; }

    /**
     * <p>Number of nulls.</p>
     */
    inline void SetNumberOfNulls(long long value) { m_numberOfNullsHasBeenSet = true; m_numberOfNulls = value; }

    /**
     * <p>Number of nulls.</p>
     */
    inline DoubleColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}


    /**
     * <p>Number of distinct values.</p>
     */
    inline long long GetNumberOfDistinctValues() const{ return m_numberOfDistinctValues; }

    /**
     * <p>Number of distinct values.</p>
     */
    inline bool NumberOfDistinctValuesHasBeenSet() const { return m_numberOfDistinctValuesHasBeenSet; }

    /**
     * <p>Number of distinct values.</p>
     */
    inline void SetNumberOfDistinctValues(long long value) { m_numberOfDistinctValuesHasBeenSet = true; m_numberOfDistinctValues = value; }

    /**
     * <p>Number of distinct values.</p>
     */
    inline DoubleColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}

  private:

    double m_minimumValue;
    bool m_minimumValueHasBeenSet;

    double m_maximumValue;
    bool m_maximumValueHasBeenSet;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet;

    long long m_numberOfDistinctValues;
    bool m_numberOfDistinctValuesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
