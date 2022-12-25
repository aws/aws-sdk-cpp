/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteSubscriptionNotificationConfigurationRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteSubscriptionNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubscriptionNotificationConfiguration"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline DeleteSubscriptionNotificationConfigurationRequest& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline DeleteSubscriptionNotificationConfigurationRequest& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline DeleteSubscriptionNotificationConfigurationRequest& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}

  private:

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
