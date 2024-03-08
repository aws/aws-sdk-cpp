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
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliveryDestinationPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline const Aws::String& GetDeliveryDestinationName() const{ return m_deliveryDestinationName; }

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline bool DeliveryDestinationNameHasBeenSet() const { return m_deliveryDestinationNameHasBeenSet; }

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline void SetDeliveryDestinationName(const Aws::String& value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName = value; }

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline void SetDeliveryDestinationName(Aws::String&& value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName = std::move(value); }

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline void SetDeliveryDestinationName(const char* value) { m_deliveryDestinationNameHasBeenSet = true; m_deliveryDestinationName.assign(value); }

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(const Aws::String& value) { SetDeliveryDestinationName(value); return *this;}

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(Aws::String&& value) { SetDeliveryDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery destination to assign this policy to.</p>
     */
    inline PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationName(const char* value) { SetDeliveryDestinationName(value); return *this;}


    /**
     * <p>The contents of the policy.</p>
     */
    inline const Aws::String& GetDeliveryDestinationPolicy() const{ return m_deliveryDestinationPolicy; }

    /**
     * <p>The contents of the policy.</p>
     */
    inline bool DeliveryDestinationPolicyHasBeenSet() const { return m_deliveryDestinationPolicyHasBeenSet; }

    /**
     * <p>The contents of the policy.</p>
     */
    inline void SetDeliveryDestinationPolicy(const Aws::String& value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy = value; }

    /**
     * <p>The contents of the policy.</p>
     */
    inline void SetDeliveryDestinationPolicy(Aws::String&& value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy = std::move(value); }

    /**
     * <p>The contents of the policy.</p>
     */
    inline void SetDeliveryDestinationPolicy(const char* value) { m_deliveryDestinationPolicyHasBeenSet = true; m_deliveryDestinationPolicy.assign(value); }

    /**
     * <p>The contents of the policy.</p>
     */
    inline PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationPolicy(const Aws::String& value) { SetDeliveryDestinationPolicy(value); return *this;}

    /**
     * <p>The contents of the policy.</p>
     */
    inline PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationPolicy(Aws::String&& value) { SetDeliveryDestinationPolicy(std::move(value)); return *this;}

    /**
     * <p>The contents of the policy.</p>
     */
    inline PutDeliveryDestinationPolicyRequest& WithDeliveryDestinationPolicy(const char* value) { SetDeliveryDestinationPolicy(value); return *this;}

  private:

    Aws::String m_deliveryDestinationName;
    bool m_deliveryDestinationNameHasBeenSet = false;

    Aws::String m_deliveryDestinationPolicy;
    bool m_deliveryDestinationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
