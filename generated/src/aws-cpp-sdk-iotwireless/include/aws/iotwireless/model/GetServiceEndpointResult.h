/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessGatewayServiceType.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetServiceEndpointResult
  {
  public:
    AWS_IOTWIRELESS_API GetServiceEndpointResult() = default;
    AWS_IOTWIRELESS_API GetServiceEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetServiceEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint's service type.</p>
     */
    inline WirelessGatewayServiceType GetServiceType() const { return m_serviceType; }
    inline void SetServiceType(WirelessGatewayServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline GetServiceEndpointResult& WithServiceType(WirelessGatewayServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service endpoint value.</p>
     */
    inline const Aws::String& GetServiceEndpoint() const { return m_serviceEndpoint; }
    template<typename ServiceEndpointT = Aws::String>
    void SetServiceEndpoint(ServiceEndpointT&& value) { m_serviceEndpointHasBeenSet = true; m_serviceEndpoint = std::forward<ServiceEndpointT>(value); }
    template<typename ServiceEndpointT = Aws::String>
    GetServiceEndpointResult& WithServiceEndpoint(ServiceEndpointT&& value) { SetServiceEndpoint(std::forward<ServiceEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Root CA of the server trust certificate.</p>
     */
    inline const Aws::String& GetServerTrust() const { return m_serverTrust; }
    template<typename ServerTrustT = Aws::String>
    void SetServerTrust(ServerTrustT&& value) { m_serverTrustHasBeenSet = true; m_serverTrust = std::forward<ServerTrustT>(value); }
    template<typename ServerTrustT = Aws::String>
    GetServiceEndpointResult& WithServerTrust(ServerTrustT&& value) { SetServerTrust(std::forward<ServerTrustT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WirelessGatewayServiceType m_serviceType{WirelessGatewayServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_serviceEndpoint;
    bool m_serviceEndpointHasBeenSet = false;

    Aws::String m_serverTrust;
    bool m_serverTrustHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
