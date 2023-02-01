/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMulticastDomain.h>
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
  class DescribeTransitGatewayMulticastDomainsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsResponse();
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline const Aws::Vector<TransitGatewayMulticastDomain>& GetTransitGatewayMulticastDomains() const{ return m_transitGatewayMulticastDomains; }

    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline void SetTransitGatewayMulticastDomains(const Aws::Vector<TransitGatewayMulticastDomain>& value) { m_transitGatewayMulticastDomains = value; }

    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline void SetTransitGatewayMulticastDomains(Aws::Vector<TransitGatewayMulticastDomain>&& value) { m_transitGatewayMulticastDomains = std::move(value); }

    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline DescribeTransitGatewayMulticastDomainsResponse& WithTransitGatewayMulticastDomains(const Aws::Vector<TransitGatewayMulticastDomain>& value) { SetTransitGatewayMulticastDomains(value); return *this;}

    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline DescribeTransitGatewayMulticastDomainsResponse& WithTransitGatewayMulticastDomains(Aws::Vector<TransitGatewayMulticastDomain>&& value) { SetTransitGatewayMulticastDomains(std::move(value)); return *this;}

    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline DescribeTransitGatewayMulticastDomainsResponse& AddTransitGatewayMulticastDomains(const TransitGatewayMulticastDomain& value) { m_transitGatewayMulticastDomains.push_back(value); return *this; }

    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline DescribeTransitGatewayMulticastDomainsResponse& AddTransitGatewayMulticastDomains(TransitGatewayMulticastDomain&& value) { m_transitGatewayMulticastDomains.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayMulticastDomainsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayMulticastDomainsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayMulticastDomainsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayMulticastDomainsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayMulticastDomainsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayMulticastDomain> m_transitGatewayMulticastDomains;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
