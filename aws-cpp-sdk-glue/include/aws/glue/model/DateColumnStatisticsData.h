/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a date column statistics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DateColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DateColumnStatisticsData
  {
  public:
    DateColumnStatisticsData();
    DateColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    DateColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Minimum value of the column.</p>
     */
    inline const Aws::Utils::DateTime& GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline void SetMinimumValue(const Aws::Utils::DateTime& value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline void SetMinimumValue(Aws::Utils::DateTime&& value) { m_minimumValueHasBeenSet = true; m_minimumValue = std::move(value); }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline DateColumnStatisticsData& WithMinimumValue(const Aws::Utils::DateTime& value) { SetMinimumValue(value); return *this;}

    /**
     * <p>Minimum value of the column.</p>
     */
    inline DateColumnStatisticsData& WithMinimumValue(Aws::Utils::DateTime&& value) { SetMinimumValue(std::move(value)); return *this;}


    /**
     * <p>Maximum value of the column.</p>
     */
    inline const Aws::Utils::DateTime& GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline void SetMaximumValue(const Aws::Utils::DateTime& value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline void SetMaximumValue(Aws::Utils::DateTime&& value) { m_maximumValueHasBeenSet = true; m_maximumValue = std::move(value); }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline DateColumnStatisticsData& WithMaximumValue(const Aws::Utils::DateTime& value) { SetMaximumValue(value); return *this;}

    /**
     * <p>Maximum value of the column.</p>
     */
    inline DateColumnStatisticsData& WithMaximumValue(Aws::Utils::DateTime&& value) { SetMaximumValue(std::move(value)); return *this;}


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
    inline DateColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}


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
    inline DateColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}

  private:

    Aws::Utils::DateTime m_minimumValue;
    bool m_minimumValueHasBeenSet;

    Aws::Utils::DateTime m_maximumValue;
    bool m_maximumValueHasBeenSet;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet;

    long long m_numberOfDistinctValues;
    bool m_numberOfDistinctValuesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
