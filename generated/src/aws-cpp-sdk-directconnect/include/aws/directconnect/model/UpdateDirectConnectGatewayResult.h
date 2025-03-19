/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGateway.h>
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
namespace DirectConnect
{
namespace Model
{
  class UpdateDirectConnectGatewayResult
  {
  public:
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayResult() = default;
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Informaiton about a Direct Connect gateway, which enables you to connect
     * virtual interfaces and virtual private gateways or transit gateways.</p>
     */
    inline const DirectConnectGateway& GetDirectConnectGateway() const { return m_directConnectGateway; }
    template<typename DirectConnectGatewayT = DirectConnectGateway>
    void SetDirectConnectGateway(DirectConnectGatewayT&& value) { m_directConnectGatewayHasBeenSet = true; m_directConnectGateway = std::forward<DirectConnectGatewayT>(value); }
    template<typename DirectConnectGatewayT = DirectConnectGateway>
    UpdateDirectConnectGatewayResult& WithDirectConnectGateway(DirectConnectGatewayT&& value) { SetDirectConnectGateway(std::forward<DirectConnectGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDirectConnectGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectConnectGateway m_directConnectGateway;
    bool m_directConnectGatewayHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
