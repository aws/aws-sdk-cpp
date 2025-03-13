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
  class EnableAwsNetworkPerformanceMetricSubscriptionRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableAwsNetworkPerformanceMetricSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableAwsNetworkPerformanceMetricSubscription"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The source Region (like <code>us-east-1</code>) or Availability Zone ID (like
     * <code>use1-az1</code>) that the metric subscription is enabled for. If you use
     * Availability Zone IDs, the Source and Destination Availability Zones must be in
     * the same Region.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    EnableAwsNetworkPerformanceMetricSubscriptionRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target Region (like <code>us-east-2</code>) or Availability Zone ID (like
     * <code>use2-az2</code>) that the metric subscription is enabled for. If you use
     * Availability Zone IDs, the Source and Destination Availability Zones must be in
     * the same Region.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    EnableAwsNetworkPerformanceMetricSubscriptionRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric used for the enabled subscription.</p>
     */
    inline MetricType GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(MetricType value) { m_metricHasBeenSet = true; m_metric = value; }
    inline EnableAwsNetworkPerformanceMetricSubscriptionRequest& WithMetric(MetricType value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic used for the enabled subscription.</p>
     */
    inline StatisticType GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(StatisticType value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline EnableAwsNetworkPerformanceMetricSubscriptionRequest& WithStatistic(StatisticType value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline EnableAwsNetworkPerformanceMetricSubscriptionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    MetricType m_metric{MetricType::NOT_SET};
    bool m_metricHasBeenSet = false;

    StatisticType m_statistic{StatisticType::NOT_SET};
    bool m_statisticHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
