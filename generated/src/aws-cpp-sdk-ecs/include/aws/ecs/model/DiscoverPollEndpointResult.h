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
    AWS_ECS_API DiscoverPollEndpointResult() = default;
    AWS_ECS_API DiscoverPollEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DiscoverPollEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint for the Amazon ECS agent to poll.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DiscoverPollEndpointResult& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The telemetry endpoint for the Amazon ECS agent.</p>
     */
    inline const Aws::String& GetTelemetryEndpoint() const { return m_telemetryEndpoint; }
    template<typename TelemetryEndpointT = Aws::String>
    void SetTelemetryEndpoint(TelemetryEndpointT&& value) { m_telemetryEndpointHasBeenSet = true; m_telemetryEndpoint = std::forward<TelemetryEndpointT>(value); }
    template<typename TelemetryEndpointT = Aws::String>
    DiscoverPollEndpointResult& WithTelemetryEndpoint(TelemetryEndpointT&& value) { SetTelemetryEndpoint(std::forward<TelemetryEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the Amazon ECS agent to poll for Service Connect
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetServiceConnectEndpoint() const { return m_serviceConnectEndpoint; }
    template<typename ServiceConnectEndpointT = Aws::String>
    void SetServiceConnectEndpoint(ServiceConnectEndpointT&& value) { m_serviceConnectEndpointHasBeenSet = true; m_serviceConnectEndpoint = std::forward<ServiceConnectEndpointT>(value); }
    template<typename ServiceConnectEndpointT = Aws::String>
    DiscoverPollEndpointResult& WithServiceConnectEndpoint(ServiceConnectEndpointT&& value) { SetServiceConnectEndpoint(std::forward<ServiceConnectEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DiscoverPollEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_telemetryEndpoint;
    bool m_telemetryEndpointHasBeenSet = false;

    Aws::String m_serviceConnectEndpoint;
    bool m_serviceConnectEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
