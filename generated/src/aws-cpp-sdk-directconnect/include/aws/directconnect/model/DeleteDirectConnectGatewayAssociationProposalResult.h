/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociationProposal.h>
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
  class DeleteDirectConnectGatewayAssociationProposalResult
  {
  public:
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult() = default;
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline const DirectConnectGatewayAssociationProposal& GetDirectConnectGatewayAssociationProposal() const { return m_directConnectGatewayAssociationProposal; }
    template<typename DirectConnectGatewayAssociationProposalT = DirectConnectGatewayAssociationProposal>
    void SetDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposalT&& value) { m_directConnectGatewayAssociationProposalHasBeenSet = true; m_directConnectGatewayAssociationProposal = std::forward<DirectConnectGatewayAssociationProposalT>(value); }
    template<typename DirectConnectGatewayAssociationProposalT = DirectConnectGatewayAssociationProposal>
    DeleteDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposalT&& value) { SetDirectConnectGatewayAssociationProposal(std::forward<DirectConnectGatewayAssociationProposalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDirectConnectGatewayAssociationProposalResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectConnectGatewayAssociationProposal m_directConnectGatewayAssociationProposal;
    bool m_directConnectGatewayAssociationProposalHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
