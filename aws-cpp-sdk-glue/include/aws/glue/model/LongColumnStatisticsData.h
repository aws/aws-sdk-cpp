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
   * <p>Defines a long column statistics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LongColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API LongColumnStatisticsData
  {
  public:
    LongColumnStatisticsData();
    LongColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    LongColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Minimum value of the column.</p>
     */
    inline long long GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline void SetMinimumValue(long long value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline LongColumnStatisticsData& WithMinimumValue(long long value) { SetMinimumValue(value); return *this;}


    /**
     * <p>Maximum value of the column.</p>
     */
    inline long long GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline void SetMaximumValue(long long value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline LongColumnStatisticsData& WithMaximumValue(long long value) { SetMaximumValue(value); return *this;}


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
    inline LongColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}


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
    inline LongColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}

  private:

    long long m_minimumValue;
    bool m_minimumValueHasBeenSet;

    long long m_maximumValue;
    bool m_maximumValueHasBeenSet;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet;

    long long m_numberOfDistinctValues;
    bool m_numberOfDistinctValuesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
