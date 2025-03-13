/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamPoolAllocation.h>
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
  class GetIpamPoolAllocationsResponse
  {
  public:
    AWS_EC2_API GetIpamPoolAllocationsResponse() = default;
    AWS_EC2_API GetIpamPoolAllocationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamPoolAllocationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline const Aws::Vector<IpamPoolAllocation>& GetIpamPoolAllocations() const { return m_ipamPoolAllocations; }
    template<typename IpamPoolAllocationsT = Aws::Vector<IpamPoolAllocation>>
    void SetIpamPoolAllocations(IpamPoolAllocationsT&& value) { m_ipamPoolAllocationsHasBeenSet = true; m_ipamPoolAllocations = std::forward<IpamPoolAllocationsT>(value); }
    template<typename IpamPoolAllocationsT = Aws::Vector<IpamPoolAllocation>>
    GetIpamPoolAllocationsResponse& WithIpamPoolAllocations(IpamPoolAllocationsT&& value) { SetIpamPoolAllocations(std::forward<IpamPoolAllocationsT>(value)); return *this;}
    template<typename IpamPoolAllocationsT = IpamPoolAllocation>
    GetIpamPoolAllocationsResponse& AddIpamPoolAllocations(IpamPoolAllocationsT&& value) { m_ipamPoolAllocationsHasBeenSet = true; m_ipamPoolAllocations.emplace_back(std::forward<IpamPoolAllocationsT>(value)); return *this; }
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
    GetIpamPoolAllocationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamPoolAllocationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamPoolAllocation> m_ipamPoolAllocations;
    bool m_ipamPoolAllocationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
