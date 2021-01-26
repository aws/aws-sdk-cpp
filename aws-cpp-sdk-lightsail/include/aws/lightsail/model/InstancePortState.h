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
  class AWS_LIGHTSAIL_API InstancePortState
  {
  public:
    InstancePortState();
    InstancePortState(Aws::Utils::Json::JsonView jsonValue);
    InstancePortState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP type. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP type. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The first port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP type. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP type. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline InstancePortState& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The last port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP code. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP code. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The last port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP code. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port in a range of open ports on an instance.</p> <p>Allowed
     * ports:</p> <ul> <li> <p>TCP and UDP - <code>0</code> to <code>65535</code> </p>
     * </li> <li> <p>ICMP - The ICMP code. For example, specify <code>8</code> as the
     * <code>fromPort</code> (ICMP type), and <code>-1</code> as the
     * <code>toPort</code> (ICMP code), to enable ICMP Ping. For more information, see
     * <a
     * href="https://en.wikipedia.org/wiki/Internet_Control_Message_Protocol#Control_messages">Control
     * Messages</a> on <i>Wikipedia</i>.</p> </li> </ul>
     */
    inline InstancePortState& WithToPort(int value) { SetToPort(value); return *this;}


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
     * <code>toPort</code> parameter.</p> </li> </ul>
     */
    inline const NetworkProtocol& GetProtocol() const{ return m_protocol; }

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
     * <code>toPort</code> parameter.</p> </li> </ul>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

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
     * <code>toPort</code> parameter.</p> </li> </ul>
     */
    inline void SetProtocol(const NetworkProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

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
     * <code>toPort</code> parameter.</p> </li> </ul>
     */
    inline void SetProtocol(NetworkProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

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
     * <code>toPort</code> parameter.</p> </li> </ul>
     */
    inline InstancePortState& WithProtocol(const NetworkProtocol& value) { SetProtocol(value); return *this;}

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
     * <code>toPort</code> parameter.</p> </li> </ul>
     */
    inline InstancePortState& WithProtocol(NetworkProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline const PortState& GetState() const{ return m_state; }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline void SetState(const PortState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline void SetState(PortState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline InstancePortState& WithState(const PortState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>  <p>The port state for Lightsail instances is
     * always <code>open</code>.</p> 
     */
    inline InstancePortState& WithState(PortState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortState& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortState& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortState& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortState& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP address, or range of IP addresses in CIDR notation, that are allowed
     * to connect to an instance through the ports, and the protocol. Lightsail
     * supports IPv4 addresses.</p> <p>For more information about CIDR block notation,
     * see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortState& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }


    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrListAliases() const{ return m_cidrListAliases; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline bool CidrListAliasesHasBeenSet() const { return m_cidrListAliasesHasBeenSet; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline void SetCidrListAliases(const Aws::Vector<Aws::String>& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases = value; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline void SetCidrListAliases(Aws::Vector<Aws::String>&& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases = std::move(value); }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortState& WithCidrListAliases(const Aws::Vector<Aws::String>& value) { SetCidrListAliases(value); return *this;}

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortState& WithCidrListAliases(Aws::Vector<Aws::String>&& value) { SetCidrListAliases(std::move(value)); return *this;}

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortState& AddCidrListAliases(const Aws::String& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.push_back(value); return *this; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortState& AddCidrListAliases(Aws::String&& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.push_back(std::move(value)); return *this; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortState& AddCidrListAliases(const char* value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.push_back(value); return *this; }

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;

    NetworkProtocol m_protocol;
    bool m_protocolHasBeenSet;

    PortState m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet;

    Aws::Vector<Aws::String> m_cidrListAliases;
    bool m_cidrListAliasesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
