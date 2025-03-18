/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamDiscoveredResourceCidr.h>
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
  class GetIpamDiscoveredResourceCidrsResponse
  {
  public:
    AWS_EC2_API GetIpamDiscoveredResourceCidrsResponse() = default;
    AWS_EC2_API GetIpamDiscoveredResourceCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamDiscoveredResourceCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline const Aws::Vector<IpamDiscoveredResourceCidr>& GetIpamDiscoveredResourceCidrs() const { return m_ipamDiscoveredResourceCidrs; }
    template<typename IpamDiscoveredResourceCidrsT = Aws::Vector<IpamDiscoveredResourceCidr>>
    void SetIpamDiscoveredResourceCidrs(IpamDiscoveredResourceCidrsT&& value) { m_ipamDiscoveredResourceCidrsHasBeenSet = true; m_ipamDiscoveredResourceCidrs = std::forward<IpamDiscoveredResourceCidrsT>(value); }
    template<typename IpamDiscoveredResourceCidrsT = Aws::Vector<IpamDiscoveredResourceCidr>>
    GetIpamDiscoveredResourceCidrsResponse& WithIpamDiscoveredResourceCidrs(IpamDiscoveredResourceCidrsT&& value) { SetIpamDiscoveredResourceCidrs(std::forward<IpamDiscoveredResourceCidrsT>(value)); return *this;}
    template<typename IpamDiscoveredResourceCidrsT = IpamDiscoveredResourceCidr>
    GetIpamDiscoveredResourceCidrsResponse& AddIpamDiscoveredResourceCidrs(IpamDiscoveredResourceCidrsT&& value) { m_ipamDiscoveredResourceCidrsHasBeenSet = true; m_ipamDiscoveredResourceCidrs.emplace_back(std::forward<IpamDiscoveredResourceCidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIpamDiscoveredResourceCidrsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamDiscoveredResourceCidrsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamDiscoveredResourceCidr> m_ipamDiscoveredResourceCidrs;
    bool m_ipamDiscoveredResourceCidrsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
