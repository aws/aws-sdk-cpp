/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociationProposal.h>
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
  class DescribeDirectConnectGatewayAssociationProposalsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult() = default;
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociationProposal>& GetDirectConnectGatewayAssociationProposals() const { return m_directConnectGatewayAssociationProposals; }
    template<typename DirectConnectGatewayAssociationProposalsT = Aws::Vector<DirectConnectGatewayAssociationProposal>>
    void SetDirectConnectGatewayAssociationProposals(DirectConnectGatewayAssociationProposalsT&& value) { m_directConnectGatewayAssociationProposalsHasBeenSet = true; m_directConnectGatewayAssociationProposals = std::forward<DirectConnectGatewayAssociationProposalsT>(value); }
    template<typename DirectConnectGatewayAssociationProposalsT = Aws::Vector<DirectConnectGatewayAssociationProposal>>
    DescribeDirectConnectGatewayAssociationProposalsResult& WithDirectConnectGatewayAssociationProposals(DirectConnectGatewayAssociationProposalsT&& value) { SetDirectConnectGatewayAssociationProposals(std::forward<DirectConnectGatewayAssociationProposalsT>(value)); return *this;}
    template<typename DirectConnectGatewayAssociationProposalsT = DirectConnectGatewayAssociationProposal>
    DescribeDirectConnectGatewayAssociationProposalsResult& AddDirectConnectGatewayAssociationProposals(DirectConnectGatewayAssociationProposalsT&& value) { m_directConnectGatewayAssociationProposalsHasBeenSet = true; m_directConnectGatewayAssociationProposals.emplace_back(std::forward<DirectConnectGatewayAssociationProposalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDirectConnectGatewayAssociationProposalsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGatewayAssociationProposal> m_directConnectGatewayAssociationProposals;
    bool m_directConnectGatewayAssociationProposalsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
