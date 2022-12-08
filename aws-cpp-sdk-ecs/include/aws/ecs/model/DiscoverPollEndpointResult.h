/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DiscoverPollEndpointResult
  {
  public:
    AWS_ECS_API DiscoverPollEndpointResult();
    AWS_ECS_API DiscoverPollEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DiscoverPollEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetServiceConnectEndpoint() const{ return m_serviceConnectEndpoint; }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetServiceConnectEndpoint(const Aws::String& value) { m_serviceConnectEndpoint = value; }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetServiceConnectEndpoint(Aws::String&& value) { m_serviceConnectEndpoint = std::move(value); }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetServiceConnectEndpoint(const char* value) { m_serviceConnectEndpoint.assign(value); }

    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline DiscoverPollEndpointResult& WithServiceConnectEndpoint(const Aws::String& value) { SetServiceConnectEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline DiscoverPollEndpointResult& WithServiceConnectEndpoint(Aws::String&& value) { SetServiceConnectEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline DiscoverPollEndpointResult& WithServiceConnectEndpoint(const char* value) { SetServiceConnectEndpoint(value); return *this;}

  private:

    Aws::String m_endpoint;

    Aws::String m_telemetryEndpoint;

    Aws::String m_serviceConnectEndpoint;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
