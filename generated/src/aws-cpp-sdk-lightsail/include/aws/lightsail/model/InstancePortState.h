/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/NetworkProtocol.h>
#include <aws/lightsail/model/PortState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes open ports on an instance, the IP addresses allowed to connect to
   * the instance through the ports, and the protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstancePortState">AWS
   * API Reference</a></p>
   */
  class InstancePortState
  {
  public:
    AWS_LIGHTSAIL_API InstancePortState() = default;
    AWS_LIGHTSAIL_API InstancePortState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstancePortState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The first port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP type for IPv4 addresses. For example, specify
     * <code>8</code> as the <code>fromPort</code> (ICMP type), and <code>-1</code> as
     * the <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> <li> <p>ICMPv6 - The ICMP type for
     * IPv6 addresses. For example, specify <code>128</code> as the
     * <code>fromPort</code> (ICMPv6 type), and <code>0</code> as <code>toPort</code>
     * (ICMPv6 code). For more information, see <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol_for_IPv6">Internet
     * Control Message Protocol for IPv6</a>.</p> </li> </ul>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline InstancePortState& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP code for IPv4 addresses. For example, specify
     * <code>8</code> as the <code>fromPort</code> (ICMP type), and <code>-1</code> as
     * the <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> <li> <p>ICMPv6 - The ICMP code for
     * IPv6 addresses. For example, specify <code>128</code> as the
     * <code>fromPort</code> (ICMPv6 type), and <code>0</code> as <code>toPort</code>
     * (ICMPv6 code). For more information, see <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol_for_IPv6">Internet
     * Control Message Protocol for IPv6</a>.</p> </li> </ul>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline InstancePortState& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol name.</p> <p>The name can be one of the following:</p> <ul>
     * <li> <p> <code>tcp</code> - Transmission Control Protocol (TCP) provides
     * reliable, ordered, and error-checked delivery of streamed data between
     * applications running on hosts communicating by an IP network. If you have an
     * application that doesn't require reliable data stream service, use UDP
     * instead.</p> </li> <li> <p> <code>all</code> - All transport layer protocol
     * types. For more general information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * <i>Wikipedia</i>.</p> </li> <li> <p> <code>udp</code> - With User Datagram
     * Protocol (UDP), computer applications can send messages (or datagrams) to other
     * hosts on an Internet Protocol (IP) network. Prior communications are not
     * required to set up transmission channels or data paths. Applications that don't
     * require reliable data stream service can use UDP, which provides a
     * connectionless datagram service that emphasizes reduced latency over
     * reliability. If you do require reliable data stream service, use TCP
     * instead.</p> </li> <li> <p> <code>icmp</code> - Internet Control Message
     * Protocol (ICMP) is used to send error messages and operational information
     * indicating success or failure when communicating with an instance. For example,
     * an error is indicated when an instance could not be reached. When you specify
     * <code>icmp</code> as the <code>protocol</code>, you must specify the ICMP type
     * using the <code>fromPort</code> parameter, and ICMP code using the
     * <code>toPort</code> parameter.</p> </li> <li> <p> <code>icmp6</code> - Internet
     * Control Message Protocol (ICMP) for IPv6. When you specify <code>icmp6</code> as
     * the <code>protocol</code>, you must specify the ICMP type using the
     * <code>fromPort</code> parameter, and ICMP code using the <code>toPort</code>
     * parameter.</p> </li> </ul>
     */
    inline NetworkProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(NetworkProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline InstancePortState& WithProtocol(NetworkProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline PortState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(PortState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InstancePortState& WithState(PortState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    void SetCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::forward<CidrsT>(value); }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    InstancePortState& WithCidrs(CidrsT&& value) { SetCidrs(std::forward<CidrsT>(value)); return *this;}
    template<typename CidrsT = Aws::String>
    InstancePortState& AddCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs.emplace_back(std::forward<CidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 address, or range of IPv6 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol. Only
     * devices with an IPv6 address can connect to an instance through IPv6; otherwise,
     * IPv4 should be used.</p>  <p>The <code>cidrs</code> parameter lists the
     * IPv4 addresses that are allowed to connect to an instance.</p>  <p>For
     * more information about CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Cidrs() const { return m_ipv6Cidrs; }
    inline bool Ipv6CidrsHasBeenSet() const { return m_ipv6CidrsHasBeenSet; }
    template<typename Ipv6CidrsT = Aws::Vector<Aws::String>>
    void SetIpv6Cidrs(Ipv6CidrsT&& value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs = std::forward<Ipv6CidrsT>(value); }
    template<typename Ipv6CidrsT = Aws::Vector<Aws::String>>
    InstancePortState& WithIpv6Cidrs(Ipv6CidrsT&& value) { SetIpv6Cidrs(std::forward<Ipv6CidrsT>(value)); return *this;}
    template<typename Ipv6CidrsT = Aws::String>
    InstancePortState& AddIpv6Cidrs(Ipv6CidrsT&& value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs.emplace_back(std::forward<Ipv6CidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrListAliases() const { return m_cidrListAliases; }
    inline bool CidrListAliasesHasBeenSet() const { return m_cidrListAliasesHasBeenSet; }
    template<typename CidrListAliasesT = Aws::Vector<Aws::String>>
    void SetCidrListAliases(CidrListAliasesT&& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases = std::forward<CidrListAliasesT>(value); }
    template<typename CidrListAliasesT = Aws::Vector<Aws::String>>
    InstancePortState& WithCidrListAliases(CidrListAliasesT&& value) { SetCidrListAliases(std::forward<CidrListAliasesT>(value)); return *this;}
    template<typename CidrListAliasesT = Aws::String>
    InstancePortState& AddCidrListAliases(CidrListAliasesT&& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.emplace_back(std::forward<CidrListAliasesT>(value)); return *this; }
    ///@}
  private:

    int m_fromPort{0};
    bool m_fromPortHasBeenSet = false;

    int m_toPort{0};
    bool m_toPortHasBeenSet = false;

    NetworkProtocol m_protocol{NetworkProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    PortState m_state{PortState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv6Cidrs;
    bool m_ipv6CidrsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrListAliases;
    bool m_cidrListAliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
