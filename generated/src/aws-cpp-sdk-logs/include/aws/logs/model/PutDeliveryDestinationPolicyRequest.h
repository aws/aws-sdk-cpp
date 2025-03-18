/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutDeliveryDestinationPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliveryDestinationPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline const Aws::String& GetDeliveryDestinationName() const { return m_deliveryDestinationName; }
    inline bool DeliveryDestinationNameHasBeenSet() const { return m_deliveryDestinationNameHasBeenSet; }
    template<typename DeliveryDestinationNameT = Aws::String>
    void SetDeliveryDestinationName(DeliveryDestinationNameT&& value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName = std::forward<DeliveryDestinationNameT>(value); }
    template<typename DeliveryDestinationNameT = Aws::String>
    PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(DeliveryDestinationNameT&& value) { SetDeliveryDestinationName(std::forward<DeliveryDestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the policy.</p>
     */
    inline const Aws::String& GetDeliveryDestinationPolicy() const { return m_deliveryDestinationPolicy; }
    inline bool DeliveryDestinationPolicyHasBeenSet() const { return m_deliveryDestinationPolicyHasBeenSet; }
    template<typename DeliveryDestinationPolicyT = Aws::String>
    void SetDeliveryDestinationPolicy(DeliveryDestinationPolicyT&& value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy = std::forward<DeliveryDestinationPolicyT>(value); }
    template<typename DeliveryDestinationPolicyT = Aws::String>
    PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationPolicy(DeliveryDestinationPolicyT&& value) { SetDeliveryDestinationPolicy(std::forward<DeliveryDestinationPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryDestinationName;
    bool m_deliveryDestinationNameHasBeenSet = false;

    Aws::String m_deliveryDestinationPolicy;
    bool m_deliveryDestinationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
