/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/MetricType.h>
#include <aws/ec2/model/StatisticType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DisableAwsNetworkPerformanceMetricSubscriptionRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisableAwsNetworkPerformanceMetricSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableAwsNetworkPerformanceMetricSubscription"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>us-east-1</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The target Region or Availability Zone that the metric subscription is
     * disabled for. For example, <code>eu-north-1</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The metric used for the disabled subscription.</p>
     */
    inline const MetricType& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric used for the disabled subscription.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric used for the disabled subscription.</p>
     */
    inline void SetMetric(const MetricType& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric used for the disabled subscription.</p>
     */
    inline void SetMetric(MetricType&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric used for the disabled subscription.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithMetric(const MetricType& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric used for the disabled subscription.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithMetric(MetricType&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The statistic used for the disabled subscription. </p>
     */
    inline const StatisticType& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic used for the disabled subscription. </p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic used for the disabled subscription. </p>
     */
    inline void SetStatistic(const StatisticType& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic used for the disabled subscription. </p>
     */
    inline void SetStatistic(StatisticType&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic used for the disabled subscription. </p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithStatistic(const StatisticType& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic used for the disabled subscription. </p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithStatistic(StatisticType&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    MetricType m_metric;
    bool m_metricHasBeenSet = false;

    StatisticType m_statistic;
    bool m_statisticHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
