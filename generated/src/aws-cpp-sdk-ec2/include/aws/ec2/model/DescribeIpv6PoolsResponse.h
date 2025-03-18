/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Ipv6Pool.h>
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
  class DescribeIpv6PoolsResponse
  {
  public:
    AWS_EC2_API DescribeIpv6PoolsResponse() = default;
    AWS_EC2_API DescribeIpv6PoolsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpv6PoolsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline const Aws::Vector<Ipv6Pool>& GetIpv6Pools() const { return m_ipv6Pools; }
    template<typename Ipv6PoolsT = Aws::Vector<Ipv6Pool>>
    void SetIpv6Pools(Ipv6PoolsT&& value) { m_ipv6PoolsHasBeenSet = true; m_ipv6Pools = std::forward<Ipv6PoolsT>(value); }
    template<typename Ipv6PoolsT = Aws::Vector<Ipv6Pool>>
    DescribeIpv6PoolsResponse& WithIpv6Pools(Ipv6PoolsT&& value) { SetIpv6Pools(std::forward<Ipv6PoolsT>(value)); return *this;}
    template<typename Ipv6PoolsT = Ipv6Pool>
    DescribeIpv6PoolsResponse& AddIpv6Pools(Ipv6PoolsT&& value) { m_ipv6PoolsHasBeenSet = true; m_ipv6Pools.emplace_back(std::forward<Ipv6PoolsT>(value)); return *this; }
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
    DescribeIpv6PoolsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeIpv6PoolsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Ipv6Pool> m_ipv6Pools;
    bool m_ipv6PoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
