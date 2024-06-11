﻿/**
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
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult();
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociationProposal>& GetDirectConnectGatewayAssociationProposals() const{ return m_directConnectGatewayAssociationProposals; }
    inline void SetDirectConnectGatewayAssociationProposals(const Aws::Vector<DirectConnectGatewayAssociationProposal>& value) { m_directConnectGatewayAssociationProposals = value; }
    inline void SetDirectConnectGatewayAssociationProposals(Aws::Vector<DirectConnectGatewayAssociationProposal>&& value) { m_directConnectGatewayAssociationProposals = std::move(value); }
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithDirectConnectGatewayAssociationProposals(const Aws::Vector<DirectConnectGatewayAssociationProposal>& value) { SetDirectConnectGatewayAssociationProposals(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithDirectConnectGatewayAssociationProposals(Aws::Vector<DirectConnectGatewayAssociationProposal>&& value) { SetDirectConnectGatewayAssociationProposals(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationProposalsResult& AddDirectConnectGatewayAssociationProposals(const DirectConnectGatewayAssociationProposal& value) { m_directConnectGatewayAssociationProposals.push_back(value); return *this; }
    inline DescribeDirectConnectGatewayAssociationProposalsResult& AddDirectConnectGatewayAssociationProposals(DirectConnectGatewayAssociationProposal&& value) { m_directConnectGatewayAssociationProposals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGatewayAssociationProposal> m_directConnectGatewayAssociationProposals;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
