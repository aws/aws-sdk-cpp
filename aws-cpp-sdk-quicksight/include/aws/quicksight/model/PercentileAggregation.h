/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An aggregation based on the percentile of values in a dimension or
   * measure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PercentileAggregation">AWS
   * API Reference</a></p>
   */
  class PercentileAggregation
  {
  public:
    AWS_QUICKSIGHT_API PercentileAggregation();
    AWS_QUICKSIGHT_API PercentileAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PercentileAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentile value. This value can be any numeric constant 0–100. A
     * percentile value of 50 computes the median value of the measure.</p>
     */
    inline double GetPercentileValue() const{ return m_percentileValue; }

    /**
     * <p>The percentile value. This value can be any numeric constant 0–100. A
     * percentile value of 50 computes the median value of the measure.</p>
     */
    inline bool PercentileValueHasBeenSet() const { return m_percentileValueHasBeenSet; }

    /**
     * <p>The percentile value. This value can be any numeric constant 0–100. A
     * percentile value of 50 computes the median value of the measure.</p>
     */
    inline void SetPercentileValue(double value) { m_percentileValueHasBeenSet = true; m_percentileValue = value; }

    /**
     * <p>The percentile value. This value can be any numeric constant 0–100. A
     * percentile value of 50 computes the median value of the measure.</p>
     */
    inline PercentileAggregation& WithPercentileValue(double value) { SetPercentileValue(value); return *this;}

  private:

    double m_percentileValue;
    bool m_percentileValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
