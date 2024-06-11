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
    AWS_EC2_API GetIpamDiscoveredPublicAddressesResponse();
    AWS_EC2_API GetIpamDiscoveredPublicAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamDiscoveredPublicAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>IPAM discovered public addresses.</p>
     */
    inline const Aws::Vector<IpamDiscoveredPublicAddress>& GetIpamDiscoveredPublicAddresses() const{ return m_ipamDiscoveredPublicAddresses; }
    inline void SetIpamDiscoveredPublicAddresses(const Aws::Vector<IpamDiscoveredPublicAddress>& value) { m_ipamDiscoveredPublicAddresses = value; }
    inline void SetIpamDiscoveredPublicAddresses(Aws::Vector<IpamDiscoveredPublicAddress>&& value) { m_ipamDiscoveredPublicAddresses = std::move(value); }
    inline GetIpamDiscoveredPublicAddressesResponse& WithIpamDiscoveredPublicAddresses(const Aws::Vector<IpamDiscoveredPublicAddress>& value) { SetIpamDiscoveredPublicAddresses(value); return *this;}
    inline GetIpamDiscoveredPublicAddressesResponse& WithIpamDiscoveredPublicAddresses(Aws::Vector<IpamDiscoveredPublicAddress>&& value) { SetIpamDiscoveredPublicAddresses(std::move(value)); return *this;}
    inline GetIpamDiscoveredPublicAddressesResponse& AddIpamDiscoveredPublicAddresses(const IpamDiscoveredPublicAddress& value) { m_ipamDiscoveredPublicAddresses.push_back(value); return *this; }
    inline GetIpamDiscoveredPublicAddressesResponse& AddIpamDiscoveredPublicAddresses(IpamDiscoveredPublicAddress&& value) { m_ipamDiscoveredPublicAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The oldest successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetOldestSampleTime() const{ return m_oldestSampleTime; }
    inline void SetOldestSampleTime(const Aws::Utils::DateTime& value) { m_oldestSampleTime = value; }
    inline void SetOldestSampleTime(Aws::Utils::DateTime&& value) { m_oldestSampleTime = std::move(value); }
    inline GetIpamDiscoveredPublicAddressesResponse& WithOldestSampleTime(const Aws::Utils::DateTime& value) { SetOldestSampleTime(value); return *this;}
    inline GetIpamDiscoveredPublicAddressesResponse& WithOldestSampleTime(Aws::Utils::DateTime&& value) { SetOldestSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetIpamDiscoveredPublicAddressesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIpamDiscoveredPublicAddressesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIpamDiscoveredPublicAddressesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetIpamDiscoveredPublicAddressesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetIpamDiscoveredPublicAddressesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamDiscoveredPublicAddress> m_ipamDiscoveredPublicAddresses;

    Aws::Utils::DateTime m_oldestSampleTime;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
