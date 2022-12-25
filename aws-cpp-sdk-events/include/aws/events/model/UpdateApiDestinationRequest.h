/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ApiDestinationHttpMethod.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class UpdateApiDestinationRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API UpdateApiDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApiDestination"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the API destination to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline UpdateApiDestinationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline UpdateApiDestinationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline UpdateApiDestinationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the API destination to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline UpdateApiDestinationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline UpdateApiDestinationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The name of the API destination to update.</p>
     */
    inline UpdateApiDestinationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const{ return m_invocationEndpoint; }

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline void SetInvocationEndpoint(const Aws::String& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = value; }

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline void SetInvocationEndpoint(Aws::String&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::move(value); }

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline void SetInvocationEndpoint(const char* value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint.assign(value); }

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithInvocationEndpoint(const Aws::String& value) { SetInvocationEndpoint(value); return *this;}

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithInvocationEndpoint(Aws::String&& value) { SetInvocationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithInvocationEndpoint(const char* value) { SetInvocationEndpoint(value); return *this;}


    /**
     * <p>The method to use for the API destination.</p>
     */
    inline const ApiDestinationHttpMethod& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method to use for the API destination.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The method to use for the API destination.</p>
     */
    inline void SetHttpMethod(const ApiDestinationHttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The method to use for the API destination.</p>
     */
    inline void SetHttpMethod(ApiDestinationHttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The method to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithHttpMethod(const ApiDestinationHttpMethod& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method to use for the API destination.</p>
     */
    inline UpdateApiDestinationRequest& WithHttpMethod(ApiDestinationHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}


    /**
     * <p>The maximum number of invocations per second to send to the API
     * destination.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const{ return m_invocationRateLimitPerSecond; }

    /**
     * <p>The maximum number of invocations per second to send to the API
     * destination.</p>
     */
    inline bool InvocationRateLimitPerSecondHasBeenSet() const { return m_invocationRateLimitPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of invocations per second to send to the API
     * destination.</p>
     */
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }

    /**
     * <p>The maximum number of invocations per second to send to the API
     * destination.</p>
     */
    inline UpdateApiDestinationRequest& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}

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
} // namespace CloudWatchEvents
} // namespace Aws
