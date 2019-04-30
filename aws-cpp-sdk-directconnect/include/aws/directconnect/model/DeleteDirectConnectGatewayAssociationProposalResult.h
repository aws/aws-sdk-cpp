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
  class AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalResult
  {
  public:
    DeleteDirectConnectGatewayAssociationProposalResult();
    DeleteDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteDirectConnectGatewayAssociationProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
