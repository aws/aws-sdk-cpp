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
  class UpdateApiDestinationRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API UpdateApiDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApiDestination"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the API destination to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateApiDestinationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApiDestinationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApiDestinationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API destination to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateApiDestinationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApiDestinationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApiDestinationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }
    inline UpdateApiDestinationRequest& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline UpdateApiDestinationRequest& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline UpdateApiDestinationRequest& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const{ return m_invocationEndpoint; }
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }
    inline void SetInvocationEndpoint(const Aws::String& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = value; }
    inline void SetInvocationEndpoint(Aws::String&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::move(value); }
    inline void SetInvocationEndpoint(const char* value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint.assign(value); }
    inline UpdateApiDestinationRequest& WithInvocationEndpoint(const Aws::String& value) { SetInvocationEndpoint(value); return *this;}
    inline UpdateApiDestinationRequest& WithInvocationEndpoint(Aws::String&& value) { SetInvocationEndpoint(std::move(value)); return *this;}
    inline UpdateApiDestinationRequest& WithInvocationEndpoint(const char* value) { SetInvocationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use for the API destination.</p>
     */
    inline const ApiDestinationHttpMethod& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const ApiDestinationHttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(ApiDestinationHttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline UpdateApiDestinationRequest& WithHttpMethod(const ApiDestinationHttpMethod& value) { SetHttpMethod(value); return *this;}
    inline UpdateApiDestinationRequest& WithHttpMethod(ApiDestinationHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invocations per second to send to the API
     * destination.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const{ return m_invocationRateLimitPerSecond; }
    inline bool InvocationRateLimitPerSecondHasBeenSet() const { return m_invocationRateLimitPerSecondHasBeenSet; }
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }
    inline UpdateApiDestinationRequest& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}
    ///@}
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
