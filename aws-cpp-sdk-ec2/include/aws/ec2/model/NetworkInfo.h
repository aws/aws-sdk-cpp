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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EnaSupport.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the networking features of the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInfo">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API NetworkInfo
  {
  public:
    NetworkInfo();
    NetworkInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the network performance.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const{ return m_networkPerformance; }

    /**
     * <p>Describes the network performance.</p>
     */
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }

    /**
     * <p>Describes the network performance.</p>
     */
    inline void SetNetworkPerformance(const Aws::String& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = value; }

    /**
     * <p>Describes the network performance.</p>
     */
    inline void SetNetworkPerformance(Aws::String&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::move(value); }

    /**
     * <p>Describes the network performance.</p>
     */
    inline void SetNetworkPerformance(const char* value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance.assign(value); }

    /**
     * <p>Describes the network performance.</p>
     */
    inline NetworkInfo& WithNetworkPerformance(const Aws::String& value) { SetNetworkPerformance(value); return *this;}

    /**
     * <p>Describes the network performance.</p>
     */
    inline NetworkInfo& WithNetworkPerformance(Aws::String&& value) { SetNetworkPerformance(std::move(value)); return *this;}

    /**
     * <p>Describes the network performance.</p>
     */
    inline NetworkInfo& WithNetworkPerformance(const char* value) { SetNetworkPerformance(value); return *this;}


    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline int GetMaximumNetworkInterfaces() const{ return m_maximumNetworkInterfaces; }

    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline bool MaximumNetworkInterfacesHasBeenSet() const { return m_maximumNetworkInterfacesHasBeenSet; }

    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline void SetMaximumNetworkInterfaces(int value) { m_maximumNetworkInterfacesHasBeenSet = true; m_maximumNetworkInterfaces = value; }

    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline NetworkInfo& WithMaximumNetworkInterfaces(int value) { SetMaximumNetworkInterfaces(value); return *this;}


    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline int GetIpv4AddressesPerInterface() const{ return m_ipv4AddressesPerInterface; }

    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline bool Ipv4AddressesPerInterfaceHasBeenSet() const { return m_ipv4AddressesPerInterfaceHasBeenSet; }

    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline void SetIpv4AddressesPerInterface(int value) { m_ipv4AddressesPerInterfaceHasBeenSet = true; m_ipv4AddressesPerInterface = value; }

    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline NetworkInfo& WithIpv4AddressesPerInterface(int value) { SetIpv4AddressesPerInterface(value); return *this;}


    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline int GetIpv6AddressesPerInterface() const{ return m_ipv6AddressesPerInterface; }

    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline bool Ipv6AddressesPerInterfaceHasBeenSet() const { return m_ipv6AddressesPerInterfaceHasBeenSet; }

    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline void SetIpv6AddressesPerInterface(int value) { m_ipv6AddressesPerInterfaceHasBeenSet = true; m_ipv6AddressesPerInterface = value; }

    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline NetworkInfo& WithIpv6AddressesPerInterface(int value) { SetIpv6AddressesPerInterface(value); return *this;}


    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool GetIpv6Supported() const{ return m_ipv6Supported; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool Ipv6SupportedHasBeenSet() const { return m_ipv6SupportedHasBeenSet; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline void SetIpv6Supported(bool value) { m_ipv6SupportedHasBeenSet = true; m_ipv6Supported = value; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline NetworkInfo& WithIpv6Supported(bool value) { SetIpv6Supported(value); return *this;}


    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline const EnaSupport& GetEnaSupport() const{ return m_enaSupport; }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline void SetEnaSupport(const EnaSupport& value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline void SetEnaSupport(EnaSupport&& value) { m_enaSupportHasBeenSet = true; m_enaSupport = std::move(value); }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline NetworkInfo& WithEnaSupport(const EnaSupport& value) { SetEnaSupport(value); return *this;}

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline NetworkInfo& WithEnaSupport(EnaSupport&& value) { SetEnaSupport(std::move(value)); return *this;}

  private:

    Aws::String m_networkPerformance;
    bool m_networkPerformanceHasBeenSet;

    int m_maximumNetworkInterfaces;
    bool m_maximumNetworkInterfacesHasBeenSet;

    int m_ipv4AddressesPerInterface;
    bool m_ipv4AddressesPerInterfaceHasBeenSet;

    int m_ipv6AddressesPerInterface;
    bool m_ipv6AddressesPerInterfaceHasBeenSet;

    bool m_ipv6Supported;
    bool m_ipv6SupportedHasBeenSet;

    EnaSupport m_enaSupport;
    bool m_enaSupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
