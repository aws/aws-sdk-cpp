/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/MetricUnit.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the metric data point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/MetricDatapoint">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API MetricDatapoint
  {
  public:
    MetricDatapoint();
    MetricDatapoint(Aws::Utils::Json::JsonView jsonValue);
    MetricDatapoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The average.</p>
     */
    inline double GetAverage() const{ return m_average; }

    /**
     * <p>The average.</p>
     */
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    /**
     * <p>The average.</p>
     */
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>The average.</p>
     */
    inline MetricDatapoint& WithAverage(double value) { SetAverage(value); return *this;}


    /**
     * <p>The maximum.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum.</p>
     */
    inline MetricDatapoint& WithMaximum(double value) { SetMaximum(value); return *this;}


    /**
     * <p>The minimum.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum.</p>
     */
    inline MetricDatapoint& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>The sample count.</p>
     */
    inline double GetSampleCount() const{ return m_sampleCount; }

    /**
     * <p>The sample count.</p>
     */
    inline bool SampleCountHasBeenSet() const { return m_sampleCountHasBeenSet; }

    /**
     * <p>The sample count.</p>
     */
    inline void SetSampleCount(double value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }

    /**
     * <p>The sample count.</p>
     */
    inline MetricDatapoint& WithSampleCount(double value) { SetSampleCount(value); return *this;}


    /**
     * <p>The sum.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum.</p>
     */
    inline MetricDatapoint& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The timestamp (e.g., <code>1479816991.349</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp (e.g., <code>1479816991.349</code>).</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp (e.g., <code>1479816991.349</code>).</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp (e.g., <code>1479816991.349</code>).</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp (e.g., <code>1479816991.349</code>).</p>
     */
    inline MetricDatapoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp (e.g., <code>1479816991.349</code>).</p>
     */
    inline MetricDatapoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The unit. </p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit. </p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit. </p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit. </p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit. </p>
     */
    inline MetricDatapoint& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit. </p>
     */
    inline MetricDatapoint& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    double m_average;
    bool m_averageHasBeenSet;

    double m_maximum;
    bool m_maximumHasBeenSet;

    double m_minimum;
    bool m_minimumHasBeenSet;

    double m_sampleCount;
    bool m_sampleCountHasBeenSet;

    double m_sum;
    bool m_sumHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    MetricUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
