/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SubnetIpv6CidrBlockAssociation.h>
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
  class AssociateSubnetCidrBlockResponse
  {
  public:
    AWS_EC2_API AssociateSubnetCidrBlockResponse() = default;
    AWS_EC2_API AssociateSubnetCidrBlockResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateSubnetCidrBlockResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IPv6 association.</p>
     */
    inline const SubnetIpv6CidrBlockAssociation& GetIpv6CidrBlockAssociation() const { return m_ipv6CidrBlockAssociation; }
    template<typename Ipv6CidrBlockAssociationT = SubnetIpv6CidrBlockAssociation>
    void SetIpv6CidrBlockAssociation(Ipv6CidrBlockAssociationT&& value) { m_ipv6CidrBlockAssociationHasBeenSet = true; m_ipv6CidrBlockAssociation = std::forward<Ipv6CidrBlockAssociationT>(value); }
    template<typename Ipv6CidrBlockAssociationT = SubnetIpv6CidrBlockAssociation>
    AssociateSubnetCidrBlockResponse& WithIpv6CidrBlockAssociation(Ipv6CidrBlockAssociationT&& value) { SetIpv6CidrBlockAssociation(std::forward<Ipv6CidrBlockAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AssociateSubnetCidrBlockResponse& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateSubnetCidrBlockResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SubnetIpv6CidrBlockAssociation m_ipv6CidrBlockAssociation;
    bool m_ipv6CidrBlockAssociationHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
