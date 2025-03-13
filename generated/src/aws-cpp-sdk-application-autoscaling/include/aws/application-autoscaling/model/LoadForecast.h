/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricSpecification.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p> A <code>GetPredictiveScalingForecast</code> call returns the load forecast
   * for a predictive scaling policy. This structure includes the data points for
   * that load forecast, along with the timestamps of those data points and the
   * metric specification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/LoadForecast">AWS
   * API Reference</a></p>
   */
  class LoadForecast
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API LoadForecast() = default;
    AWS_APPLICATIONAUTOSCALING_API LoadForecast(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API LoadForecast& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The timestamps for the data points, in UTC format. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::forward<TimestampsT>(value); }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    LoadForecast& WithTimestamps(TimestampsT&& value) { SetTimestamps(std::forward<TimestampsT>(value)); return *this;}
    template<typename TimestampsT = Aws::Utils::DateTime>
    LoadForecast& AddTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps.emplace_back(std::forward<TimestampsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The values of the data points. </p>
     */
    inline const Aws::Vector<double>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<double>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<double>>
    LoadForecast& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline LoadForecast& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The metric specification for the load forecast. </p>
     */
    inline const PredictiveScalingMetricSpecification& GetMetricSpecification() const { return m_metricSpecification; }
    inline bool MetricSpecificationHasBeenSet() const { return m_metricSpecificationHasBeenSet; }
    template<typename MetricSpecificationT = PredictiveScalingMetricSpecification>
    void SetMetricSpecification(MetricSpecificationT&& value) { m_metricSpecificationHasBeenSet = true; m_metricSpecification = std::forward<MetricSpecificationT>(value); }
    template<typename MetricSpecificationT = PredictiveScalingMetricSpecification>
    LoadForecast& WithMetricSpecification(MetricSpecificationT&& value) { SetMetricSpecification(std::forward<MetricSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;

    PredictiveScalingMetricSpecification m_metricSpecification;
    bool m_metricSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
