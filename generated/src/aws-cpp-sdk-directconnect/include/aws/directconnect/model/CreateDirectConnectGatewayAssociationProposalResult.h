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
  class CreateDirectConnectGatewayAssociationProposalResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalResult() = default;
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Direct Connect gateway proposal.</p>
     */
    inline const DirectConnectGatewayAssociationProposal& GetDirectConnectGatewayAssociationProposal() const { return m_directConnectGatewayAssociationProposal; }
    template<typename DirectConnectGatewayAssociationProposalT = DirectConnectGatewayAssociationProposal>
    void SetDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposalT&& value) { m_directConnectGatewayAssociationProposalHasBeenSet = true; m_directConnectGatewayAssociationProposal = std::forward<DirectConnectGatewayAssociationProposalT>(value); }
    template<typename DirectConnectGatewayAssociationProposalT = DirectConnectGatewayAssociationProposal>
    CreateDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposalT&& value) { SetDirectConnectGatewayAssociationProposal(std::forward<DirectConnectGatewayAssociationProposalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDirectConnectGatewayAssociationProposalResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
