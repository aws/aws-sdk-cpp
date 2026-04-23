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
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult
  {
  public:
    DescribeDirectConnectGatewayAssociationsResult();
    DescribeDirectConnectGatewayAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectConnectGatewayAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociation>& GetDirectConnectGatewayAssociations() const{ return m_directConnectGatewayAssociations; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetDirectConnectGatewayAssociations(const Aws::Vector<DirectConnectGatewayAssociation>& value) { m_directConnectGatewayAssociations = value; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetDirectConnectGatewayAssociations(Aws::Vector<DirectConnectGatewayAssociation>&& value) { m_directConnectGatewayAssociations = std::move(value); }

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(const Aws::Vector<DirectConnectGatewayAssociation>& value) { SetDirectConnectGatewayAssociations(value); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(Aws::Vector<DirectConnectGatewayAssociation>&& value) { SetDirectConnectGatewayAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(const DirectConnectGatewayAssociation& value) { m_directConnectGatewayAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(DirectConnectGatewayAssociation&& value) { m_directConnectGatewayAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectConnectGatewayAssociation> m_directConnectGatewayAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
