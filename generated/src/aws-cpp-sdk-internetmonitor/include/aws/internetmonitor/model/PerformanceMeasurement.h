/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/RoundTripTime.h>
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
   * <p>Amazon CloudWatch Internet Monitor calculates measurements about the
   * performance for your application's internet traffic between client locations and
   * Amazon Web Services. Amazon Web Services has substantial historical data about
   * internet performance and availability between Amazon Web Services services and
   * different network providers and geographies. By applying statistical analysis to
   * the data, Internet Monitor can detect when the performance and availability for
   * your application has dropped, compared to an estimated baseline that's already
   * calculated. To make it easier to see those drops, we report that information to
   * you in the form of health scores: a performance score and an availability
   * score.</p> <p>Performance in Internet Monitor represents the estimated
   * percentage of traffic that is not seeing a performance drop. For example, a
   * performance score of 99% for an end user and service location pair is equivalent
   * to 1% of the traffic experiencing a performance drop for that pair.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
   * Internet Monitor calculates performance and availability scores</a> in the
   * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/PerformanceMeasurement">AWS
   * API Reference</a></p>
   */
  class PerformanceMeasurement
  {
  public:
    AWS_INTERNETMONITOR_API PerformanceMeasurement();
    AWS_INTERNETMONITOR_API PerformanceMeasurement(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API PerformanceMeasurement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Experience scores, or health scores, are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * totaled into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the CloudWatch User Guide includes
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
     * <p>Experience scores, or health scores, are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * totaled into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the CloudWatch User Guide includes
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
     * <p>Experience scores, or health scores, are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * totaled into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the CloudWatch User Guide includes
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
     * <p>Experience scores, or health scores, are calculated for different geographic
     * and network provider combinations (that is, different granularities) and also
     * totaled into global scores. If you view performance or availability scores
     * without filtering for any specific geography or service provider, Amazon
     * CloudWatch Internet Monitor provides global health scores.</p> <p>The Amazon
     * CloudWatch Internet Monitor chapter in the CloudWatch User Guide includes
     * detailed information about how Internet Monitor calculates health scores,
     * including performance and availability scores, and when it creates and resolves
     * health events. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMExperienceScores">How
     * Amazon Web Services calculates performance and availability scores</a> in the
     * Amazon CloudWatch Internet Monitor section of the <i>CloudWatch User
     * Guide</i>.</p>
     */
    inline PerformanceMeasurement& WithExperienceScore(double value) { SetExperienceScore(value); return *this;}


    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline double GetPercentOfTotalTrafficImpacted() const{ return m_percentOfTotalTrafficImpacted; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline bool PercentOfTotalTrafficImpactedHasBeenSet() const { return m_percentOfTotalTrafficImpactedHasBeenSet; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetPercentOfTotalTrafficImpacted(double value) { m_percentOfTotalTrafficImpactedHasBeenSet = true; m_percentOfTotalTrafficImpacted = value; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline PerformanceMeasurement& WithPercentOfTotalTrafficImpacted(double value) { SetPercentOfTotalTrafficImpacted(value); return *this;}


    /**
     * <p>How much performance impact was caused by a health event at a client
     * location. For performance, this is the percentage of how much latency increased
     * during the event compared to typical performance for traffic, from this client
     * location to an Amazon Web Services location, using a specific client network.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline double GetPercentOfClientLocationImpacted() const{ return m_percentOfClientLocationImpacted; }

    /**
     * <p>How much performance impact was caused by a health event at a client
     * location. For performance, this is the percentage of how much latency increased
     * during the event compared to typical performance for traffic, from this client
     * location to an Amazon Web Services location, using a specific client network.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline bool PercentOfClientLocationImpactedHasBeenSet() const { return m_percentOfClientLocationImpactedHasBeenSet; }

    /**
     * <p>How much performance impact was caused by a health event at a client
     * location. For performance, this is the percentage of how much latency increased
     * during the event compared to typical performance for traffic, from this client
     * location to an Amazon Web Services location, using a specific client network.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetPercentOfClientLocationImpacted(double value) { m_percentOfClientLocationImpactedHasBeenSet = true; m_percentOfClientLocationImpacted = value; }

    /**
     * <p>How much performance impact was caused by a health event at a client
     * location. For performance, this is the percentage of how much latency increased
     * during the event compared to typical performance for traffic, from this client
     * location to an Amazon Web Services location, using a specific client network.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline PerformanceMeasurement& WithPercentOfClientLocationImpacted(double value) { SetPercentOfClientLocationImpacted(value); return *this;}


    /**
     * <p>This is the percentage of how much round-trip time increased during the event
     * compared to typical round-trip time for your application for traffic. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline const RoundTripTime& GetRoundTripTime() const{ return m_roundTripTime; }

    /**
     * <p>This is the percentage of how much round-trip time increased during the event
     * compared to typical round-trip time for your application for traffic. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline bool RoundTripTimeHasBeenSet() const { return m_roundTripTimeHasBeenSet; }

    /**
     * <p>This is the percentage of how much round-trip time increased during the event
     * compared to typical round-trip time for your application for traffic. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetRoundTripTime(const RoundTripTime& value) { m_roundTripTimeHasBeenSet = true; m_roundTripTime = value; }

    /**
     * <p>This is the percentage of how much round-trip time increased during the event
     * compared to typical round-trip time for your application for traffic. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline void SetRoundTripTime(RoundTripTime&& value) { m_roundTripTimeHasBeenSet = true; m_roundTripTime = std::move(value); }

    /**
     * <p>This is the percentage of how much round-trip time increased during the event
     * compared to typical round-trip time for your application for traffic. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline PerformanceMeasurement& WithRoundTripTime(const RoundTripTime& value) { SetRoundTripTime(value); return *this;}

    /**
     * <p>This is the percentage of how much round-trip time increased during the event
     * compared to typical round-trip time for your application for traffic. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-inside-internet-monitor.html#IMHealthEventStartStop">When
     * Amazon Web Services creates and resolves health events</a> in the Amazon
     * CloudWatch Internet Monitor section of the <i>CloudWatch User Guide</i>.</p>
     */
    inline PerformanceMeasurement& WithRoundTripTime(RoundTripTime&& value) { SetRoundTripTime(std::move(value)); return *this;}

  private:

    double m_experienceScore;
    bool m_experienceScoreHasBeenSet = false;

    double m_percentOfTotalTrafficImpacted;
    bool m_percentOfTotalTrafficImpactedHasBeenSet = false;

    double m_percentOfClientLocationImpacted;
    bool m_percentOfClientLocationImpactedHasBeenSet = false;

    RoundTripTime m_roundTripTime;
    bool m_roundTripTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
