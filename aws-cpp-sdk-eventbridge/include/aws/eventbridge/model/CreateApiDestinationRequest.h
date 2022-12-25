/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ApiDestinationHttpMethod.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class CreateApiDestinationRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API CreateApiDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApiDestination"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the API destination to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline CreateApiDestinationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline CreateApiDestinationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the API destination to create.</p>
     */
    inline CreateApiDestinationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the API destination to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline CreateApiDestinationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline CreateApiDestinationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the API destination to create.</p>
     */
    inline CreateApiDestinationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline CreateApiDestinationRequest& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline CreateApiDestinationRequest& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline CreateApiDestinationRequest& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const{ return m_invocationEndpoint; }

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline void SetInvocationEndpoint(const Aws::String& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = value; }

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline void SetInvocationEndpoint(Aws::String&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::move(value); }

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline void SetInvocationEndpoint(const char* value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint.assign(value); }

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline CreateApiDestinationRequest& WithInvocationEndpoint(const Aws::String& value) { SetInvocationEndpoint(value); return *this;}

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline CreateApiDestinationRequest& WithInvocationEndpoint(Aws::String&& value) { SetInvocationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline CreateApiDestinationRequest& WithInvocationEndpoint(const char* value) { SetInvocationEndpoint(value); return *this;}


    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline const ApiDestinationHttpMethod& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline void SetHttpMethod(const ApiDestinationHttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline void SetHttpMethod(ApiDestinationHttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline CreateApiDestinationRequest& WithHttpMethod(const ApiDestinationHttpMethod& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline CreateApiDestinationRequest& WithHttpMethod(ApiDestinationHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}


    /**
     * <p>The maximum number of requests per second to send to the HTTP invocation
     * endpoint.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const{ return m_invocationRateLimitPerSecond; }

    /**
     * <p>The maximum number of requests per second to send to the HTTP invocation
     * endpoint.</p>
     */
    inline bool InvocationRateLimitPerSecondHasBeenSet() const { return m_invocationRateLimitPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of requests per second to send to the HTTP invocation
     * endpoint.</p>
     */
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }

    /**
     * <p>The maximum number of requests per second to send to the HTTP invocation
     * endpoint.</p>
     */
    inline CreateApiDestinationRequest& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_invocationEndpoint;
    bool m_invocationEndpointHasBeenSet = false;

    ApiDestinationHttpMethod m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    int m_invocationRateLimitPerSecond;
    bool m_invocationRateLimitPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
