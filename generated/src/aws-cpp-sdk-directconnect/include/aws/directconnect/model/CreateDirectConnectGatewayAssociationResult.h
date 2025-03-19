/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociation.h>
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
  class CreateDirectConnectGatewayAssociationResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationResult() = default;
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association to be created.</p>
     */
    inline const DirectConnectGatewayAssociation& GetDirectConnectGatewayAssociation() const { return m_directConnectGatewayAssociation; }
    template<typename DirectConnectGatewayAssociationT = DirectConnectGatewayAssociation>
    void SetDirectConnectGatewayAssociation(DirectConnectGatewayAssociationT&& value) { m_directConnectGatewayAssociationHasBeenSet = true; m_directConnectGatewayAssociation = std::forward<DirectConnectGatewayAssociationT>(value); }
    template<typename DirectConnectGatewayAssociationT = DirectConnectGatewayAssociation>
    CreateDirectConnectGatewayAssociationResult& WithDirectConnectGatewayAssociation(DirectConnectGatewayAssociationT&& value) { SetDirectConnectGatewayAssociation(std::forward<DirectConnectGatewayAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDirectConnectGatewayAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectConnectGatewayAssociation m_directConnectGatewayAssociation;
    bool m_directConnectGatewayAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
