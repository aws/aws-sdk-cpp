/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/PublicIpv4Pool.h>
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
  class DescribePublicIpv4PoolsResponse
  {
  public:
    AWS_EC2_API DescribePublicIpv4PoolsResponse() = default;
    AWS_EC2_API DescribePublicIpv4PoolsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribePublicIpv4PoolsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the address pools.</p>
     */
    inline const Aws::Vector<PublicIpv4Pool>& GetPublicIpv4Pools() const { return m_publicIpv4Pools; }
    template<typename PublicIpv4PoolsT = Aws::Vector<PublicIpv4Pool>>
    void SetPublicIpv4Pools(PublicIpv4PoolsT&& value) { m_publicIpv4PoolsHasBeenSet = true; m_publicIpv4Pools = std::forward<PublicIpv4PoolsT>(value); }
    template<typename PublicIpv4PoolsT = Aws::Vector<PublicIpv4Pool>>
    DescribePublicIpv4PoolsResponse& WithPublicIpv4Pools(PublicIpv4PoolsT&& value) { SetPublicIpv4Pools(std::forward<PublicIpv4PoolsT>(value)); return *this;}
    template<typename PublicIpv4PoolsT = PublicIpv4Pool>
    DescribePublicIpv4PoolsResponse& AddPublicIpv4Pools(PublicIpv4PoolsT&& value) { m_publicIpv4PoolsHasBeenSet = true; m_publicIpv4Pools.emplace_back(std::forward<PublicIpv4PoolsT>(value)); return *this; }
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
    DescribePublicIpv4PoolsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePublicIpv4PoolsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PublicIpv4Pool> m_publicIpv4Pools;
    bool m_publicIpv4PoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
