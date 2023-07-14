﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayRouteTable.h>
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
  class AWS_EC2_API DescribeTransitGatewayRouteTablesResponse
  {
  public:
    DescribeTransitGatewayRouteTablesResponse();
    DescribeTransitGatewayRouteTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTransitGatewayRouteTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteTable>& GetTransitGatewayRouteTables() const{ return m_transitGatewayRouteTables; }

    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline void SetTransitGatewayRouteTables(const Aws::Vector<TransitGatewayRouteTable>& value) { m_transitGatewayRouteTables = value; }

    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline void SetTransitGatewayRouteTables(Aws::Vector<TransitGatewayRouteTable>&& value) { m_transitGatewayRouteTables = std::move(value); }

    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesResponse& WithTransitGatewayRouteTables(const Aws::Vector<TransitGatewayRouteTable>& value) { SetTransitGatewayRouteTables(value); return *this;}

    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesResponse& WithTransitGatewayRouteTables(Aws::Vector<TransitGatewayRouteTable>&& value) { SetTransitGatewayRouteTables(std::move(value)); return *this;}

    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesResponse& AddTransitGatewayRouteTables(const TransitGatewayRouteTable& value) { m_transitGatewayRouteTables.push_back(value); return *this; }

    /**
     * <p>Information about the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesResponse& AddTransitGatewayRouteTables(TransitGatewayRouteTable&& value) { m_transitGatewayRouteTables.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayRouteTablesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayRouteTablesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayRouteTablesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayRouteTablesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayRouteTablesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayRouteTable> m_transitGatewayRouteTables;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
