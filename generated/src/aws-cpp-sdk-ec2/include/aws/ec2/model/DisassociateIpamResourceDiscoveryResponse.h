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
  class DisassociateIpamResourceDiscoveryResponse
  {
  public:
    AWS_EC2_API DisassociateIpamResourceDiscoveryResponse();
    AWS_EC2_API DisassociateIpamResourceDiscoveryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateIpamResourceDiscoveryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A resource discovery association.</p>
     */
    inline const IpamResourceDiscoveryAssociation& GetIpamResourceDiscoveryAssociation() const{ return m_ipamResourceDiscoveryAssociation; }

    /**
     * <p>A resource discovery association.</p>
     */
    inline void SetIpamResourceDiscoveryAssociation(const IpamResourceDiscoveryAssociation& value) { m_ipamResourceDiscoveryAssociation = value; }

    /**
     * <p>A resource discovery association.</p>
     */
    inline void SetIpamResourceDiscoveryAssociation(IpamResourceDiscoveryAssociation&& value) { m_ipamResourceDiscoveryAssociation = std::move(value); }

    /**
     * <p>A resource discovery association.</p>
     */
    inline DisassociateIpamResourceDiscoveryResponse& WithIpamResourceDiscoveryAssociation(const IpamResourceDiscoveryAssociation& value) { SetIpamResourceDiscoveryAssociation(value); return *this;}

    /**
     * <p>A resource discovery association.</p>
     */
    inline DisassociateIpamResourceDiscoveryResponse& WithIpamResourceDiscoveryAssociation(IpamResourceDiscoveryAssociation&& value) { SetIpamResourceDiscoveryAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisassociateIpamResourceDiscoveryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateIpamResourceDiscoveryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamResourceDiscoveryAssociation m_ipamResourceDiscoveryAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
