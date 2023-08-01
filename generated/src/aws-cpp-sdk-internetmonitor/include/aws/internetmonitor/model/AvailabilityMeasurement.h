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
   * <p>Amazon CloudWatch Internet Monitor calculates measurements about the
   * availability for your application's internet traffic between client locations
   * and Amazon Web Services. Amazon Web Services has substantial historical data
   * about internet performance and availability between Amazon Web Services services
   * and different network providers and geographies. By applying statistical
   * analysis to the data, Internet Monitor can detect when the performance and
   * availability for your application has dropped, compared to an estimated baseline
   * that's already calculated. To make it easier to see those drops, we report that
   * information to you in the form of health scores: a performance score and an
   * availability score.</p> <p>Availability in Internet Monitor represents the
   * estimated percentage of traffic that is not seeing an availability drop. For
   * example, an availability score of 99% for an end user and service location pair
   * is equivalent to 1% of the traffic experiencing an availability drop for that
   * pair.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
   * Internet Monitor calculates performance and availability scores</a> in the
   * Amazon CloudWatch Internet Monitor section of the <i>Amazon CloudWatch User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/AvailabilityMeasurement">AWS
   * API Reference</a></p>
   */
  class AvailabilityMeasurement
  {
  public:
    AWS_INTERNETMONITOR_API AvailabilityMeasurement();
    AWS_INTERNETMONITOR_API AvailabilityMeasurement(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API AvailabilityMeasurement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Experience scores, or health scores are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * summed into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the <i>CloudWatch User Guide</i> includes
     * detailed information about how Internet Monitor calculates health scores,
     * including performance and availability scores, and when it creates and resolves
     * health events. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Amazon Web Services calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline double GetExperienceScore() const{ return m_experienceScore; }

    /**
     * <p>Experience scores, or health scores are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * summed into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the <i>CloudWatch User Guide</i> includes
     * detailed information about how Internet Monitor calculates health scores,
     * including performance and availability scores, and when it creates and resolves
     * health events. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Amazon Web Services calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline bool ExperienceScoreHasBeenSet() const { return m_experienceScoreHasBeenSet; }

    /**
     * <p>Experience scores, or health scores are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * summed into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the <i>CloudWatch User Guide</i> includes
     * detailed information about how Internet Monitor calculates health scores,
     * including performance and availability scores, and when it creates and resolves
     * health events. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Amazon Web Services calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline void SetExperienceScore(double value) { m_experienceScoreHasBeenSet = true; m_experienceScore = value; }

    /**
     * <p>Experience scores, or health scores are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * summed into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the <i>CloudWatch User Guide</i> includes
     * detailed information about how Internet Monitor calculates health scores,
     * including performance and availability scores, and when it creates and resolves
     * health events. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Amazon Web Services calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline AvailabilityMeasurement& WithExperienceScore(double value) { SetExperienceScore(value); return *this;}


    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For information about how Internet Monitor calculates
     * impact, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">How
     * Internet Monitor works</a> in the Amazon CloudWatch Internet Monitor section of
     * the Amazon CloudWatch User Guide.</p>
     */
    inline double GetPercentOfTotalTrafficImpacted() const{ return m_percentOfTotalTrafficImpacted; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For information about how Internet Monitor calculates
     * impact, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">How
     * Internet Monitor works</a> in the Amazon CloudWatch Internet Monitor section of
     * the Amazon CloudWatch User Guide.</p>
     */
    inline bool PercentOfTotalTrafficImpactedHasBeenSet() const { return m_percentOfTotalTrafficImpactedHasBeenSet; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For information about how Internet Monitor calculates
     * impact, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">How
     * Internet Monitor works</a> in the Amazon CloudWatch Internet Monitor section of
     * the Amazon CloudWatch User Guide.</p>
     */
    inline void SetPercentOfTotalTrafficImpacted(double value) { m_percentOfTotalTrafficImpactedHasBeenSet = true; m_percentOfTotalTrafficImpacted = value; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For information about how Internet Monitor calculates
     * impact, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">How
     * Internet Monitor works</a> in the Amazon CloudWatch Internet Monitor section of
     * the Amazon CloudWatch User Guide.</p>
     */
    inline AvailabilityMeasurement& WithPercentOfTotalTrafficImpacted(double value) { SetPercentOfTotalTrafficImpacted(value); return *this;}


    /**
     * <p>The percentage of impact caused by a health event for client location traffic
     * globally.</p> <p>For information about how Internet Monitor calculates impact,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">Inside
     * Internet Monitor</a> in the Amazon CloudWatch Internet Monitor section of the
     * Amazon CloudWatch User Guide.</p>
     */
    inline double GetPercentOfClientLocationImpacted() const{ return m_percentOfClientLocationImpacted; }

    /**
     * <p>The percentage of impact caused by a health event for client location traffic
     * globally.</p> <p>For information about how Internet Monitor calculates impact,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">Inside
     * Internet Monitor</a> in the Amazon CloudWatch Internet Monitor section of the
     * Amazon CloudWatch User Guide.</p>
     */
    inline bool PercentOfClientLocationImpactedHasBeenSet() const { return m_percentOfClientLocationImpactedHasBeenSet; }

    /**
     * <p>The percentage of impact caused by a health event for client location traffic
     * globally.</p> <p>For information about how Internet Monitor calculates impact,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">Inside
     * Internet Monitor</a> in the Amazon CloudWatch Internet Monitor section of the
     * Amazon CloudWatch User Guide.</p>
     */
    inline void SetPercentOfClientLocationImpacted(double value) { m_percentOfClientLocationImpactedHasBeenSet = true; m_percentOfClientLocationImpacted = value; }

    /**
     * <p>The percentage of impact caused by a health event for client location traffic
     * globally.</p> <p>For information about how Internet Monitor calculates impact,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html">Inside
     * Internet Monitor</a> in the Amazon CloudWatch Internet Monitor section of the
     * Amazon CloudWatch User Guide.</p>
     */
    inline AvailabilityMeasurement& WithPercentOfClientLocationImpacted(double value) { SetPercentOfClientLocationImpacted(value); return *this;}

  private:

    double m_experienceScore;
    bool m_experienceScoreHasBeenSet = false;

    double m_percentOfTotalTrafficImpacted;
    bool m_percentOfTotalTrafficImpactedHasBeenSet = false;

    double m_percentOfClientLocationImpacted;
    bool m_percentOfClientLocationImpactedHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
