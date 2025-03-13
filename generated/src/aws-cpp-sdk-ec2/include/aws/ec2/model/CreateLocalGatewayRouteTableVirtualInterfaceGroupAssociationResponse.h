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
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse() = default;
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the local gateway route table virtual interface group
     * association.</p>
     */
    inline const LocalGatewayRouteTableVirtualInterfaceGroupAssociation& GetLocalGatewayRouteTableVirtualInterfaceGroupAssociation() const { return m_localGatewayRouteTableVirtualInterfaceGroupAssociation; }
    template<typename LocalGatewayRouteTableVirtualInterfaceGroupAssociationT = LocalGatewayRouteTableVirtualInterfaceGroupAssociation>
    void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociation(LocalGatewayRouteTableVirtualInterfaceGroupAssociationT&& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociation = std::forward<LocalGatewayRouteTableVirtualInterfaceGroupAssociationT>(value); }
    template<typename LocalGatewayRouteTableVirtualInterfaceGroupAssociationT = LocalGatewayRouteTableVirtualInterfaceGroupAssociation>
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociation(LocalGatewayRouteTableVirtualInterfaceGroupAssociationT&& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociation(std::forward<LocalGatewayRouteTableVirtualInterfaceGroupAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LocalGatewayRouteTableVirtualInterfaceGroupAssociation m_localGatewayRouteTableVirtualInterfaceGroupAssociation;
    bool m_localGatewayRouteTableVirtualInterfaceGroupAssociationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
