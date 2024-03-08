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
  class DeleteDeliveryDestinationPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeleteDeliveryDestinationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeliveryDestinationPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline const Aws::String& GetDeliveryDestinationName() const{ return m_deliveryDestinationName; }

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline bool DeliveryDestinationNameHasBeenSet() const { return m_deliveryDestinationNameHasBeenSet; }

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline void SetDeliveryDestinationName(const Aws::String& value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName = value; }

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline void SetDeliveryDestinationName(Aws::String&& value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName = std::move(value); }

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline void SetDeliveryDestinationName(const char* value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName.assign(value); }

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline DeleteDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(const Aws::String& value) { SetDeliveryDestinationName(value); return *this;}

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline DeleteDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(Aws::String&& value) { SetDeliveryDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery destination that you want to delete the policy
     * for.</p>
     */
    inline DeleteDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(const char* value) { SetDeliveryDestinationName(value); return *this;}

  private:

    Aws::String m_deliveryDestinationName;
    bool m_deliveryDestinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
