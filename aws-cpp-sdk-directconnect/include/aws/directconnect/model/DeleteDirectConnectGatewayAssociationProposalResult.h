/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
  class DeleteDirectConnectGatewayAssociationProposalResult
  {
  public:
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult();
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline const DirectConnectGatewayAssociationProposal& GetDirectConnectGatewayAssociationProposal() const{ return m_directConnectGatewayAssociationProposal; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetDirectConnectGatewayAssociationProposal(const DirectConnectGatewayAssociationProposal& value) { m_directConnectGatewayAssociationProposal = value; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposal&& value) { m_directConnectGatewayAssociationProposal = std::move(value); }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DeleteDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociationProposal(const DirectConnectGatewayAssociationProposal& value) { SetDirectConnectGatewayAssociationProposal(value); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DeleteDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposal&& value) { SetDirectConnectGatewayAssociationProposal(std::move(value)); return *this;}

  private:

    DirectConnectGatewayAssociationProposal m_directConnectGatewayAssociationProposal;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
