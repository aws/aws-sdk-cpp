/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcClassicLink.h>
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
  class DescribeVpcClassicLinkResponse
  {
  public:
    AWS_EC2_API DescribeVpcClassicLinkResponse() = default;
    AWS_EC2_API DescribeVpcClassicLinkResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcClassicLinkResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ClassicLink status of the VPCs.</p>
     */
    inline const Aws::Vector<VpcClassicLink>& GetVpcs() const { return m_vpcs; }
    template<typename VpcsT = Aws::Vector<VpcClassicLink>>
    void SetVpcs(VpcsT&& value) { m_vpcsHasBeenSet = true; m_vpcs = std::forward<VpcsT>(value); }
    template<typename VpcsT = Aws::Vector<VpcClassicLink>>
    DescribeVpcClassicLinkResponse& WithVpcs(VpcsT&& value) { SetVpcs(std::forward<VpcsT>(value)); return *this;}
    template<typename VpcsT = VpcClassicLink>
    DescribeVpcClassicLinkResponse& AddVpcs(VpcsT&& value) { m_vpcsHasBeenSet = true; m_vpcs.emplace_back(std::forward<VpcsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcClassicLinkResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcClassicLink> m_vpcs;
    bool m_vpcsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
