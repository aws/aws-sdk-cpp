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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A statistical ranking (percentile) which indicates a threshold value by which
   * a behavior is determined to be in compliance or in violation of the
   * behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StatisticalThreshold">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API StatisticalThreshold
  {
  public:
    StatisticalThreshold();
    StatisticalThreshold(Aws::Utils::Json::JsonView jsonValue);
    StatisticalThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline const Aws::String& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline void SetStatistic(const Aws::String& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline void SetStatistic(Aws::String&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline void SetStatistic(const char* value) { m_statisticHasBeenSet = true; m_statistic.assign(value); }

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline StatisticalThreshold& WithStatistic(const Aws::String& value) { SetStatistic(value); return *this;}

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline StatisticalThreshold& WithStatistic(Aws::String&& value) { SetStatistic(std::move(value)); return *this;}

    /**
     * <p>The percentile which resolves to a threshold value by which compliance with a
     * behavior is determined. Metrics are collected over the specified period
     * (<code>durationSeconds</code>) from all reporting devices in your account and
     * statistical ranks are calculated. Then, the measurements from a device are
     * collected over the same period. If the accumulated measurements from the device
     * fall above or below (<code>comparisonOperator</code>) the value associated with
     * the percentile specified, then the device is considered to be in compliance with
     * the behavior, otherwise a violation occurs.</p>
     */
    inline StatisticalThreshold& WithStatistic(const char* value) { SetStatistic(value); return *this;}

  private:

    Aws::String m_statistic;
    bool m_statisticHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
