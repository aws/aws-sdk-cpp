/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class AssignIpv6AddressesResponse
  {
  public:
    AWS_EC2_API AssignIpv6AddressesResponse() = default;
    AWS_EC2_API AssignIpv6AddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssignIpv6AddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssignedIpv6Addresses() const { return m_assignedIpv6Addresses; }
    template<typename AssignedIpv6AddressesT = Aws::Vector<Aws::String>>
    void SetAssignedIpv6Addresses(AssignedIpv6AddressesT&& value) { m_assignedIpv6AddressesHasBeenSet = true; m_assignedIpv6Addresses = std::forward<AssignedIpv6AddressesT>(value); }
    template<typename AssignedIpv6AddressesT = Aws::Vector<Aws::String>>
    AssignIpv6AddressesResponse& WithAssignedIpv6Addresses(AssignedIpv6AddressesT&& value) { SetAssignedIpv6Addresses(std::forward<AssignedIpv6AddressesT>(value)); return *this;}
    template<typename AssignedIpv6AddressesT = Aws::String>
    AssignIpv6AddressesResponse& AddAssignedIpv6Addresses(AssignedIpv6AddressesT&& value) { m_assignedIpv6AddressesHasBeenSet = true; m_assignedIpv6Addresses.emplace_back(std::forward<AssignedIpv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssignedIpv6Prefixes() const { return m_assignedIpv6Prefixes; }
    template<typename AssignedIpv6PrefixesT = Aws::Vector<Aws::String>>
    void SetAssignedIpv6Prefixes(AssignedIpv6PrefixesT&& value) { m_assignedIpv6PrefixesHasBeenSet = true; m_assignedIpv6Prefixes = std::forward<AssignedIpv6PrefixesT>(value); }
    template<typename AssignedIpv6PrefixesT = Aws::Vector<Aws::String>>
    AssignIpv6AddressesResponse& WithAssignedIpv6Prefixes(AssignedIpv6PrefixesT&& value) { SetAssignedIpv6Prefixes(std::forward<AssignedIpv6PrefixesT>(value)); return *this;}
    template<typename AssignedIpv6PrefixesT = Aws::String>
    AssignIpv6AddressesResponse& AddAssignedIpv6Prefixes(AssignedIpv6PrefixesT&& value) { m_assignedIpv6PrefixesHasBeenSet = true; m_assignedIpv6Prefixes.emplace_back(std::forward<AssignedIpv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    AssignIpv6AddressesResponse& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssignIpv6AddressesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_assignedIpv6Addresses;
    bool m_assignedIpv6AddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_assignedIpv6Prefixes;
    bool m_assignedIpv6PrefixesHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
