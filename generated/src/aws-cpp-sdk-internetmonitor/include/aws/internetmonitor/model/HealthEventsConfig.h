/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>

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
   * <p>A complex type for the configuration. Defines the health event threshold
   * percentages, for performance score and availability score. Amazon CloudWatch
   * Internet Monitor creates a health event when there's an internet issue that
   * affects your application end users where a health score percentage is at or
   * below a set threshold. If you don't set a health event threshold, the default
   * value is 95%.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/HealthEventsConfig">AWS
   * API Reference</a></p>
   */
  class HealthEventsConfig
  {
  public:
    AWS_INTERNETMONITOR_API HealthEventsConfig();
    AWS_INTERNETMONITOR_API HealthEventsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API HealthEventsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The health event threshold percentage set for availability scores.</p>
     */
    inline double GetAvailabilityScoreThreshold() const{ return m_availabilityScoreThreshold; }

    /**
     * <p>The health event threshold percentage set for availability scores.</p>
     */
    inline bool AvailabilityScoreThresholdHasBeenSet() const { return m_availabilityScoreThresholdHasBeenSet; }

    /**
     * <p>The health event threshold percentage set for availability scores.</p>
     */
    inline void SetAvailabilityScoreThreshold(double value) { m_availabilityScoreThresholdHasBeenSet = true; m_availabilityScoreThreshold = value; }

    /**
     * <p>The health event threshold percentage set for availability scores.</p>
     */
    inline HealthEventsConfig& WithAvailabilityScoreThreshold(double value) { SetAvailabilityScoreThreshold(value); return *this;}


    /**
     * <p>The health event threshold percentage set for performance scores.</p>
     */
    inline double GetPerformanceScoreThreshold() const{ return m_performanceScoreThreshold; }

    /**
     * <p>The health event threshold percentage set for performance scores.</p>
     */
    inline bool PerformanceScoreThresholdHasBeenSet() const { return m_performanceScoreThresholdHasBeenSet; }

    /**
     * <p>The health event threshold percentage set for performance scores.</p>
     */
    inline void SetPerformanceScoreThreshold(double value) { m_performanceScoreThresholdHasBeenSet = true; m_performanceScoreThreshold = value; }

    /**
     * <p>The health event threshold percentage set for performance scores.</p>
     */
    inline HealthEventsConfig& WithPerformanceScoreThreshold(double value) { SetPerformanceScoreThreshold(value); return *this;}

  private:

    double m_availabilityScoreThreshold;
    bool m_availabilityScoreThresholdHasBeenSet = false;

    double m_performanceScoreThreshold;
    bool m_performanceScoreThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
