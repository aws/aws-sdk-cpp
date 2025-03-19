/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamResourceDiscovery.h>
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
  class DescribeIpamResourceDiscoveriesResponse
  {
  public:
    AWS_EC2_API DescribeIpamResourceDiscoveriesResponse() = default;
    AWS_EC2_API DescribeIpamResourceDiscoveriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamResourceDiscoveriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The resource discoveries.</p>
     */
    inline const Aws::Vector<IpamResourceDiscovery>& GetIpamResourceDiscoveries() const { return m_ipamResourceDiscoveries; }
    template<typename IpamResourceDiscoveriesT = Aws::Vector<IpamResourceDiscovery>>
    void SetIpamResourceDiscoveries(IpamResourceDiscoveriesT&& value) { m_ipamResourceDiscoveriesHasBeenSet = true; m_ipamResourceDiscoveries = std::forward<IpamResourceDiscoveriesT>(value); }
    template<typename IpamResourceDiscoveriesT = Aws::Vector<IpamResourceDiscovery>>
    DescribeIpamResourceDiscoveriesResponse& WithIpamResourceDiscoveries(IpamResourceDiscoveriesT&& value) { SetIpamResourceDiscoveries(std::forward<IpamResourceDiscoveriesT>(value)); return *this;}
    template<typename IpamResourceDiscoveriesT = IpamResourceDiscovery>
    DescribeIpamResourceDiscoveriesResponse& AddIpamResourceDiscoveries(IpamResourceDiscoveriesT&& value) { m_ipamResourceDiscoveriesHasBeenSet = true; m_ipamResourceDiscoveries.emplace_back(std::forward<IpamResourceDiscoveriesT>(value)); return *this; }
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
    DescribeIpamResourceDiscoveriesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeIpamResourceDiscoveriesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamResourceDiscovery> m_ipamResourceDiscoveries;
    bool m_ipamResourceDiscoveriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
