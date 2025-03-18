/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/PredictiveScalingMetricSpecification.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>A <code>GetPredictiveScalingForecast</code> call returns the load forecast
   * for a predictive scaling policy. This structure includes the data points for
   * that load forecast, along with the timestamps of those data points and the
   * metric specification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LoadForecast">AWS
   * API Reference</a></p>
   */
  class LoadForecast
  {
  public:
    AWS_AUTOSCALING_API LoadForecast() = default;
    AWS_AUTOSCALING_API LoadForecast(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LoadForecast& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The timestamps for the data points, in UTC format.</p>
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
     * <p>The values of the data points.</p>
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
     * <p>The metric specification for the load forecast.</p>
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
} // namespace AutoScaling
} // namespace Aws
