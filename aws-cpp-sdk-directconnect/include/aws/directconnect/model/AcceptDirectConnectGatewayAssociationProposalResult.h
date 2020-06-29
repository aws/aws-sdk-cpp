/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociation.h>
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
  class AWS_DIRECTCONNECT_API AcceptDirectConnectGatewayAssociationProposalResult
  {
  public:
    AcceptDirectConnectGatewayAssociationProposalResult();
    AcceptDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AcceptDirectConnectGatewayAssociationProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DirectConnectGatewayAssociation& GetDirectConnectGatewayAssociation() const{ return m_directConnectGatewayAssociation; }

    
    inline void SetDirectConnectGatewayAssociation(const DirectConnectGatewayAssociation& value) { m_directConnectGatewayAssociation = value; }

    
    inline void SetDirectConnectGatewayAssociation(DirectConnectGatewayAssociation&& value) { m_directConnectGatewayAssociation = std::move(value); }

    
    inline AcceptDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociation(const DirectConnectGatewayAssociation& value) { SetDirectConnectGatewayAssociation(value); return *this;}

    
    inline AcceptDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociation(DirectConnectGatewayAssociation&& value) { SetDirectConnectGatewayAssociation(std::move(value)); return *this;}

  private:

    DirectConnectGatewayAssociation m_directConnectGatewayAssociation;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
