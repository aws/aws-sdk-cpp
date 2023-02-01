/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LocalGatewayRouteTableVpcAssociation.h>
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
  class DeleteLocalGatewayRouteTableVpcAssociationResponse
  {
  public:
    AWS_EC2_API DeleteLocalGatewayRouteTableVpcAssociationResponse();
    AWS_EC2_API DeleteLocalGatewayRouteTableVpcAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteLocalGatewayRouteTableVpcAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the association.</p>
     */
    inline const LocalGatewayRouteTableVpcAssociation& GetLocalGatewayRouteTableVpcAssociation() const{ return m_localGatewayRouteTableVpcAssociation; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociation(const LocalGatewayRouteTableVpcAssociation& value) { m_localGatewayRouteTableVpcAssociation = value; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociation(LocalGatewayRouteTableVpcAssociation&& value) { m_localGatewayRouteTableVpcAssociation = std::move(value); }

    /**
     * <p>Information about the association.</p>
     */
    inline DeleteLocalGatewayRouteTableVpcAssociationResponse& WithLocalGatewayRouteTableVpcAssociation(const LocalGatewayRouteTableVpcAssociation& value) { SetLocalGatewayRouteTableVpcAssociation(value); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline DeleteLocalGatewayRouteTableVpcAssociationResponse& WithLocalGatewayRouteTableVpcAssociation(LocalGatewayRouteTableVpcAssociation&& value) { SetLocalGatewayRouteTableVpcAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteLocalGatewayRouteTableVpcAssociationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteLocalGatewayRouteTableVpcAssociationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LocalGatewayRouteTableVpcAssociation m_localGatewayRouteTableVpcAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
