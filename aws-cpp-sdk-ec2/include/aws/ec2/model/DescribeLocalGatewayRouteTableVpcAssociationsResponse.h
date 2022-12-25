/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LocalGatewayRouteTableVpcAssociation.h>
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
  class DescribeLocalGatewayRouteTableVpcAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeLocalGatewayRouteTableVpcAssociationsResponse();
    AWS_EC2_API DescribeLocalGatewayRouteTableVpcAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLocalGatewayRouteTableVpcAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<LocalGatewayRouteTableVpcAssociation>& GetLocalGatewayRouteTableVpcAssociations() const{ return m_localGatewayRouteTableVpcAssociations; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociations(const Aws::Vector<LocalGatewayRouteTableVpcAssociation>& value) { m_localGatewayRouteTableVpcAssociations = value; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociations(Aws::Vector<LocalGatewayRouteTableVpcAssociation>&& value) { m_localGatewayRouteTableVpcAssociations = std::move(value); }

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithLocalGatewayRouteTableVpcAssociations(const Aws::Vector<LocalGatewayRouteTableVpcAssociation>& value) { SetLocalGatewayRouteTableVpcAssociations(value); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithLocalGatewayRouteTableVpcAssociations(Aws::Vector<LocalGatewayRouteTableVpcAssociation>&& value) { SetLocalGatewayRouteTableVpcAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& AddLocalGatewayRouteTableVpcAssociations(const LocalGatewayRouteTableVpcAssociation& value) { m_localGatewayRouteTableVpcAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the associations.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& AddLocalGatewayRouteTableVpcAssociations(LocalGatewayRouteTableVpcAssociation&& value) { m_localGatewayRouteTableVpcAssociations.push_back(std::move(value)); return *this; }


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
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLocalGatewayRouteTableVpcAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LocalGatewayRouteTableVpcAssociation> m_localGatewayRouteTableVpcAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
