/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamResourceDiscovery.h>
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
  class DeleteIpamResourceDiscoveryResponse
  {
  public:
    AWS_EC2_API DeleteIpamResourceDiscoveryResponse();
    AWS_EC2_API DeleteIpamResourceDiscoveryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteIpamResourceDiscoveryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IPAM resource discovery.</p>
     */
    inline const IpamResourceDiscovery& GetIpamResourceDiscovery() const{ return m_ipamResourceDiscovery; }

    /**
     * <p>The IPAM resource discovery.</p>
     */
    inline void SetIpamResourceDiscovery(const IpamResourceDiscovery& value) { m_ipamResourceDiscovery = value; }

    /**
     * <p>The IPAM resource discovery.</p>
     */
    inline void SetIpamResourceDiscovery(IpamResourceDiscovery&& value) { m_ipamResourceDiscovery = std::move(value); }

    /**
     * <p>The IPAM resource discovery.</p>
     */
    inline DeleteIpamResourceDiscoveryResponse& WithIpamResourceDiscovery(const IpamResourceDiscovery& value) { SetIpamResourceDiscovery(value); return *this;}

    /**
     * <p>The IPAM resource discovery.</p>
     */
    inline DeleteIpamResourceDiscoveryResponse& WithIpamResourceDiscovery(IpamResourceDiscovery&& value) { SetIpamResourceDiscovery(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteIpamResourceDiscoveryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteIpamResourceDiscoveryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamResourceDiscovery m_ipamResourceDiscovery;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
