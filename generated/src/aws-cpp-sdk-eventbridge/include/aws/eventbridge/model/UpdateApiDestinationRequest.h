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
    AWS_EVENTBRIDGE_API UpdateApiDestinationRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateApiDestinationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API destination to update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateApiDestinationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the connection to use for the API destination.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    UpdateApiDestinationRequest& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the endpoint to use for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const { return m_invocationEndpoint; }
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }
    template<typename InvocationEndpointT = Aws::String>
    void SetInvocationEndpoint(InvocationEndpointT&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::forward<InvocationEndpointT>(value); }
    template<typename InvocationEndpointT = Aws::String>
    UpdateApiDestinationRequest& WithInvocationEndpoint(InvocationEndpointT&& value) { SetInvocationEndpoint(std::forward<InvocationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use for the API destination.</p>
     */
    inline ApiDestinationHttpMethod GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(ApiDestinationHttpMethod value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline UpdateApiDestinationRequest& WithHttpMethod(ApiDestinationHttpMethod value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invocations per second to send to the API
     * destination.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const { return m_invocationRateLimitPerSecond; }
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

    ApiDestinationHttpMethod m_httpMethod{ApiDestinationHttpMethod::NOT_SET};
    bool m_httpMethodHasBeenSet = false;

    int m_invocationRateLimitPerSecond{0};
    bool m_invocationRateLimitPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
