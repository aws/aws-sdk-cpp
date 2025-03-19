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
  class CreateApiDestinationRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateApiDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApiDestination"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the API destination to create.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApiDestinationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the API destination to create.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApiDestinationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the connection to use for the API destination. The destination
     * endpoint must support the authorization type specified for the connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    CreateApiDestinationRequest& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the HTTP invocation endpoint for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const { return m_invocationEndpoint; }
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }
    template<typename InvocationEndpointT = Aws::String>
    void SetInvocationEndpoint(InvocationEndpointT&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::forward<InvocationEndpointT>(value); }
    template<typename InvocationEndpointT = Aws::String>
    CreateApiDestinationRequest& WithInvocationEndpoint(InvocationEndpointT&& value) { SetInvocationEndpoint(std::forward<InvocationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use for the request to the HTTP invocation endpoint.</p>
     */
    inline ApiDestinationHttpMethod GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(ApiDestinationHttpMethod value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline CreateApiDestinationRequest& WithHttpMethod(ApiDestinationHttpMethod value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of requests per second to send to the HTTP invocation
     * endpoint.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const { return m_invocationRateLimitPerSecond; }
    inline bool InvocationRateLimitPerSecondHasBeenSet() const { return m_invocationRateLimitPerSecondHasBeenSet; }
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }
    inline CreateApiDestinationRequest& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}
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
} // namespace CloudWatchEvents
} // namespace Aws
