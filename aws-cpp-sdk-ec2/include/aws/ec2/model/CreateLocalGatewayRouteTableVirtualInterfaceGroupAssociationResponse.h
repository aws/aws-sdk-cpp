/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LocalGatewayRouteTableVirtualInterfaceGroupAssociation.h>
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
  class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse
  {
  public:
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse();
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the local gateway route table virtual interface group
     * association.</p>
     */
    inline const LocalGatewayRouteTableVirtualInterfaceGroupAssociation& GetLocalGatewayRouteTableVirtualInterfaceGroupAssociation() const{ return m_localGatewayRouteTableVirtualInterfaceGroupAssociation; }

    /**
     * <p>Information about the local gateway route table virtual interface group
     * association.</p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const LocalGatewayRouteTableVirtualInterfaceGroupAssociation& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociation = value; }

    /**
     * <p>Information about the local gateway route table virtual interface group
     * association.</p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociation(LocalGatewayRouteTableVirtualInterfaceGroupAssociation&& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociation = std::move(value); }

    /**
     * <p>Information about the local gateway route table virtual interface group
     * association.</p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const LocalGatewayRouteTableVirtualInterfaceGroupAssociation& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociation(value); return *this;}

    /**
     * <p>Information about the local gateway route table virtual interface group
     * association.</p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociation(LocalGatewayRouteTableVirtualInterfaceGroupAssociation&& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LocalGatewayRouteTableVirtualInterfaceGroupAssociation m_localGatewayRouteTableVirtualInterfaceGroupAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
