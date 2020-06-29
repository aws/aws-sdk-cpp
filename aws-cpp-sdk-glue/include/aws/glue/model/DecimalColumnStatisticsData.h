/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DecimalNumber.h>
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
   * <p>Defines a decimal column statistics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DecimalColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DecimalColumnStatisticsData
  {
  public:
    DecimalColumnStatisticsData();
    DecimalColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    DecimalColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Minimum value of the column.</p>
     */
    inline const DecimalNumber& GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline void SetMinimumValue(const DecimalNumber& value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline void SetMinimumValue(DecimalNumber&& value) { m_minimumValueHasBeenSet = true; m_minimumValue = std::move(value); }

    /**
     * <p>Minimum value of the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMinimumValue(const DecimalNumber& value) { SetMinimumValue(value); return *this;}

    /**
     * <p>Minimum value of the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMinimumValue(DecimalNumber&& value) { SetMinimumValue(std::move(value)); return *this;}


    /**
     * <p>Maximum value of the column.</p>
     */
    inline const DecimalNumber& GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline void SetMaximumValue(const DecimalNumber& value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline void SetMaximumValue(DecimalNumber&& value) { m_maximumValueHasBeenSet = true; m_maximumValue = std::move(value); }

    /**
     * <p>Maximum value of the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMaximumValue(const DecimalNumber& value) { SetMaximumValue(value); return *this;}

    /**
     * <p>Maximum value of the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMaximumValue(DecimalNumber&& value) { SetMaximumValue(std::move(value)); return *this;}


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
    inline DecimalColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}


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
    inline DecimalColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}

  private:

    DecimalNumber m_minimumValue;
    bool m_minimumValueHasBeenSet;

    DecimalNumber m_maximumValue;
    bool m_maximumValueHasBeenSet;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet;

    long long m_numberOfDistinctValues;
    bool m_numberOfDistinctValuesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
