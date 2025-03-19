/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPoolCidr.h>
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
  class ProvisionIpamPoolCidrResponse
  {
  public:
    AWS_EC2_API ProvisionIpamPoolCidrResponse() = default;
    AWS_EC2_API ProvisionIpamPoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ProvisionIpamPoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the provisioned CIDR.</p>
     */
    inline const IpamPoolCidr& GetIpamPoolCidr() const { return m_ipamPoolCidr; }
    template<typename IpamPoolCidrT = IpamPoolCidr>
    void SetIpamPoolCidr(IpamPoolCidrT&& value) { m_ipamPoolCidrHasBeenSet = true; m_ipamPoolCidr = std::forward<IpamPoolCidrT>(value); }
    template<typename IpamPoolCidrT = IpamPoolCidr>
    ProvisionIpamPoolCidrResponse& WithIpamPoolCidr(IpamPoolCidrT&& value) { SetIpamPoolCidr(std::forward<IpamPoolCidrT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ProvisionIpamPoolCidrResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IpamPoolCidr m_ipamPoolCidr;
    bool m_ipamPoolCidrHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
