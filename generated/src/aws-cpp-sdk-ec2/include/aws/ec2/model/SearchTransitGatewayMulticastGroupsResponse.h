/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMulticastGroup.h>
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
  class SearchTransitGatewayMulticastGroupsResponse
  {
  public:
    AWS_EC2_API SearchTransitGatewayMulticastGroupsResponse();
    AWS_EC2_API SearchTransitGatewayMulticastGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API SearchTransitGatewayMulticastGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline const Aws::Vector<TransitGatewayMulticastGroup>& GetMulticastGroups() const{ return m_multicastGroups; }

    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline void SetMulticastGroups(const Aws::Vector<TransitGatewayMulticastGroup>& value) { m_multicastGroups = value; }

    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline void SetMulticastGroups(Aws::Vector<TransitGatewayMulticastGroup>&& value) { m_multicastGroups = std::move(value); }

    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline SearchTransitGatewayMulticastGroupsResponse& WithMulticastGroups(const Aws::Vector<TransitGatewayMulticastGroup>& value) { SetMulticastGroups(value); return *this;}

    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline SearchTransitGatewayMulticastGroupsResponse& WithMulticastGroups(Aws::Vector<TransitGatewayMulticastGroup>&& value) { SetMulticastGroups(std::move(value)); return *this;}

    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline SearchTransitGatewayMulticastGroupsResponse& AddMulticastGroups(const TransitGatewayMulticastGroup& value) { m_multicastGroups.push_back(value); return *this; }

    /**
     * <p>Information about the transit gateway multicast group.</p>
     */
    inline SearchTransitGatewayMulticastGroupsResponse& AddMulticastGroups(TransitGatewayMulticastGroup&& value) { m_multicastGroups.push_back(std::move(value)); return *this; }


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
    inline SearchTransitGatewayMulticastGroupsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline SearchTransitGatewayMulticastGroupsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline SearchTransitGatewayMulticastGroupsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SearchTransitGatewayMulticastGroupsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SearchTransitGatewayMulticastGroupsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayMulticastGroup> m_multicastGroups;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
