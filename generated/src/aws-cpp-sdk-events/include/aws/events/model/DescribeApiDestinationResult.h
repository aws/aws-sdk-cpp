/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ApiDestinationState.h>
#include <aws/events/model/ApiDestinationHttpMethod.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{
  class DescribeApiDestinationResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeApiDestinationResult() = default;
    AWS_CLOUDWATCHEVENTS_API DescribeApiDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeApiDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline const Aws::String& GetApiDestinationArn() const { return m_apiDestinationArn; }
    template<typename ApiDestinationArnT = Aws::String>
    void SetApiDestinationArn(ApiDestinationArnT&& value) { m_apiDestinationArnHasBeenSet = true; m_apiDestinationArn = std::forward<ApiDestinationArnT>(value); }
    template<typename ApiDestinationArnT = Aws::String>
    DescribeApiDestinationResult& WithApiDestinationArn(ApiDestinationArnT&& value) { SetApiDestinationArn(std::forward<ApiDestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeApiDestinationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeApiDestinationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the API destination retrieved.</p>
     */
    inline ApiDestinationState GetApiDestinationState() const { return m_apiDestinationState; }
    inline void SetApiDestinationState(ApiDestinationState value) { m_apiDestinationStateHasBeenSet = true; m_apiDestinationState = value; }
    inline DescribeApiDestinationResult& WithApiDestinationState(ApiDestinationState value) { SetApiDestinationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    DescribeApiDestinationResult& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const { return m_invocationEndpoint; }
    template<typename InvocationEndpointT = Aws::String>
    void SetInvocationEndpoint(InvocationEndpointT&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::forward<InvocationEndpointT>(value); }
    template<typename InvocationEndpointT = Aws::String>
    DescribeApiDestinationResult& WithInvocationEndpoint(InvocationEndpointT&& value) { SetInvocationEndpoint(std::forward<InvocationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline ApiDestinationHttpMethod GetHttpMethod() const { return m_httpMethod; }
    inline void SetHttpMethod(ApiDestinationHttpMethod value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline DescribeApiDestinationResult& WithHttpMethod(ApiDestinationHttpMethod value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invocations per second to specified for the API
     * destination. Note that if you set the invocation rate maximum to a value lower
     * the rate necessary to send all events received on to the destination HTTP
     * endpoint, some events may not be delivered within the 24-hour retry window. If
     * you plan to set the rate lower than the rate necessary to deliver all events,
     * consider using a dead-letter queue to catch events that are not delivered within
     * 24 hours.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const { return m_invocationRateLimitPerSecond; }
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }
    inline DescribeApiDestinationResult& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeApiDestinationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeApiDestinationResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApiDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiDestinationArn;
    bool m_apiDestinationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApiDestinationState m_apiDestinationState{ApiDestinationState::NOT_SET};
    bool m_apiDestinationStateHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_invocationEndpoint;
    bool m_invocationEndpointHasBeenSet = false;

    ApiDestinationHttpMethod m_httpMethod{ApiDestinationHttpMethod::NOT_SET};
    bool m_httpMethodHasBeenSet = false;

    int m_invocationRateLimitPerSecond{0};
    bool m_invocationRateLimitPerSecondHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
