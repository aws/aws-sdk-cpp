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
  class CreateLocalGatewayRouteTableVpcAssociationResponse
  {
  public:
    AWS_EC2_API CreateLocalGatewayRouteTableVpcAssociationResponse() = default;
    AWS_EC2_API CreateLocalGatewayRouteTableVpcAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLocalGatewayRouteTableVpcAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const LocalGatewayRouteTableVpcAssociation& GetLocalGatewayRouteTableVpcAssociation() const { return m_localGatewayRouteTableVpcAssociation; }
    template<typename LocalGatewayRouteTableVpcAssociationT = LocalGatewayRouteTableVpcAssociation>
    void SetLocalGatewayRouteTableVpcAssociation(LocalGatewayRouteTableVpcAssociationT&& value) { m_localGatewayRouteTableVpcAssociationHasBeenSet = true; m_localGatewayRouteTableVpcAssociation = std::forward<LocalGatewayRouteTableVpcAssociationT>(value); }
    template<typename LocalGatewayRouteTableVpcAssociationT = LocalGatewayRouteTableVpcAssociation>
    CreateLocalGatewayRouteTableVpcAssociationResponse& WithLocalGatewayRouteTableVpcAssociation(LocalGatewayRouteTableVpcAssociationT&& value) { SetLocalGatewayRouteTableVpcAssociation(std::forward<LocalGatewayRouteTableVpcAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateLocalGatewayRouteTableVpcAssociationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LocalGatewayRouteTableVpcAssociation m_localGatewayRouteTableVpcAssociation;
    bool m_localGatewayRouteTableVpcAssociationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
