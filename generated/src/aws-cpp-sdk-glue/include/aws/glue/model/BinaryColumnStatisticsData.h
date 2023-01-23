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
   * <p>Defines column statistics supported for bit sequence data
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BinaryColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class BinaryColumnStatisticsData
  {
  public:
    AWS_GLUE_API BinaryColumnStatisticsData();
    AWS_GLUE_API BinaryColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BinaryColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the longest bit sequence in the column.</p>
     */
    inline long long GetMaximumLength() const{ return m_maximumLength; }

    /**
     * <p>The size of the longest bit sequence in the column.</p>
     */
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }

    /**
     * <p>The size of the longest bit sequence in the column.</p>
     */
    inline void SetMaximumLength(long long value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }

    /**
     * <p>The size of the longest bit sequence in the column.</p>
     */
    inline BinaryColumnStatisticsData& WithMaximumLength(long long value) { SetMaximumLength(value); return *this;}


    /**
     * <p>The average bit sequence length in the column.</p>
     */
    inline double GetAverageLength() const{ return m_averageLength; }

    /**
     * <p>The average bit sequence length in the column.</p>
     */
    inline bool AverageLengthHasBeenSet() const { return m_averageLengthHasBeenSet; }

    /**
     * <p>The average bit sequence length in the column.</p>
     */
    inline void SetAverageLength(double value) { m_averageLengthHasBeenSet = true; m_averageLength = value; }

    /**
     * <p>The average bit sequence length in the column.</p>
     */
    inline BinaryColumnStatisticsData& WithAverageLength(double value) { SetAverageLength(value); return *this;}


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
    inline BinaryColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}

  private:

    long long m_maximumLength;
    bool m_maximumLengthHasBeenSet = false;

    double m_averageLength;
    bool m_averageLengthHasBeenSet = false;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
