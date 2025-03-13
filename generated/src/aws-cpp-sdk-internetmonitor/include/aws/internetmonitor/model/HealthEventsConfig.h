/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/LocalHealthEventsConfig.h>
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
   * <p>A complex type with the configuration information that determines the
   * threshold and other conditions for when Internet Monitor creates a health event
   * for an overall performance or availability issue, across an application's
   * geographies.</p> <p>Defines the percentages, for overall performance scores and
   * availability scores for an application, that are the thresholds for when Amazon
   * CloudWatch Internet Monitor creates a health event. You can override the
   * defaults to set a custom threshold for overall performance or availability
   * scores, or both.</p> <p>You can also set thresholds for local health scores,,
   * where Internet Monitor creates a health event when scores cross a threshold for
   * one or more city-networks, in addition to creating an event when an overall
   * score crosses a threshold.</p> <p>If you don't set a health event threshold, the
   * default value is 95%.</p> <p>For local thresholds, you also set a minimum
   * percentage of overall traffic that is impacted by an issue before Internet
   * Monitor creates an event. In addition, you can disable local thresholds, for
   * performance scores, availability scores, or both.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
   * Change health event thresholds</a> in the Internet Monitor section of the
   * <i>CloudWatch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/HealthEventsConfig">AWS
   * API Reference</a></p>
   */
  class HealthEventsConfig
  {
  public:
    AWS_INTERNETMONITOR_API HealthEventsConfig() = default;
    AWS_INTERNETMONITOR_API HealthEventsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API HealthEventsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The health event threshold percentage set for availability scores.</p>
     */
    inline double GetAvailabilityScoreThreshold() const { return m_availabilityScoreThreshold; }
    inline bool AvailabilityScoreThresholdHasBeenSet() const { return m_availabilityScoreThresholdHasBeenSet; }
    inline void SetAvailabilityScoreThreshold(double value) { m_availabilityScoreThresholdHasBeenSet = true; m_availabilityScoreThreshold = value; }
    inline HealthEventsConfig& WithAvailabilityScoreThreshold(double value) { SetAvailabilityScoreThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health event threshold percentage set for performance scores.</p>
     */
    inline double GetPerformanceScoreThreshold() const { return m_performanceScoreThreshold; }
    inline bool PerformanceScoreThresholdHasBeenSet() const { return m_performanceScoreThresholdHasBeenSet; }
    inline void SetPerformanceScoreThreshold(double value) { m_performanceScoreThresholdHasBeenSet = true; m_performanceScoreThreshold = value; }
    inline HealthEventsConfig& WithPerformanceScoreThreshold(double value) { SetPerformanceScoreThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that determines the threshold and other conditions for when
     * Internet Monitor creates a health event for a local availability issue.</p>
     */
    inline const LocalHealthEventsConfig& GetAvailabilityLocalHealthEventsConfig() const { return m_availabilityLocalHealthEventsConfig; }
    inline bool AvailabilityLocalHealthEventsConfigHasBeenSet() const { return m_availabilityLocalHealthEventsConfigHasBeenSet; }
    template<typename AvailabilityLocalHealthEventsConfigT = LocalHealthEventsConfig>
    void SetAvailabilityLocalHealthEventsConfig(AvailabilityLocalHealthEventsConfigT&& value) { m_availabilityLocalHealthEventsConfigHasBeenSet = true; m_availabilityLocalHealthEventsConfig = std::forward<AvailabilityLocalHealthEventsConfigT>(value); }
    template<typename AvailabilityLocalHealthEventsConfigT = LocalHealthEventsConfig>
    HealthEventsConfig& WithAvailabilityLocalHealthEventsConfig(AvailabilityLocalHealthEventsConfigT&& value) { SetAvailabilityLocalHealthEventsConfig(std::forward<AvailabilityLocalHealthEventsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that determines the threshold and other conditions for when
     * Internet Monitor creates a health event for a local performance issue.</p>
     */
    inline const LocalHealthEventsConfig& GetPerformanceLocalHealthEventsConfig() const { return m_performanceLocalHealthEventsConfig; }
    inline bool PerformanceLocalHealthEventsConfigHasBeenSet() const { return m_performanceLocalHealthEventsConfigHasBeenSet; }
    template<typename PerformanceLocalHealthEventsConfigT = LocalHealthEventsConfig>
    void SetPerformanceLocalHealthEventsConfig(PerformanceLocalHealthEventsConfigT&& value) { m_performanceLocalHealthEventsConfigHasBeenSet = true; m_performanceLocalHealthEventsConfig = std::forward<PerformanceLocalHealthEventsConfigT>(value); }
    template<typename PerformanceLocalHealthEventsConfigT = LocalHealthEventsConfig>
    HealthEventsConfig& WithPerformanceLocalHealthEventsConfig(PerformanceLocalHealthEventsConfigT&& value) { SetPerformanceLocalHealthEventsConfig(std::forward<PerformanceLocalHealthEventsConfigT>(value)); return *this;}
    ///@}
  private:

    double m_availabilityScoreThreshold{0.0};
    bool m_availabilityScoreThresholdHasBeenSet = false;

    double m_performanceScoreThreshold{0.0};
    bool m_performanceScoreThresholdHasBeenSet = false;

    LocalHealthEventsConfig m_availabilityLocalHealthEventsConfig;
    bool m_availabilityLocalHealthEventsConfigHasBeenSet = false;

    LocalHealthEventsConfig m_performanceLocalHealthEventsConfig;
    bool m_performanceLocalHealthEventsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
