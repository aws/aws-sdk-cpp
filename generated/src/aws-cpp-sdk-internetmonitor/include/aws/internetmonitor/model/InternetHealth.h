﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/AvailabilityMeasurement.h>
#include <aws/internetmonitor/model/PerformanceMeasurement.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Internet health includes measurements calculated by Amazon CloudWatch
   * Internet Monitor about the performance and availability for your application on
   * the internet. Amazon Web Services has substantial historical data about internet
   * performance and availability between Amazon Web Services services and different
   * network providers and geographies. By applying statistical analysis to the data,
   * Internet Monitor can detect when the performance and availability for your
   * application has dropped, compared to an estimated baseline that's already
   * calculated. To make it easier to see those drops, Internet Monitor reports the
   * information to you in the form of health scores: a performance score and an
   * availability score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/InternetHealth">AWS
   * API Reference</a></p>
   */
  class InternetHealth
  {
  public:
    AWS_INTERNETMONITOR_API InternetHealth() = default;
    AWS_INTERNETMONITOR_API InternetHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API InternetHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Availability in Internet Monitor represents the estimated percentage of
     * traffic that is not seeing an availability drop. For example, an availability
     * score of 99% for an end user and service location pair is equivalent to 1% of
     * the traffic experiencing an availability drop for that pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Internet Monitor calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline const AvailabilityMeasurement& GetAvailability() const { return m_availability; }
    inline bool AvailabilityHasBeenSet() const { return m_availabilityHasBeenSet; }
    template<typename AvailabilityT = AvailabilityMeasurement>
    void SetAvailability(AvailabilityT&& value) { m_availabilityHasBeenSet = true; m_availability = std::forward<AvailabilityT>(value); }
    template<typename AvailabilityT = AvailabilityMeasurement>
    InternetHealth& WithAvailability(AvailabilityT&& value) { SetAvailability(std::forward<AvailabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performance in Internet Monitor represents the estimated percentage of
     * traffic that is not seeing a performance drop. For example, a performance score
     * of 99% for an end user and service location pair is equivalent to 1% of the
     * traffic experiencing a performance drop for that pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Internet Monitor calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline const PerformanceMeasurement& GetPerformance() const { return m_performance; }
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }
    template<typename PerformanceT = PerformanceMeasurement>
    void SetPerformance(PerformanceT&& value) { m_performanceHasBeenSet = true; m_performance = std::forward<PerformanceT>(value); }
    template<typename PerformanceT = PerformanceMeasurement>
    InternetHealth& WithPerformance(PerformanceT&& value) { SetPerformance(std::forward<PerformanceT>(value)); return *this;}
    ///@}
  private:

    AvailabilityMeasurement m_availability;
    bool m_availabilityHasBeenSet = false;

    PerformanceMeasurement m_performance;
    bool m_performanceHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
