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
    AWS_AUTOSCALING_API LoadForecast();
    AWS_AUTOSCALING_API LoadForecast(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LoadForecast& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline LoadForecast& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline LoadForecast& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline LoadForecast& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }

    /**
     * <p>The timestamps for the data points, in UTC format.</p>
     */
    inline LoadForecast& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }


    /**
     * <p>The values of the data points.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the data points.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the data points.</p>
     */
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the data points.</p>
     */
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the data points.</p>
     */
    inline LoadForecast& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the data points.</p>
     */
    inline LoadForecast& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the data points.</p>
     */
    inline LoadForecast& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The metric specification for the load forecast.</p>
     */
    inline const PredictiveScalingMetricSpecification& GetMetricSpecification() const{ return m_metricSpecification; }

    /**
     * <p>The metric specification for the load forecast.</p>
     */
    inline bool MetricSpecificationHasBeenSet() const { return m_metricSpecificationHasBeenSet; }

    /**
     * <p>The metric specification for the load forecast.</p>
     */
    inline void SetMetricSpecification(const PredictiveScalingMetricSpecification& value) { m_metricSpecificationHasBeenSet = true; m_metricSpecification = value; }

    /**
     * <p>The metric specification for the load forecast.</p>
     */
    inline void SetMetricSpecification(PredictiveScalingMetricSpecification&& value) { m_metricSpecificationHasBeenSet = true; m_metricSpecification = std::move(value); }

    /**
     * <p>The metric specification for the load forecast.</p>
     */
    inline LoadForecast& WithMetricSpecification(const PredictiveScalingMetricSpecification& value) { SetMetricSpecification(value); return *this;}

    /**
     * <p>The metric specification for the load forecast.</p>
     */
    inline LoadForecast& WithMetricSpecification(PredictiveScalingMetricSpecification&& value) { SetMetricSpecification(std::move(value)); return *this;}

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
