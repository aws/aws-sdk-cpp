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
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalResult();
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Direct Connect gateway proposal.</p>
     */
    inline const DirectConnectGatewayAssociationProposal& GetDirectConnectGatewayAssociationProposal() const{ return m_directConnectGatewayAssociationProposal; }

    /**
     * <p>Information about the Direct Connect gateway proposal.</p>
     */
    inline void SetDirectConnectGatewayAssociationProposal(const DirectConnectGatewayAssociationProposal& value) { m_directConnectGatewayAssociationProposal = value; }

    /**
     * <p>Information about the Direct Connect gateway proposal.</p>
     */
    inline void SetDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposal&& value) { m_directConnectGatewayAssociationProposal = std::move(value); }

    /**
     * <p>Information about the Direct Connect gateway proposal.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociationProposal(const DirectConnectGatewayAssociationProposal& value) { SetDirectConnectGatewayAssociationProposal(value); return *this;}

    /**
     * <p>Information about the Direct Connect gateway proposal.</p>
     */
    inline CreateDirectConnectGatewayAssociationProposalResult& WithDirectConnectGatewayAssociationProposal(DirectConnectGatewayAssociationProposal&& value) { SetDirectConnectGatewayAssociationProposal(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDirectConnectGatewayAssociationProposalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDirectConnectGatewayAssociationProposalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDirectConnectGatewayAssociationProposalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectConnectGatewayAssociationProposal m_directConnectGatewayAssociationProposal;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
