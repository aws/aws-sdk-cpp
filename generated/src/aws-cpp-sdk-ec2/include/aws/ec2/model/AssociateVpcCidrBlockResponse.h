/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcIpv6CidrBlockAssociation.h>
#include <aws/ec2/model/VpcCidrBlockAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AssociateVpcCidrBlockResponse
  {
  public:
    AWS_EC2_API AssociateVpcCidrBlockResponse() = default;
    AWS_EC2_API AssociateVpcCidrBlockResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateVpcCidrBlockResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline const VpcIpv6CidrBlockAssociation& GetIpv6CidrBlockAssociation() const { return m_ipv6CidrBlockAssociation; }
    template<typename Ipv6CidrBlockAssociationT = VpcIpv6CidrBlockAssociation>
    void SetIpv6CidrBlockAssociation(Ipv6CidrBlockAssociationT&& value) { m_ipv6CidrBlockAssociationHasBeenSet = true; m_ipv6CidrBlockAssociation = std::forward<Ipv6CidrBlockAssociationT>(value); }
    template<typename Ipv6CidrBlockAssociationT = VpcIpv6CidrBlockAssociation>
    AssociateVpcCidrBlockResponse& WithIpv6CidrBlockAssociation(Ipv6CidrBlockAssociationT&& value) { SetIpv6CidrBlockAssociation(std::forward<Ipv6CidrBlockAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR block association.</p>
     */
    inline const VpcCidrBlockAssociation& GetCidrBlockAssociation() const { return m_cidrBlockAssociation; }
    template<typename CidrBlockAssociationT = VpcCidrBlockAssociation>
    void SetCidrBlockAssociation(CidrBlockAssociationT&& value) { m_cidrBlockAssociationHasBeenSet = true; m_cidrBlockAssociation = std::forward<CidrBlockAssociationT>(value); }
    template<typename CidrBlockAssociationT = VpcCidrBlockAssociation>
    AssociateVpcCidrBlockResponse& WithCidrBlockAssociation(CidrBlockAssociationT&& value) { SetCidrBlockAssociation(std::forward<CidrBlockAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AssociateVpcCidrBlockResponse& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateVpcCidrBlockResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpcIpv6CidrBlockAssociation m_ipv6CidrBlockAssociation;
    bool m_ipv6CidrBlockAssociationHasBeenSet = false;

    VpcCidrBlockAssociation m_cidrBlockAssociation;
    bool m_cidrBlockAssociationHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
