/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/SubscriptionProtocolType.h>
#include <aws/workdocs/model/SubscriptionType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API CreateNotificationSubscriptionRequest : public WorkDocsRequest
  {
  public:
    CreateNotificationSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNotificationSubscription"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The ID of the organization.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The ID of the organization.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the organization.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to receive the notifications. If the protocol is HTTPS, the
     * endpoint is a URL that begins with <code>https</code>.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline const SubscriptionProtocolType& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline void SetProtocol(const SubscriptionProtocolType& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline void SetProtocol(SubscriptionProtocolType&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithProtocol(const SubscriptionProtocolType& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use. The supported value is https, which delivers
     * JSON-encoded messages using HTTPS POST.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithProtocol(SubscriptionProtocolType&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The notification type.</p>
     */
    inline const SubscriptionType& GetSubscriptionType() const{ return m_subscriptionType; }

    /**
     * <p>The notification type.</p>
     */
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }

    /**
     * <p>The notification type.</p>
     */
    inline void SetSubscriptionType(const SubscriptionType& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }

    /**
     * <p>The notification type.</p>
     */
    inline void SetSubscriptionType(SubscriptionType&& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = std::move(value); }

    /**
     * <p>The notification type.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithSubscriptionType(const SubscriptionType& value) { SetSubscriptionType(value); return *this;}

    /**
     * <p>The notification type.</p>
     */
    inline CreateNotificationSubscriptionRequest& WithSubscriptionType(SubscriptionType&& value) { SetSubscriptionType(std::move(value)); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    SubscriptionProtocolType m_protocol;
    bool m_protocolHasBeenSet;

    SubscriptionType m_subscriptionType;
    bool m_subscriptionTypeHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
