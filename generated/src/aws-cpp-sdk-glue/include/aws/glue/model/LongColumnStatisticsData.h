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
   * <p>Defines column statistics supported for integer data columns.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LongColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class LongColumnStatisticsData
  {
  public:
    AWS_GLUE_API LongColumnStatisticsData() = default;
    AWS_GLUE_API LongColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LongColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lowest value in the column.</p>
     */
    inline long long GetMinimumValue() const { return m_minimumValue; }
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }
    inline void SetMinimumValue(long long value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }
    inline LongColumnStatisticsData& WithMinimumValue(long long value) { SetMinimumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest value in the column.</p>
     */
    inline long long GetMaximumValue() const { return m_maximumValue; }
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }
    inline void SetMaximumValue(long long value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }
    inline LongColumnStatisticsData& WithMaximumValue(long long value) { SetMaximumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of null values in the column.</p>
     */
    inline long long GetNumberOfNulls() const { return m_numberOfNulls; }
    inline bool NumberOfNullsHasBeenSet() const { return m_numberOfNullsHasBeenSet; }
    inline void SetNumberOfNulls(long long value) { m_numberOfNullsHasBeenSet = true; m_numberOfNulls = value; }
    inline LongColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct values in a column.</p>
     */
    inline long long GetNumberOfDistinctValues() const { return m_numberOfDistinctValues; }
    inline bool NumberOfDistinctValuesHasBeenSet() const { return m_numberOfDistinctValuesHasBeenSet; }
    inline void SetNumberOfDistinctValues(long long value) { m_numberOfDistinctValuesHasBeenSet = true; m_numberOfDistinctValues = value; }
    inline LongColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}
    ///@}
  private:

    long long m_minimumValue{0};
    bool m_minimumValueHasBeenSet = false;

    long long m_maximumValue{0};
    bool m_maximumValueHasBeenSet = false;

    long long m_numberOfNulls{0};
    bool m_numberOfNullsHasBeenSet = false;

    long long m_numberOfDistinctValues{0};
    bool m_numberOfDistinctValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
