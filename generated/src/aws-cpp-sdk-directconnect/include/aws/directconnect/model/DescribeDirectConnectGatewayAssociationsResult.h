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
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult();
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociation>& GetDirectConnectGatewayAssociations() const{ return m_directConnectGatewayAssociations; }
    inline void SetDirectConnectGatewayAssociations(const Aws::Vector<DirectConnectGatewayAssociation>& value) { m_directConnectGatewayAssociations = value; }
    inline void SetDirectConnectGatewayAssociations(Aws::Vector<DirectConnectGatewayAssociation>&& value) { m_directConnectGatewayAssociations = std::move(value); }
    inline DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(const Aws::Vector<DirectConnectGatewayAssociation>& value) { SetDirectConnectGatewayAssociations(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(Aws::Vector<DirectConnectGatewayAssociation>&& value) { SetDirectConnectGatewayAssociations(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(const DirectConnectGatewayAssociation& value) { m_directConnectGatewayAssociations.push_back(value); return *this; }
    inline DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(DirectConnectGatewayAssociation&& value) { m_directConnectGatewayAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGatewayAssociation> m_directConnectGatewayAssociations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
