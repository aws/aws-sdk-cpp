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
  class AWS_CLOUDWATCHEVENTS_API DescribeApiDestinationResult
  {
  public:
    DescribeApiDestinationResult();
    DescribeApiDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeApiDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline const Aws::String& GetApiDestinationArn() const{ return m_apiDestinationArn; }

    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline void SetApiDestinationArn(const Aws::String& value) { m_apiDestinationArn = value; }

    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline void SetApiDestinationArn(Aws::String&& value) { m_apiDestinationArn = std::move(value); }

    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline void SetApiDestinationArn(const char* value) { m_apiDestinationArn.assign(value); }

    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithApiDestinationArn(const Aws::String& value) { SetApiDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithApiDestinationArn(Aws::String&& value) { SetApiDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithApiDestinationArn(const char* value) { SetApiDestinationArn(value); return *this;}


    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state of the API destination retrieved.</p>
     */
    inline const ApiDestinationState& GetApiDestinationState() const{ return m_apiDestinationState; }

    /**
     * <p>The state of the API destination retrieved.</p>
     */
    inline void SetApiDestinationState(const ApiDestinationState& value) { m_apiDestinationState = value; }

    /**
     * <p>The state of the API destination retrieved.</p>
     */
    inline void SetApiDestinationState(ApiDestinationState&& value) { m_apiDestinationState = std::move(value); }

    /**
     * <p>The state of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithApiDestinationState(const ApiDestinationState& value) { SetApiDestinationState(value); return *this;}

    /**
     * <p>The state of the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithApiDestinationState(ApiDestinationState&& value) { SetApiDestinationState(std::move(value)); return *this;}


    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArn = value; }

    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArn = std::move(value); }

    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArn.assign(value); }

    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connection specified for the API destination retrieved.</p>
     */
    inline DescribeApiDestinationResult& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const{ return m_invocationEndpoint; }

    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline void SetInvocationEndpoint(const Aws::String& value) { m_invocationEndpoint = value; }

    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline void SetInvocationEndpoint(Aws::String&& value) { m_invocationEndpoint = std::move(value); }

    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline void SetInvocationEndpoint(const char* value) { m_invocationEndpoint.assign(value); }

    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline DescribeApiDestinationResult& WithInvocationEndpoint(const Aws::String& value) { SetInvocationEndpoint(value); return *this;}

    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline DescribeApiDestinationResult& WithInvocationEndpoint(Aws::String&& value) { SetInvocationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL to use to connect to the HTTP endpoint.</p>
     */
    inline DescribeApiDestinationResult& WithInvocationEndpoint(const char* value) { SetInvocationEndpoint(value); return *this;}


    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline const ApiDestinationHttpMethod& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline void SetHttpMethod(const ApiDestinationHttpMethod& value) { m_httpMethod = value; }

    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline void SetHttpMethod(ApiDestinationHttpMethod&& value) { m_httpMethod = std::move(value); }

    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline DescribeApiDestinationResult& WithHttpMethod(const ApiDestinationHttpMethod& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline DescribeApiDestinationResult& WithHttpMethod(ApiDestinationHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}


    /**
     * <p>The maximum number of invocations per second to specified for the API
     * destination. Note that if you set the invocation rate maximum to a value lower
     * the rate necessary to send all events received on to the destination HTTP
     * endpoint, some events may not be delivered within the 24-hour retry window. If
     * you plan to set the rate lower than the rate necessary to deliver all events,
     * consider using a dead-letter queue to catch events that are not delivered within
     * 24 hours.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const{ return m_invocationRateLimitPerSecond; }

    /**
     * <p>The maximum number of invocations per second to specified for the API
     * destination. Note that if you set the invocation rate maximum to a value lower
     * the rate necessary to send all events received on to the destination HTTP
     * endpoint, some events may not be delivered within the 24-hour retry window. If
     * you plan to set the rate lower than the rate necessary to deliver all events,
     * consider using a dead-letter queue to catch events that are not delivered within
     * 24 hours.</p>
     */
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecond = value; }

    /**
     * <p>The maximum number of invocations per second to specified for the API
     * destination. Note that if you set the invocation rate maximum to a value lower
     * the rate necessary to send all events received on to the destination HTTP
     * endpoint, some events may not be delivered within the 24-hour retry window. If
     * you plan to set the rate lower than the rate necessary to deliver all events,
     * consider using a dead-letter queue to catch events that are not delivered within
     * 24 hours.</p>
     */
    inline DescribeApiDestinationResult& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}


    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline DescribeApiDestinationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline DescribeApiDestinationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline DescribeApiDestinationResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline DescribeApiDestinationResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_apiDestinationArn;

    Aws::String m_name;

    Aws::String m_description;

    ApiDestinationState m_apiDestinationState;

    Aws::String m_connectionArn;

    Aws::String m_invocationEndpoint;

    ApiDestinationHttpMethod m_httpMethod;

    int m_invocationRateLimitPerSecond;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
