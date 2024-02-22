/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/LocalHealthEventsConfigStatus.h>
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
   * for a local performance or availability issue, when scores cross a threshold for
   * one or more city-networks.</p> <p>Defines the percentages, for performance
   * scores or availability scores, that are the local thresholds for when Amazon
   * CloudWatch Internet Monitor creates a health event. Also defines whether a local
   * threshold is enabled or disabled, and the minimum percentage of overall traffic
   * that must be impacted by an issue before Internet Monitor creates an event when
   * a threshold is crossed for a local health score.</p> <p>If you don't set a local
   * health event threshold, the default value is 60%.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-overview.html#IMUpdateThresholdFromOverview">
   * Change health event thresholds</a> in the Internet Monitor section of the
   * <i>CloudWatch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/LocalHealthEventsConfig">AWS
   * API Reference</a></p>
   */
  class LocalHealthEventsConfig
  {
  public:
    AWS_INTERNETMONITOR_API LocalHealthEventsConfig();
    AWS_INTERNETMONITOR_API LocalHealthEventsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API LocalHealthEventsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of whether Internet Monitor creates a health event based on a
     * threshold percentage set for a local health score. The status can be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline const LocalHealthEventsConfigStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of whether Internet Monitor creates a health event based on a
     * threshold percentage set for a local health score. The status can be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of whether Internet Monitor creates a health event based on a
     * threshold percentage set for a local health score. The status can be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetStatus(const LocalHealthEventsConfigStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of whether Internet Monitor creates a health event based on a
     * threshold percentage set for a local health score. The status can be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetStatus(LocalHealthEventsConfigStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of whether Internet Monitor creates a health event based on a
     * threshold percentage set for a local health score. The status can be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline LocalHealthEventsConfig& WithStatus(const LocalHealthEventsConfigStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of whether Internet Monitor creates a health event based on a
     * threshold percentage set for a local health score. The status can be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline LocalHealthEventsConfig& WithStatus(LocalHealthEventsConfigStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The health event threshold percentage set for a local health score.</p>
     */
    inline double GetHealthScoreThreshold() const{ return m_healthScoreThreshold; }

    /**
     * <p>The health event threshold percentage set for a local health score.</p>
     */
    inline bool HealthScoreThresholdHasBeenSet() const { return m_healthScoreThresholdHasBeenSet; }

    /**
     * <p>The health event threshold percentage set for a local health score.</p>
     */
    inline void SetHealthScoreThreshold(double value) { m_healthScoreThresholdHasBeenSet = true; m_healthScoreThreshold = value; }

    /**
     * <p>The health event threshold percentage set for a local health score.</p>
     */
    inline LocalHealthEventsConfig& WithHealthScoreThreshold(double value) { SetHealthScoreThreshold(value); return *this;}


    /**
     * <p>The minimum percentage of overall traffic for an application that must be
     * impacted by an issue before Internet Monitor creates an event when a threshold
     * is crossed for a local health score.</p> <p>If you don't set a minimum traffic
     * impact threshold, the default value is 0.1%.</p>
     */
    inline double GetMinTrafficImpact() const{ return m_minTrafficImpact; }

    /**
     * <p>The minimum percentage of overall traffic for an application that must be
     * impacted by an issue before Internet Monitor creates an event when a threshold
     * is crossed for a local health score.</p> <p>If you don't set a minimum traffic
     * impact threshold, the default value is 0.1%.</p>
     */
    inline bool MinTrafficImpactHasBeenSet() const { return m_minTrafficImpactHasBeenSet; }

    /**
     * <p>The minimum percentage of overall traffic for an application that must be
     * impacted by an issue before Internet Monitor creates an event when a threshold
     * is crossed for a local health score.</p> <p>If you don't set a minimum traffic
     * impact threshold, the default value is 0.1%.</p>
     */
    inline void SetMinTrafficImpact(double value) { m_minTrafficImpactHasBeenSet = true; m_minTrafficImpact = value; }

    /**
     * <p>The minimum percentage of overall traffic for an application that must be
     * impacted by an issue before Internet Monitor creates an event when a threshold
     * is crossed for a local health score.</p> <p>If you don't set a minimum traffic
     * impact threshold, the default value is 0.1%.</p>
     */
    inline LocalHealthEventsConfig& WithMinTrafficImpact(double value) { SetMinTrafficImpact(value); return *this;}

  private:

    LocalHealthEventsConfigStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_healthScoreThreshold;
    bool m_healthScoreThresholdHasBeenSet = false;

    double m_minTrafficImpact;
    bool m_minTrafficImpactHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
