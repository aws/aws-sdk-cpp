/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamPoolCidr.h>
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
  class GetIpamPoolCidrsResponse
  {
  public:
    AWS_EC2_API GetIpamPoolCidrsResponse() = default;
    AWS_EC2_API GetIpamPoolCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamPoolCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline const Aws::Vector<IpamPoolCidr>& GetIpamPoolCidrs() const { return m_ipamPoolCidrs; }
    template<typename IpamPoolCidrsT = Aws::Vector<IpamPoolCidr>>
    void SetIpamPoolCidrs(IpamPoolCidrsT&& value) { m_ipamPoolCidrsHasBeenSet = true; m_ipamPoolCidrs = std::forward<IpamPoolCidrsT>(value); }
    template<typename IpamPoolCidrsT = Aws::Vector<IpamPoolCidr>>
    GetIpamPoolCidrsResponse& WithIpamPoolCidrs(IpamPoolCidrsT&& value) { SetIpamPoolCidrs(std::forward<IpamPoolCidrsT>(value)); return *this;}
    template<typename IpamPoolCidrsT = IpamPoolCidr>
    GetIpamPoolCidrsResponse& AddIpamPoolCidrs(IpamPoolCidrsT&& value) { m_ipamPoolCidrsHasBeenSet = true; m_ipamPoolCidrs.emplace_back(std::forward<IpamPoolCidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIpamPoolCidrsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamPoolCidrsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamPoolCidr> m_ipamPoolCidrs;
    bool m_ipamPoolCidrsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
