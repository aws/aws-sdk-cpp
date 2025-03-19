/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamResourceCidr.h>
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
  class GetIpamResourceCidrsResponse
  {
  public:
    AWS_EC2_API GetIpamResourceCidrsResponse() = default;
    AWS_EC2_API GetIpamResourceCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamResourceCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIpamResourceCidrsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource CIDRs.</p>
     */
    inline const Aws::Vector<IpamResourceCidr>& GetIpamResourceCidrs() const { return m_ipamResourceCidrs; }
    template<typename IpamResourceCidrsT = Aws::Vector<IpamResourceCidr>>
    void SetIpamResourceCidrs(IpamResourceCidrsT&& value) { m_ipamResourceCidrsHasBeenSet = true; m_ipamResourceCidrs = std::forward<IpamResourceCidrsT>(value); }
    template<typename IpamResourceCidrsT = Aws::Vector<IpamResourceCidr>>
    GetIpamResourceCidrsResponse& WithIpamResourceCidrs(IpamResourceCidrsT&& value) { SetIpamResourceCidrs(std::forward<IpamResourceCidrsT>(value)); return *this;}
    template<typename IpamResourceCidrsT = IpamResourceCidr>
    GetIpamResourceCidrsResponse& AddIpamResourceCidrs(IpamResourceCidrsT&& value) { m_ipamResourceCidrsHasBeenSet = true; m_ipamResourceCidrs.emplace_back(std::forward<IpamResourceCidrsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamResourceCidrsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IpamResourceCidr> m_ipamResourceCidrs;
    bool m_ipamResourceCidrsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
