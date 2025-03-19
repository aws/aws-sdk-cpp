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
    AWS_CLOUDFRONT_API MonitoringSubscription() = default;
    AWS_CLOUDFRONT_API MonitoringSubscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API MonitoringSubscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A subscription configuration for additional CloudWatch metrics.</p>
     */
    inline const RealtimeMetricsSubscriptionConfig& GetRealtimeMetricsSubscriptionConfig() const { return m_realtimeMetricsSubscriptionConfig; }
    inline bool RealtimeMetricsSubscriptionConfigHasBeenSet() const { return m_realtimeMetricsSubscriptionConfigHasBeenSet; }
    template<typename RealtimeMetricsSubscriptionConfigT = RealtimeMetricsSubscriptionConfig>
    void SetRealtimeMetricsSubscriptionConfig(RealtimeMetricsSubscriptionConfigT&& value) { m_realtimeMetricsSubscriptionConfigHasBeenSet = true; m_realtimeMetricsSubscriptionConfig = std::forward<RealtimeMetricsSubscriptionConfigT>(value); }
    template<typename RealtimeMetricsSubscriptionConfigT = RealtimeMetricsSubscriptionConfig>
    MonitoringSubscription& WithRealtimeMetricsSubscriptionConfig(RealtimeMetricsSubscriptionConfigT&& value) { SetRealtimeMetricsSubscriptionConfig(std::forward<RealtimeMetricsSubscriptionConfigT>(value)); return *this;}
    ///@}
  private:

    RealtimeMetricsSubscriptionConfig m_realtimeMetricsSubscriptionConfig;
    bool m_realtimeMetricsSubscriptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
