/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamResourceCidr.h>
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
  class ModifyIpamResourceCidrResponse
  {
  public:
    AWS_EC2_API ModifyIpamResourceCidrResponse() = default;
    AWS_EC2_API ModifyIpamResourceCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyIpamResourceCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The CIDR of the resource.</p>
     */
    inline const IpamResourceCidr& GetIpamResourceCidr() const { return m_ipamResourceCidr; }
    template<typename IpamResourceCidrT = IpamResourceCidr>
    void SetIpamResourceCidr(IpamResourceCidrT&& value) { m_ipamResourceCidrHasBeenSet = true; m_ipamResourceCidr = std::forward<IpamResourceCidrT>(value); }
    template<typename IpamResourceCidrT = IpamResourceCidr>
    ModifyIpamResourceCidrResponse& WithIpamResourceCidr(IpamResourceCidrT&& value) { SetIpamResourceCidr(std::forward<IpamResourceCidrT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyIpamResourceCidrResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IpamResourceCidr m_ipamResourceCidr;
    bool m_ipamResourceCidrHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
