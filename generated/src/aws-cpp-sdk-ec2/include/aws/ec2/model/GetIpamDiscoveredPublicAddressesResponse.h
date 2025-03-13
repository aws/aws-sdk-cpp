/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamDiscoveredPublicAddress.h>
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
  class GetIpamDiscoveredPublicAddressesResponse
  {
  public:
    AWS_EC2_API GetIpamDiscoveredPublicAddressesResponse() = default;
    AWS_EC2_API GetIpamDiscoveredPublicAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamDiscoveredPublicAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>IPAM discovered public addresses.</p>
     */
    inline const Aws::Vector<IpamDiscoveredPublicAddress>& GetIpamDiscoveredPublicAddresses() const { return m_ipamDiscoveredPublicAddresses; }
    template<typename IpamDiscoveredPublicAddressesT = Aws::Vector<IpamDiscoveredPublicAddress>>
    void SetIpamDiscoveredPublicAddresses(IpamDiscoveredPublicAddressesT&& value) { m_ipamDiscoveredPublicAddressesHasBeenSet = true; m_ipamDiscoveredPublicAddresses = std::forward<IpamDiscoveredPublicAddressesT>(value); }
    template<typename IpamDiscoveredPublicAddressesT = Aws::Vector<IpamDiscoveredPublicAddress>>
    GetIpamDiscoveredPublicAddressesResponse& WithIpamDiscoveredPublicAddresses(IpamDiscoveredPublicAddressesT&& value) { SetIpamDiscoveredPublicAddresses(std::forward<IpamDiscoveredPublicAddressesT>(value)); return *this;}
    template<typename IpamDiscoveredPublicAddressesT = IpamDiscoveredPublicAddress>
    GetIpamDiscoveredPublicAddressesResponse& AddIpamDiscoveredPublicAddresses(IpamDiscoveredPublicAddressesT&& value) { m_ipamDiscoveredPublicAddressesHasBeenSet = true; m_ipamDiscoveredPublicAddresses.emplace_back(std::forward<IpamDiscoveredPublicAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The oldest successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetOldestSampleTime() const { return m_oldestSampleTime; }
    template<typename OldestSampleTimeT = Aws::Utils::DateTime>
    void SetOldestSampleTime(OldestSampleTimeT&& value) { m_oldestSampleTimeHasBeenSet = true; m_oldestSampleTime = std::forward<OldestSampleTimeT>(value); }
    template<typename OldestSampleTimeT = Aws::Utils::DateTime>
    GetIpamDiscoveredPublicAddressesResponse& WithOldestSampleTime(OldestSampleTimeT&& value) { SetOldestSampleTime(std::forward<OldestSampleTimeT>(value)); return *this;}
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
    GetIpamDiscoveredPublicAddressesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamDiscoveredPublicAddressesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamDiscoveredPublicAddress> m_ipamDiscoveredPublicAddresses;
    bool m_ipamDiscoveredPublicAddressesHasBeenSet = false;

    Aws::Utils::DateTime m_oldestSampleTime{};
    bool m_oldestSampleTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
