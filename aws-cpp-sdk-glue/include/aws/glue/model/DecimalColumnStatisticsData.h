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
   * <p>Defines column statistics supported for fixed-point number data
   * columns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DecimalColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class DecimalColumnStatisticsData
  {
  public:
    AWS_GLUE_API DecimalColumnStatisticsData();
    AWS_GLUE_API DecimalColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DecimalColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lowest value in the column.</p>
     */
    inline const DecimalNumber& GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline void SetMinimumValue(const DecimalNumber& value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline void SetMinimumValue(DecimalNumber&& value) { m_minimumValueHasBeenSet = true; m_minimumValue = std::move(value); }

    /**
     * <p>The lowest value in the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMinimumValue(const DecimalNumber& value) { SetMinimumValue(value); return *this;}

    /**
     * <p>The lowest value in the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMinimumValue(DecimalNumber&& value) { SetMinimumValue(std::move(value)); return *this;}


    /**
     * <p>The highest value in the column.</p>
     */
    inline const DecimalNumber& GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>The highest value in the column.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>The highest value in the column.</p>
     */
    inline void SetMaximumValue(const DecimalNumber& value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>The highest value in the column.</p>
     */
    inline void SetMaximumValue(DecimalNumber&& value) { m_maximumValueHasBeenSet = true; m_maximumValue = std::move(value); }

    /**
     * <p>The highest value in the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMaximumValue(const DecimalNumber& value) { SetMaximumValue(value); return *this;}

    /**
     * <p>The highest value in the column.</p>
     */
    inline DecimalColumnStatisticsData& WithMaximumValue(DecimalNumber&& value) { SetMaximumValue(std::move(value)); return *this;}


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
    inline DecimalColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}


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
    inline DecimalColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}

  private:

    DecimalNumber m_minimumValue;
    bool m_minimumValueHasBeenSet = false;

    DecimalNumber m_maximumValue;
    bool m_maximumValueHasBeenSet = false;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet = false;

    long long m_numberOfDistinctValues;
    bool m_numberOfDistinctValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
