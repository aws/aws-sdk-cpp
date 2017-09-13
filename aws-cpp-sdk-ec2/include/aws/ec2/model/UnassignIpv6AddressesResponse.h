/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API UnassignIpv6AddressesResponse
  {
  public:
    UnassignIpv6AddressesResponse();
    UnassignIpv6AddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UnassignIpv6AddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline UnassignIpv6AddressesResponse& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnassignedIpv6Addresses() const{ return m_unassignedIpv6Addresses; }

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline void SetUnassignedIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_unassignedIpv6Addresses = value; }

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline void SetUnassignedIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_unassignedIpv6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& WithUnassignedIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetUnassignedIpv6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& WithUnassignedIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetUnassignedIpv6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& AddUnassignedIpv6Addresses(const Aws::String& value) { m_unassignedIpv6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& AddUnassignedIpv6Addresses(Aws::String&& value) { m_unassignedIpv6Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv6 addresses that have been unassigned from the network interface.</p>
     */
    inline UnassignIpv6AddressesResponse& AddUnassignedIpv6Addresses(const char* value) { m_unassignedIpv6Addresses.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UnassignIpv6AddressesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UnassignIpv6AddressesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInterfaceId;

    Aws::Vector<Aws::String> m_unassignedIpv6Addresses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
