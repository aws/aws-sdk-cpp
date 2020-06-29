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
   * <p>Defines a binary column statistics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BinaryColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API BinaryColumnStatisticsData
  {
  public:
    BinaryColumnStatisticsData();
    BinaryColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    BinaryColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Maximum length of the column.</p>
     */
    inline long long GetMaximumLength() const{ return m_maximumLength; }

    /**
     * <p>Maximum length of the column.</p>
     */
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }

    /**
     * <p>Maximum length of the column.</p>
     */
    inline void SetMaximumLength(long long value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }

    /**
     * <p>Maximum length of the column.</p>
     */
    inline BinaryColumnStatisticsData& WithMaximumLength(long long value) { SetMaximumLength(value); return *this;}


    /**
     * <p>Average length of the column.</p>
     */
    inline double GetAverageLength() const{ return m_averageLength; }

    /**
     * <p>Average length of the column.</p>
     */
    inline bool AverageLengthHasBeenSet() const { return m_averageLengthHasBeenSet; }

    /**
     * <p>Average length of the column.</p>
     */
    inline void SetAverageLength(double value) { m_averageLengthHasBeenSet = true; m_averageLength = value; }

    /**
     * <p>Average length of the column.</p>
     */
    inline BinaryColumnStatisticsData& WithAverageLength(double value) { SetAverageLength(value); return *this;}


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
    inline BinaryColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}

  private:

    long long m_maximumLength;
    bool m_maximumLengthHasBeenSet;

    double m_averageLength;
    bool m_averageLengthHasBeenSet;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
