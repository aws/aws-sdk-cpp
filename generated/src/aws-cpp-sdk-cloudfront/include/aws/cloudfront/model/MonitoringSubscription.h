/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/RealtimeMetricsSubscriptionConfig.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A monitoring subscription. This structure contains information about whether
   * additional CloudWatch metrics are enabled for a given CloudFront
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/MonitoringSubscription">AWS
   * API Reference</a></p>
   */
  class MonitoringSubscription
  {
  public:
    AWS_CLOUDFRONT_API MonitoringSubscription();
    AWS_CLOUDFRONT_API MonitoringSubscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API MonitoringSubscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline const RealtimeMetricsSubscriptionConfig& GetRealtimeMetricsSubscriptionConfig() const{ return m_realtimeMetricsSubscriptionConfig; }

    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline bool RealtimeMetricsSubscriptionConfigHasBeenSet() const { return m_realtimeMetricsSubscriptionConfigHasBeenSet; }

    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline void SetRealtimeMetricsSubscriptionConfig(const RealtimeMetricsSubscriptionConfig& value) { m_realtimeMetricsSubscriptionConfigHasBeenSet = true; m_realtimeMetricsSubscriptionConfig = value; }

    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline void SetRealtimeMetricsSubscriptionConfig(RealtimeMetricsSubscriptionConfig&& value) { m_realtimeMetricsSubscriptionConfigHasBeenSet = true; m_realtimeMetricsSubscriptionConfig = std::move(value); }

    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline MonitoringSubscription& WithRealtimeMetricsSubscriptionConfig(const RealtimeMetricsSubscriptionConfig& value) { SetRealtimeMetricsSubscriptionConfig(value); return *this;}

    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline MonitoringSubscription& WithRealtimeMetricsSubscriptionConfig(RealtimeMetricsSubscriptionConfig&& value) { SetRealtimeMetricsSubscriptionConfig(std::move(value)); return *this;}

  private:

    RealtimeMetricsSubscriptionConfig m_realtimeMetricsSubscriptionConfig;
    bool m_realtimeMetricsSubscriptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
