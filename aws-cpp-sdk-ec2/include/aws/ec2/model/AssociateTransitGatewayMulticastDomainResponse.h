/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainAssociations.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class AssociateTransitGatewayMulticastDomainResponse
  {
  public:
    AWS_EC2_API AssociateTransitGatewayMulticastDomainResponse();
    AWS_EC2_API AssociateTransitGatewayMulticastDomainResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateTransitGatewayMulticastDomainResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway multicast domain associations.</p>
     */
    inline const TransitGatewayMulticastDomainAssociations& GetAssociations() const{ return m_associations; }

    /**
     * <p>Information about the transit gateway multicast domain associations.</p>
     */
    inline void SetAssociations(const TransitGatewayMulticastDomainAssociations& value) { m_associations = value; }

    /**
     * <p>Information about the transit gateway multicast domain associations.</p>
     */
    inline void SetAssociations(TransitGatewayMulticastDomainAssociations&& value) { m_associations = std::move(value); }

    /**
     * <p>Information about the transit gateway multicast domain associations.</p>
     */
    inline AssociateTransitGatewayMulticastDomainResponse& WithAssociations(const TransitGatewayMulticastDomainAssociations& value) { SetAssociations(value); return *this;}

    /**
     * <p>Information about the transit gateway multicast domain associations.</p>
     */
    inline AssociateTransitGatewayMulticastDomainResponse& WithAssociations(TransitGatewayMulticastDomainAssociations&& value) { SetAssociations(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateTransitGatewayMulticastDomainResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateTransitGatewayMulticastDomainResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastDomainAssociations m_associations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
