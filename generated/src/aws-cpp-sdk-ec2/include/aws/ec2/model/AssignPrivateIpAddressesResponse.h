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
    AWS_EC2_API AssignPrivateIpAddressesResponse();
    AWS_EC2_API AssignPrivateIpAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssignPrivateIpAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline const Aws::Vector<AssignedPrivateIpAddress>& GetAssignedPrivateIpAddresses() const{ return m_assignedPrivateIpAddresses; }

    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline void SetAssignedPrivateIpAddresses(const Aws::Vector<AssignedPrivateIpAddress>& value) { m_assignedPrivateIpAddresses = value; }

    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline void SetAssignedPrivateIpAddresses(Aws::Vector<AssignedPrivateIpAddress>&& value) { m_assignedPrivateIpAddresses = std::move(value); }

    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithAssignedPrivateIpAddresses(const Aws::Vector<AssignedPrivateIpAddress>& value) { SetAssignedPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithAssignedPrivateIpAddresses(Aws::Vector<AssignedPrivateIpAddress>&& value) { SetAssignedPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& AddAssignedPrivateIpAddresses(const AssignedPrivateIpAddress& value) { m_assignedPrivateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IP addresses assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& AddAssignedPrivateIpAddresses(AssignedPrivateIpAddress&& value) { m_assignedPrivateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecification>& GetAssignedIpv4Prefixes() const{ return m_assignedIpv4Prefixes; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline void SetAssignedIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecification>& value) { m_assignedIpv4Prefixes = value; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline void SetAssignedIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecification>&& value) { m_assignedIpv4Prefixes = std::move(value); }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithAssignedIpv4Prefixes(const Aws::Vector<Ipv4PrefixSpecification>& value) { SetAssignedIpv4Prefixes(value); return *this;}

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& WithAssignedIpv4Prefixes(Aws::Vector<Ipv4PrefixSpecification>&& value) { SetAssignedIpv4Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& AddAssignedIpv4Prefixes(const Ipv4PrefixSpecification& value) { m_assignedIpv4Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv4 prefixes that are assigned to the network interface.</p>
     */
    inline AssignPrivateIpAddressesResponse& AddAssignedIpv4Prefixes(Ipv4PrefixSpecification&& value) { m_assignedIpv4Prefixes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssignPrivateIpAddressesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssignPrivateIpAddressesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInterfaceId;

    Aws::Vector<AssignedPrivateIpAddress> m_assignedPrivateIpAddresses;

    Aws::Vector<Ipv4PrefixSpecification> m_assignedIpv4Prefixes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
