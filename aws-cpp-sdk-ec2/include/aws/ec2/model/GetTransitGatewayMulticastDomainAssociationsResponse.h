/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainAssociation.h>
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
  class GetTransitGatewayMulticastDomainAssociationsResponse
  {
  public:
    AWS_EC2_API GetTransitGatewayMulticastDomainAssociationsResponse();
    AWS_EC2_API GetTransitGatewayMulticastDomainAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetTransitGatewayMulticastDomainAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline const Aws::Vector<TransitGatewayMulticastDomainAssociation>& GetMulticastDomainAssociations() const{ return m_multicastDomainAssociations; }

    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline void SetMulticastDomainAssociations(const Aws::Vector<TransitGatewayMulticastDomainAssociation>& value) { m_multicastDomainAssociations = value; }

    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline void SetMulticastDomainAssociations(Aws::Vector<TransitGatewayMulticastDomainAssociation>&& value) { m_multicastDomainAssociations = std::move(value); }

    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithMulticastDomainAssociations(const Aws::Vector<TransitGatewayMulticastDomainAssociation>& value) { SetMulticastDomainAssociations(value); return *this;}

    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithMulticastDomainAssociations(Aws::Vector<TransitGatewayMulticastDomainAssociation>&& value) { SetMulticastDomainAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline GetTransitGatewayMulticastDomainAssociationsResponse& AddMulticastDomainAssociations(const TransitGatewayMulticastDomainAssociation& value) { m_multicastDomainAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline GetTransitGatewayMulticastDomainAssociationsResponse& AddMulticastDomainAssociations(TransitGatewayMulticastDomainAssociation&& value) { m_multicastDomainAssociations.push_back(std::move(value)); return *this; }


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
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetTransitGatewayMulticastDomainAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayMulticastDomainAssociation> m_multicastDomainAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
