/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/SubscriptionProtocolType.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateDatalakeExceptionsSubscriptionRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateDatalakeExceptionsSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatalakeExceptionsSubscription"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline const Aws::String& GetNotificationEndpoint() const{ return m_notificationEndpoint; }

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline bool NotificationEndpointHasBeenSet() const { return m_notificationEndpointHasBeenSet; }

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline void SetNotificationEndpoint(const Aws::String& value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint = value; }

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline void SetNotificationEndpoint(Aws::String&& value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint = std::move(value); }

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline void SetNotificationEndpoint(const char* value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint.assign(value); }

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline CreateDatalakeExceptionsSubscriptionRequest& WithNotificationEndpoint(const Aws::String& value) { SetNotificationEndpoint(value); return *this;}

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline CreateDatalakeExceptionsSubscriptionRequest& WithNotificationEndpoint(Aws::String&& value) { SetNotificationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The account in which the exception notifications subscription is created.</p>
     */
    inline CreateDatalakeExceptionsSubscriptionRequest& WithNotificationEndpoint(const char* value) { SetNotificationEndpoint(value); return *this;}


    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline const SubscriptionProtocolType& GetSubscriptionProtocol() const{ return m_subscriptionProtocol; }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline bool SubscriptionProtocolHasBeenSet() const { return m_subscriptionProtocolHasBeenSet; }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline void SetSubscriptionProtocol(const SubscriptionProtocolType& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = value; }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline void SetSubscriptionProtocol(SubscriptionProtocolType&& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = std::move(value); }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline CreateDatalakeExceptionsSubscriptionRequest& WithSubscriptionProtocol(const SubscriptionProtocolType& value) { SetSubscriptionProtocol(value); return *this;}

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline CreateDatalakeExceptionsSubscriptionRequest& WithSubscriptionProtocol(SubscriptionProtocolType&& value) { SetSubscriptionProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_notificationEndpoint;
    bool m_notificationEndpointHasBeenSet = false;

    SubscriptionProtocolType m_subscriptionProtocol;
    bool m_subscriptionProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
