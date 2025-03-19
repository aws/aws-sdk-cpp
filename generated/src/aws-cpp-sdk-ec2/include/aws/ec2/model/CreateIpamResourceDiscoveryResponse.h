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
  class CreateIpamResourceDiscoveryResponse
  {
  public:
    AWS_EC2_API CreateIpamResourceDiscoveryResponse() = default;
    AWS_EC2_API CreateIpamResourceDiscoveryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateIpamResourceDiscoveryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An IPAM resource discovery.</p>
     */
    inline const IpamResourceDiscovery& GetIpamResourceDiscovery() const { return m_ipamResourceDiscovery; }
    template<typename IpamResourceDiscoveryT = IpamResourceDiscovery>
    void SetIpamResourceDiscovery(IpamResourceDiscoveryT&& value) { m_ipamResourceDiscoveryHasBeenSet = true; m_ipamResourceDiscovery = std::forward<IpamResourceDiscoveryT>(value); }
    template<typename IpamResourceDiscoveryT = IpamResourceDiscovery>
    CreateIpamResourceDiscoveryResponse& WithIpamResourceDiscovery(IpamResourceDiscoveryT&& value) { SetIpamResourceDiscovery(std::forward<IpamResourceDiscoveryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateIpamResourceDiscoveryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IpamResourceDiscovery m_ipamResourceDiscovery;
    bool m_ipamResourceDiscoveryHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
