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
  /**
   * <p>Container for the response from the DescribeDirectConnectGatewayAssociations
   * API call</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociationsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsResult
  {
  public:
    DescribeDirectConnectGatewayAssociationsResult();
    DescribeDirectConnectGatewayAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectConnectGatewayAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline const Aws::Vector<DirectConnectGatewayAssociation>& GetDirectConnectGatewayAssociations() const{ return m_directConnectGatewayAssociations; }

    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline void SetDirectConnectGatewayAssociations(const Aws::Vector<DirectConnectGatewayAssociation>& value) { m_directConnectGatewayAssociations = value; }

    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline void SetDirectConnectGatewayAssociations(Aws::Vector<DirectConnectGatewayAssociation>&& value) { m_directConnectGatewayAssociations = std::move(value); }

    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(const Aws::Vector<DirectConnectGatewayAssociation>& value) { SetDirectConnectGatewayAssociations(value); return *this;}

    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& WithDirectConnectGatewayAssociations(Aws::Vector<DirectConnectGatewayAssociation>&& value) { SetDirectConnectGatewayAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(const DirectConnectGatewayAssociation& value) { m_directConnectGatewayAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the direct connect gateway associations.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsResult& AddDirectConnectGatewayAssociations(DirectConnectGatewayAssociation&& value) { m_directConnectGatewayAssociations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDirectConnectGatewayAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectConnectGatewayAssociation> m_directConnectGatewayAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
