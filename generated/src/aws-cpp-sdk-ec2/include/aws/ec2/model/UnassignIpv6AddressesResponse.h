/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UnassignIpv6AddressesResponse
  {
  public:
    AWS_EC2_API UnassignIpv6AddressesResponse() = default;
    AWS_EC2_API UnassignIpv6AddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API UnassignIpv6AddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    UnassignIpv6AddressesResponse& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnassignedIpv6Addresses() const { return m_unassignedIpv6Addresses; }
    template<typename UnassignedIpv6AddressesT = Aws::Vector<Aws::String>>
    void SetUnassignedIpv6Addresses(UnassignedIpv6AddressesT&& value) { m_unassignedIpv6AddressesHasBeenSet = true; m_unassignedIpv6Addresses = std::forward<UnassignedIpv6AddressesT>(value); }
    template<typename UnassignedIpv6AddressesT = Aws::Vector<Aws::String>>
    UnassignIpv6AddressesResponse& WithUnassignedIpv6Addresses(UnassignedIpv6AddressesT&& value) { SetUnassignedIpv6Addresses(std::forward<UnassignedIpv6AddressesT>(value)); return *this;}
    template<typename UnassignedIpv6AddressesT = Aws::String>
    UnassignIpv6AddressesResponse& AddUnassignedIpv6Addresses(UnassignedIpv6AddressesT&& value) { m_unassignedIpv6AddressesHasBeenSet = true; m_unassignedIpv6Addresses.emplace_back(std::forward<UnassignedIpv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 prefixes that have been unassigned from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnassignedIpv6Prefixes() const { return m_unassignedIpv6Prefixes; }
    template<typename UnassignedIpv6PrefixesT = Aws::Vector<Aws::String>>
    void SetUnassignedIpv6Prefixes(UnassignedIpv6PrefixesT&& value) { m_unassignedIpv6PrefixesHasBeenSet = true; m_unassignedIpv6Prefixes = std::forward<UnassignedIpv6PrefixesT>(value); }
    template<typename UnassignedIpv6PrefixesT = Aws::Vector<Aws::String>>
    UnassignIpv6AddressesResponse& WithUnassignedIpv6Prefixes(UnassignedIpv6PrefixesT&& value) { SetUnassignedIpv6Prefixes(std::forward<UnassignedIpv6PrefixesT>(value)); return *this;}
    template<typename UnassignedIpv6PrefixesT = Aws::String>
    UnassignIpv6AddressesResponse& AddUnassignedIpv6Prefixes(UnassignedIpv6PrefixesT&& value) { m_unassignedIpv6PrefixesHasBeenSet = true; m_unassignedIpv6Prefixes.emplace_back(std::forward<UnassignedIpv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UnassignIpv6AddressesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_unassignedIpv6Addresses;
    bool m_unassignedIpv6AddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_unassignedIpv6Prefixes;
    bool m_unassignedIpv6PrefixesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
