/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClassicLinkDnsSupport.h>
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
  class DescribeVpcClassicLinkDnsSupportResponse
  {
  public:
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse() = default;
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcClassicLinkDnsSupportResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ClassicLink DNS support status of the VPCs.</p>
     */
    inline const Aws::Vector<ClassicLinkDnsSupport>& GetVpcs() const { return m_vpcs; }
    template<typename VpcsT = Aws::Vector<ClassicLinkDnsSupport>>
    void SetVpcs(VpcsT&& value) { m_vpcsHasBeenSet = true; m_vpcs = std::forward<VpcsT>(value); }
    template<typename VpcsT = Aws::Vector<ClassicLinkDnsSupport>>
    DescribeVpcClassicLinkDnsSupportResponse& WithVpcs(VpcsT&& value) { SetVpcs(std::forward<VpcsT>(value)); return *this;}
    template<typename VpcsT = ClassicLinkDnsSupport>
    DescribeVpcClassicLinkDnsSupportResponse& AddVpcs(VpcsT&& value) { m_vpcsHasBeenSet = true; m_vpcs.emplace_back(std::forward<VpcsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcClassicLinkDnsSupportResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ClassicLinkDnsSupport> m_vpcs;
    bool m_vpcsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
