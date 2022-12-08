/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayAssociation.h>
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
  class DisassociateTransitGatewayRouteTableResponse
  {
  public:
    AWS_EC2_API DisassociateTransitGatewayRouteTableResponse();
    AWS_EC2_API DisassociateTransitGatewayRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateTransitGatewayRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the association.</p>
     */
    inline const TransitGatewayAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociation(const TransitGatewayAssociation& value) { m_association = value; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociation(TransitGatewayAssociation&& value) { m_association = std::move(value); }

    /**
     * <p>Information about the association.</p>
     */
    inline DisassociateTransitGatewayRouteTableResponse& WithAssociation(const TransitGatewayAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline DisassociateTransitGatewayRouteTableResponse& WithAssociation(TransitGatewayAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisassociateTransitGatewayRouteTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateTransitGatewayRouteTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayAssociation m_association;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
