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
    AWS_EC2_API AssignIpv6AddressesResponse();
    AWS_EC2_API AssignIpv6AddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssignIpv6AddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssignedIpv6Addresses() const{ return m_assignedIpv6Addresses; }

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline void SetAssignedIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_assignedIpv6Addresses = value; }

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline void SetAssignedIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_assignedIpv6Addresses = std::move(value); }

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline AssignIpv6AddressesResponse& WithAssignedIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetAssignedIpv6Addresses(value); return *this;}

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline AssignIpv6AddressesResponse& WithAssignedIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetAssignedIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline AssignIpv6AddressesResponse& AddAssignedIpv6Addresses(const Aws::String& value) { m_assignedIpv6Addresses.push_back(value); return *this; }

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline AssignIpv6AddressesResponse& AddAssignedIpv6Addresses(Aws::String&& value) { m_assignedIpv6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The new IPv6 addresses assigned to the network interface. Existing IPv6
     * addresses that were assigned to the network interface before the request are not
     * included.</p>
     */
    inline AssignIpv6AddressesResponse& AddAssignedIpv6Addresses(const char* value) { m_assignedIpv6Addresses.push_back(value); return *this; }


    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssignedIpv6Prefixes() const{ return m_assignedIpv6Prefixes; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline void SetAssignedIpv6Prefixes(const Aws::Vector<Aws::String>& value) { m_assignedIpv6Prefixes = value; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline void SetAssignedIpv6Prefixes(Aws::Vector<Aws::String>&& value) { m_assignedIpv6Prefixes = std::move(value); }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& WithAssignedIpv6Prefixes(const Aws::Vector<Aws::String>& value) { SetAssignedIpv6Prefixes(value); return *this;}

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& WithAssignedIpv6Prefixes(Aws::Vector<Aws::String>&& value) { SetAssignedIpv6Prefixes(std::move(value)); return *this;}

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& AddAssignedIpv6Prefixes(const Aws::String& value) { m_assignedIpv6Prefixes.push_back(value); return *this; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& AddAssignedIpv6Prefixes(Aws::String&& value) { m_assignedIpv6Prefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv6 prefixes that are assigned to the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& AddAssignedIpv6Prefixes(const char* value) { m_assignedIpv6Prefixes.push_back(value); return *this; }


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
    inline AssignIpv6AddressesResponse& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignIpv6AddressesResponse& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssignIpv6AddressesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssignIpv6AddressesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_assignedIpv6Addresses;

    Aws::Vector<Aws::String> m_assignedIpv6Prefixes;

    Aws::String m_networkInterfaceId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
