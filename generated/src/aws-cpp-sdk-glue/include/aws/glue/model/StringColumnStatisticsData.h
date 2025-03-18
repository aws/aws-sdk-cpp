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
   * <p>Defines column statistics supported for character sequence data
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StringColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class StringColumnStatisticsData
  {
  public:
    AWS_GLUE_API StringColumnStatisticsData() = default;
    AWS_GLUE_API StringColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StringColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the longest string in the column.</p>
     */
    inline long long GetMaximumLength() const { return m_maximumLength; }
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }
    inline void SetMaximumLength(long long value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }
    inline StringColumnStatisticsData& WithMaximumLength(long long value) { SetMaximumLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average string length in the column.</p>
     */
    inline double GetAverageLength() const { return m_averageLength; }
    inline bool AverageLengthHasBeenSet() const { return m_averageLengthHasBeenSet; }
    inline void SetAverageLength(double value) { m_averageLengthHasBeenSet = true; m_averageLength = value; }
    inline StringColumnStatisticsData& WithAverageLength(double value) { SetAverageLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of null values in the column.</p>
     */
    inline long long GetNumberOfNulls() const { return m_numberOfNulls; }
    inline bool NumberOfNullsHasBeenSet() const { return m_numberOfNullsHasBeenSet; }
    inline void SetNumberOfNulls(long long value) { m_numberOfNullsHasBeenSet = true; m_numberOfNulls = value; }
    inline StringColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct values in a column.</p>
     */
    inline long long GetNumberOfDistinctValues() const { return m_numberOfDistinctValues; }
    inline bool NumberOfDistinctValuesHasBeenSet() const { return m_numberOfDistinctValuesHasBeenSet; }
    inline void SetNumberOfDistinctValues(long long value) { m_numberOfDistinctValuesHasBeenSet = true; m_numberOfDistinctValues = value; }
    inline StringColumnStatisticsData& WithNumberOfDistinctValues(long long value) { SetNumberOfDistinctValues(value); return *this;}
    ///@}
  private:

    long long m_maximumLength{0};
    bool m_maximumLengthHasBeenSet = false;

    double m_averageLength{0.0};
    bool m_averageLengthHasBeenSet = false;

    long long m_numberOfNulls{0};
    bool m_numberOfNullsHasBeenSet = false;

    long long m_numberOfDistinctValues{0};
    bool m_numberOfDistinctValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
