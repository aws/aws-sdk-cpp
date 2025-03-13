/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeDirectConnectGatewayAssociationsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult() = default;
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociation>& GetDirectConnectGatewayAssociations() const { return m_directConnectGatewayAssociations; }
    template<typename DirectConnectGatewayAssociationsT = Aws::Vector<DirectConnectGatewayAssociation>>
    void SetDirectConnectGatewayAssociations(DirectConnectGatewayAssociationsT&& value) { m_directConnectGatewayAssociationsHasBeenSet = true; m_directConnectGatewayAssociations = std::forward<DirectConnectGatewayAssociationsT>(value); }
    template<typename DirectConnectGatewayAssociationsT = Aws::Vector<DirectConnectGatewayAssociation>>
    DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(DirectConnectGatewayAssociationsT&& value) { SetDirectConnectGatewayAssociations(std::forward<DirectConnectGatewayAssociationsT>(value)); return *this;}
    template<typename DirectConnectGatewayAssociationsT = DirectConnectGatewayAssociation>
    DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(DirectConnectGatewayAssociationsT&& value) { m_directConnectGatewayAssociationsHasBeenSet = true; m_directConnectGatewayAssociations.emplace_back(std::forward<DirectConnectGatewayAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDirectConnectGatewayAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDirectConnectGatewayAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGatewayAssociation> m_directConnectGatewayAssociations;
    bool m_directConnectGatewayAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
