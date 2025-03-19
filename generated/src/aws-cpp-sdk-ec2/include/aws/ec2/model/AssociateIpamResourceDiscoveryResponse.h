/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamResourceDiscoveryAssociation.h>
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
  class AssociateIpamResourceDiscoveryResponse
  {
  public:
    AWS_EC2_API AssociateIpamResourceDiscoveryResponse() = default;
    AWS_EC2_API AssociateIpamResourceDiscoveryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateIpamResourceDiscoveryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A resource discovery association. An associated resource discovery is a
     * resource discovery that has been associated with an IPAM.</p>
     */
    inline const IpamResourceDiscoveryAssociation& GetIpamResourceDiscoveryAssociation() const { return m_ipamResourceDiscoveryAssociation; }
    template<typename IpamResourceDiscoveryAssociationT = IpamResourceDiscoveryAssociation>
    void SetIpamResourceDiscoveryAssociation(IpamResourceDiscoveryAssociationT&& value) { m_ipamResourceDiscoveryAssociationHasBeenSet = true; m_ipamResourceDiscoveryAssociation = std::forward<IpamResourceDiscoveryAssociationT>(value); }
    template<typename IpamResourceDiscoveryAssociationT = IpamResourceDiscoveryAssociation>
    AssociateIpamResourceDiscoveryResponse& WithIpamResourceDiscoveryAssociation(IpamResourceDiscoveryAssociationT&& value) { SetIpamResourceDiscoveryAssociation(std::forward<IpamResourceDiscoveryAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateIpamResourceDiscoveryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IpamResourceDiscoveryAssociation m_ipamResourceDiscoveryAssociation;
    bool m_ipamResourceDiscoveryAssociationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
