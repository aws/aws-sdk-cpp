/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/RealtimeMetricsSubscriptionStatus.h>
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
   * <p>A subscription configuration for additional CloudWatch metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/RealtimeMetricsSubscriptionConfig">AWS
   * API Reference</a></p>
   */
  class RealtimeMetricsSubscriptionConfig
  {
  public:
    AWS_CLOUDFRONT_API RealtimeMetricsSubscriptionConfig();
    AWS_CLOUDFRONT_API RealtimeMetricsSubscriptionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API RealtimeMetricsSubscriptionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A flag that indicates whether additional CloudWatch metrics are enabled for a
     * given CloudFront distribution.</p>
     */
    inline const RealtimeMetricsSubscriptionStatus& GetRealtimeMetricsSubscriptionStatus() const{ return m_realtimeMetricsSubscriptionStatus; }
    inline bool RealtimeMetricsSubscriptionStatusHasBeenSet() const { return m_realtimeMetricsSubscriptionStatusHasBeenSet; }
    inline void SetRealtimeMetricsSubscriptionStatus(const RealtimeMetricsSubscriptionStatus& value) { m_realtimeMetricsSubscriptionStatusHasBeenSet = true; m_realtimeMetricsSubscriptionStatus = value; }
    inline void SetRealtimeMetricsSubscriptionStatus(RealtimeMetricsSubscriptionStatus&& value) { m_realtimeMetricsSubscriptionStatusHasBeenSet = true; m_realtimeMetricsSubscriptionStatus = std::move(value); }
    inline RealtimeMetricsSubscriptionConfig& WithRealtimeMetricsSubscriptionStatus(const RealtimeMetricsSubscriptionStatus& value) { SetRealtimeMetricsSubscriptionStatus(value); return *this;}
    inline RealtimeMetricsSubscriptionConfig& WithRealtimeMetricsSubscriptionStatus(RealtimeMetricsSubscriptionStatus&& value) { SetRealtimeMetricsSubscriptionStatus(std::move(value)); return *this;}
    ///@}
  private:

    RealtimeMetricsSubscriptionStatus m_realtimeMetricsSubscriptionStatus;
    bool m_realtimeMetricsSubscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
