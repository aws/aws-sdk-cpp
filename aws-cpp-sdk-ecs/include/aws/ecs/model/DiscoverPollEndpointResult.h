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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{
  class AWS_ECS_API DiscoverPollEndpointResult
  {
  public:
    DiscoverPollEndpointResult();
    DiscoverPollEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DiscoverPollEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline DiscoverPollEndpointResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline DiscoverPollEndpointResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline DiscoverPollEndpointResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline const Aws::String& GetTelemetryEndpoint() const{ return m_telemetryEndpoint; }

    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline void SetTelemetryEndpoint(const Aws::String& value) { m_telemetryEndpoint = value; }

    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline void SetTelemetryEndpoint(Aws::String&& value) { m_telemetryEndpoint = std::move(value); }

    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline void SetTelemetryEndpoint(const char* value) { m_telemetryEndpoint.assign(value); }

    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline DiscoverPollEndpointResult& WithTelemetryEndpoint(const Aws::String& value) { SetTelemetryEndpoint(value); return *this;}

    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline DiscoverPollEndpointResult& WithTelemetryEndpoint(Aws::String&& value) { SetTelemetryEndpoint(std::move(value)); return *this;}

    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline DiscoverPollEndpointResult& WithTelemetryEndpoint(const char* value) { SetTelemetryEndpoint(value); return *this;}

  private:

    Aws::String m_endpoint;

    Aws::String m_telemetryEndpoint;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
