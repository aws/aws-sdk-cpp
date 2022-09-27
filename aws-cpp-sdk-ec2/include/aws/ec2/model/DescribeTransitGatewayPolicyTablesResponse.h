﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPolicyTable.h>
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
  class AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse
  {
  public:
    DescribeTransitGatewayPolicyTablesResponse();
    DescribeTransitGatewayPolicyTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTransitGatewayPolicyTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline const Aws::Vector<TransitGatewayPolicyTable>& GetTransitGatewayPolicyTables() const{ return m_transitGatewayPolicyTables; }

    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline void SetTransitGatewayPolicyTables(const Aws::Vector<TransitGatewayPolicyTable>& value) { m_transitGatewayPolicyTables = value; }

    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline void SetTransitGatewayPolicyTables(Aws::Vector<TransitGatewayPolicyTable>&& value) { m_transitGatewayPolicyTables = std::move(value); }

    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& WithTransitGatewayPolicyTables(const Aws::Vector<TransitGatewayPolicyTable>& value) { SetTransitGatewayPolicyTables(value); return *this;}

    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& WithTransitGatewayPolicyTables(Aws::Vector<TransitGatewayPolicyTable>&& value) { SetTransitGatewayPolicyTables(std::move(value)); return *this;}

    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& AddTransitGatewayPolicyTables(const TransitGatewayPolicyTable& value) { m_transitGatewayPolicyTables.push_back(value); return *this; }

    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& AddTransitGatewayPolicyTables(TransitGatewayPolicyTable&& value) { m_transitGatewayPolicyTables.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewayPolicyTablesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayPolicyTablesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayPolicyTablesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayPolicyTable> m_transitGatewayPolicyTables;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
