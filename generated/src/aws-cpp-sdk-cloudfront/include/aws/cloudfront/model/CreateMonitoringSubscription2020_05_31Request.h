/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/MonitoringSubscription.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateMonitoringSubscription2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitoringSubscription"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the distribution that you are enabling metrics for.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    CreateMonitoringSubscription2020_05_31Request& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline const MonitoringSubscription& GetMonitoringSubscription() const { return m_monitoringSubscription; }
    inline bool MonitoringSubscriptionHasBeenSet() const { return m_monitoringSubscriptionHasBeenSet; }
    template<typename MonitoringSubscriptionT = MonitoringSubscription>
    void SetMonitoringSubscription(MonitoringSubscriptionT&& value) { m_monitoringSubscriptionHasBeenSet = true; m_monitoringSubscription = std::forward<MonitoringSubscriptionT>(value); }
    template<typename MonitoringSubscriptionT = MonitoringSubscription>
    CreateMonitoringSubscription2020_05_31Request& WithMonitoringSubscription(MonitoringSubscriptionT&& value) { SetMonitoringSubscription(std::forward<MonitoringSubscriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    MonitoringSubscription m_monitoringSubscription;
    bool m_monitoringSubscriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
