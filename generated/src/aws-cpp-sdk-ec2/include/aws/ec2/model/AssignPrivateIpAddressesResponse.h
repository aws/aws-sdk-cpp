/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AssignedPrivateIpAddress.h>
#include <aws/ec2/model/Ipv4PrefixSpecification.h>
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
  class AssignPrivateIpAddressesResponse
  {
  public:
    AWS_EC2_API AssignPrivateIpAddressesResponse() = default;
    AWS_EC2_API AssignPrivateIpAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssignPrivateIpAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    AssignPrivateIpAddressesResponse& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline const Aws::Vector<AssignedPrivateIpAddress>& GetAssignedPrivateIpAddresses() const { return m_assignedPrivateIpAddresses; }
    template<typename AssignedPrivateIpAddressesT = Aws::Vector<AssignedPrivateIpAddress>>
    void SetAssignedPrivateIpAddresses(AssignedPrivateIpAddressesT&& value) { m_assignedPrivateIpAddressesHasBeenSet = true; m_assignedPrivateIpAddresses = std::forward<AssignedPrivateIpAddressesT>(value); }
    template<typename AssignedPrivateIpAddressesT = Aws::Vector<AssignedPrivateIpAddress>>
    AssignPrivateIpAddressesResponse& WithAssignedPrivateIpAddresses(AssignedPrivateIpAddressesT&& value) { SetAssignedPrivateIpAddresses(std::forward<AssignedPrivateIpAddressesT>(value)); return *this;}
    template<typename AssignedPrivateIpAddressesT = AssignedPrivateIpAddress>
    AssignPrivateIpAddressesResponse& AddAssignedPrivateIpAddresses(AssignedPrivateIpAddressesT&& value) { m_assignedPrivateIpAddressesHasBeenSet = true; m_assignedPrivateIpAddresses.emplace_back(std::forward<AssignedPrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecification>& GetAssignedIpv4Prefixes() const { return m_assignedIpv4Prefixes; }
    template<typename AssignedIpv4PrefixesT = Aws::Vector<Ipv4PrefixSpecification>>
    void SetAssignedIpv4Prefixes(AssignedIpv4PrefixesT&& value) { m_assignedIpv4PrefixesHasBeenSet = true; m_assignedIpv4Prefixes = std::forward<AssignedIpv4PrefixesT>(value); }
    template<typename AssignedIpv4PrefixesT = Aws::Vector<Ipv4PrefixSpecification>>
    AssignPrivateIpAddressesResponse& WithAssignedIpv4Prefixes(AssignedIpv4PrefixesT&& value) { SetAssignedIpv4Prefixes(std::forward<AssignedIpv4PrefixesT>(value)); return *this;}
    template<typename AssignedIpv4PrefixesT = Ipv4PrefixSpecification>
    AssignPrivateIpAddressesResponse& AddAssignedIpv4Prefixes(AssignedIpv4PrefixesT&& value) { m_assignedIpv4PrefixesHasBeenSet = true; m_assignedIpv4Prefixes.emplace_back(std::forward<AssignedIpv4PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssignPrivateIpAddressesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<AssignedPrivateIpAddress> m_assignedPrivateIpAddresses;
    bool m_assignedPrivateIpAddressesHasBeenSet = false;

    Aws::Vector<Ipv4PrefixSpecification> m_assignedIpv4Prefixes;
    bool m_assignedIpv4PrefixesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
