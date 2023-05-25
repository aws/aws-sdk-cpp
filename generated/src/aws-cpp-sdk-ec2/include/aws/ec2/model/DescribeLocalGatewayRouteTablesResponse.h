/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LocalGatewayRouteTable.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeLocalGatewayRouteTablesResponse
  {
  public:
    AWS_EC2_API DescribeLocalGatewayRouteTablesResponse();
    AWS_EC2_API DescribeLocalGatewayRouteTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLocalGatewayRouteTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline const Aws::Vector<LocalGatewayRouteTable>& GetLocalGatewayRouteTables() const{ return m_localGatewayRouteTables; }

    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline void SetLocalGatewayRouteTables(const Aws::Vector<LocalGatewayRouteTable>& value) { m_localGatewayRouteTables = value; }

    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline void SetLocalGatewayRouteTables(Aws::Vector<LocalGatewayRouteTable>&& value) { m_localGatewayRouteTables = std::move(value); }

    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline DescribeLocalGatewayRouteTablesResponse& WithLocalGatewayRouteTables(const Aws::Vector<LocalGatewayRouteTable>& value) { SetLocalGatewayRouteTables(value); return *this;}

    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline DescribeLocalGatewayRouteTablesResponse& WithLocalGatewayRouteTables(Aws::Vector<LocalGatewayRouteTable>&& value) { SetLocalGatewayRouteTables(std::move(value)); return *this;}

    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline DescribeLocalGatewayRouteTablesResponse& AddLocalGatewayRouteTables(const LocalGatewayRouteTable& value) { m_localGatewayRouteTables.push_back(value); return *this; }

    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline DescribeLocalGatewayRouteTablesResponse& AddLocalGatewayRouteTables(LocalGatewayRouteTable&& value) { m_localGatewayRouteTables.push_back(std::move(value)); return *this; }


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
    inline DescribeLocalGatewayRouteTablesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeLocalGatewayRouteTablesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeLocalGatewayRouteTablesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLocalGatewayRouteTablesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLocalGatewayRouteTablesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LocalGatewayRouteTable> m_localGatewayRouteTables;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
