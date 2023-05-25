/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDomain.h>
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
  class DeleteTransitGatewayMulticastDomainResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayMulticastDomainResponse();
    AWS_EC2_API DeleteTransitGatewayMulticastDomainResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayMulticastDomainResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the deleted transit gateway multicast domain.</p>
     */
    inline const TransitGatewayMulticastDomain& GetTransitGatewayMulticastDomain() const{ return m_transitGatewayMulticastDomain; }

    /**
     * <p>Information about the deleted transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomain(const TransitGatewayMulticastDomain& value) { m_transitGatewayMulticastDomain = value; }

    /**
     * <p>Information about the deleted transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomain(TransitGatewayMulticastDomain&& value) { m_transitGatewayMulticastDomain = std::move(value); }

    /**
     * <p>Information about the deleted transit gateway multicast domain.</p>
     */
    inline DeleteTransitGatewayMulticastDomainResponse& WithTransitGatewayMulticastDomain(const TransitGatewayMulticastDomain& value) { SetTransitGatewayMulticastDomain(value); return *this;}

    /**
     * <p>Information about the deleted transit gateway multicast domain.</p>
     */
    inline DeleteTransitGatewayMulticastDomainResponse& WithTransitGatewayMulticastDomain(TransitGatewayMulticastDomain&& value) { SetTransitGatewayMulticastDomain(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTransitGatewayMulticastDomainResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTransitGatewayMulticastDomainResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastDomain m_transitGatewayMulticastDomain;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
