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
    AWS_EC2_API AssociateIpamResourceDiscoveryResponse();
    AWS_EC2_API AssociateIpamResourceDiscoveryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateIpamResourceDiscoveryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A resource discovery association. An associated resource discovery is a
     * resource discovery that has been associated with an IPAM.</p>
     */
    inline const IpamResourceDiscoveryAssociation& GetIpamResourceDiscoveryAssociation() const{ return m_ipamResourceDiscoveryAssociation; }

    /**
     * <p>A resource discovery association. An associated resource discovery is a
     * resource discovery that has been associated with an IPAM.</p>
     */
    inline void SetIpamResourceDiscoveryAssociation(const IpamResourceDiscoveryAssociation& value) { m_ipamResourceDiscoveryAssociation = value; }

    /**
     * <p>A resource discovery association. An associated resource discovery is a
     * resource discovery that has been associated with an IPAM.</p>
     */
    inline void SetIpamResourceDiscoveryAssociation(IpamResourceDiscoveryAssociation&& value) { m_ipamResourceDiscoveryAssociation = std::move(value); }

    /**
     * <p>A resource discovery association. An associated resource discovery is a
     * resource discovery that has been associated with an IPAM.</p>
     */
    inline AssociateIpamResourceDiscoveryResponse& WithIpamResourceDiscoveryAssociation(const IpamResourceDiscoveryAssociation& value) { SetIpamResourceDiscoveryAssociation(value); return *this;}

    /**
     * <p>A resource discovery association. An associated resource discovery is a
     * resource discovery that has been associated with an IPAM.</p>
     */
    inline AssociateIpamResourceDiscoveryResponse& WithIpamResourceDiscoveryAssociation(IpamResourceDiscoveryAssociation&& value) { SetIpamResourceDiscoveryAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateIpamResourceDiscoveryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateIpamResourceDiscoveryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamResourceDiscoveryAssociation m_ipamResourceDiscoveryAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
