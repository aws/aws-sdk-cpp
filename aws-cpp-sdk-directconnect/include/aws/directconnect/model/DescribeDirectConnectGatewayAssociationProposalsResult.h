/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsResult
  {
  public:
    DescribeDirectConnectGatewayAssociationProposalsResult();
    DescribeDirectConnectGatewayAssociationProposalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectConnectGatewayAssociationProposalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociationProposal>& GetDirectConnectGatewayAssociationProposals() const{ return m_directConnectGatewayAssociationProposals; }

    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline void SetDirectConnectGatewayAssociationProposals(const Aws::Vector<DirectConnectGatewayAssociationProposal>& value) { m_directConnectGatewayAssociationProposals = value; }

    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline void SetDirectConnectGatewayAssociationProposals(Aws::Vector<DirectConnectGatewayAssociationProposal>&& value) { m_directConnectGatewayAssociationProposals = std::move(value); }

    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithDirectConnectGatewayAssociationProposals(const Aws::Vector<DirectConnectGatewayAssociationProposal>& value) { SetDirectConnectGatewayAssociationProposals(value); return *this;}

    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithDirectConnectGatewayAssociationProposals(Aws::Vector<DirectConnectGatewayAssociationProposal>&& value) { SetDirectConnectGatewayAssociationProposals(std::move(value)); return *this;}

    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& AddDirectConnectGatewayAssociationProposals(const DirectConnectGatewayAssociationProposal& value) { m_directConnectGatewayAssociationProposals.push_back(value); return *this; }

    /**
     * <p>Describes the Direct Connect gateway association proposals.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& AddDirectConnectGatewayAssociationProposals(DirectConnectGatewayAssociationProposal&& value) { m_directConnectGatewayAssociationProposals.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectConnectGatewayAssociationProposal> m_directConnectGatewayAssociationProposals;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
