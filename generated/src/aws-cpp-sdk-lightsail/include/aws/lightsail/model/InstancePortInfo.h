/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/NetworkProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/PortAccessType.h>
#include <aws/lightsail/model/AccessDirection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes information about ports for an Amazon Lightsail
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstancePortInfo">AWS
   * API Reference</a></p>
   */
  class InstancePortInfo
  {
  public:
    AWS_LIGHTSAIL_API InstancePortInfo();
    AWS_LIGHTSAIL_API InstancePortInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstancePortInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline int GetFromPort() const{ return m_fromPort; }

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
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

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
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

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
    inline InstancePortInfo& WithFromPort(int value) { SetFromPort(value); return *this;}


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
    inline int GetToPort() const{ return m_toPort; }

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
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

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
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

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
    inline InstancePortInfo& WithToPort(int value) { SetToPort(value); return *this;}


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
    inline InstancePortInfo& WithProtocol(const NetworkProtocol& value) { SetProtocol(value); return *this;}

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
    inline InstancePortInfo& WithProtocol(NetworkProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline const Aws::String& GetAccessFrom() const{ return m_accessFrom; }

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline bool AccessFromHasBeenSet() const { return m_accessFromHasBeenSet; }

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline void SetAccessFrom(const Aws::String& value) { m_accessFromHasBeenSet = true; m_accessFrom = value; }

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline void SetAccessFrom(Aws::String&& value) { m_accessFromHasBeenSet = true; m_accessFrom = std::move(value); }

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline void SetAccessFrom(const char* value) { m_accessFromHasBeenSet = true; m_accessFrom.assign(value); }

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline InstancePortInfo& WithAccessFrom(const Aws::String& value) { SetAccessFrom(value); return *this;}

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline InstancePortInfo& WithAccessFrom(Aws::String&& value) { SetAccessFrom(std::move(value)); return *this;}

    /**
     * <p>The location from which access is allowed. For example, <code>Anywhere
     * (0.0.0.0/0)</code>, or <code>Custom</code> if a specific IP address or range of
     * IP addresses is allowed.</p>
     */
    inline InstancePortInfo& WithAccessFrom(const char* value) { SetAccessFrom(value); return *this;}


    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline const PortAccessType& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline void SetAccessType(const PortAccessType& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline void SetAccessType(PortAccessType&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline InstancePortInfo& WithAccessType(const PortAccessType& value) { SetAccessType(value); return *this;}

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline InstancePortInfo& WithAccessType(PortAccessType&& value) { SetAccessType(std::move(value)); return *this;}


    /**
     * <p>The common name of the port information.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }

    /**
     * <p>The common name of the port information.</p>
     */
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }

    /**
     * <p>The common name of the port information.</p>
     */
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }

    /**
     * <p>The common name of the port information.</p>
     */
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }

    /**
     * <p>The common name of the port information.</p>
     */
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }

    /**
     * <p>The common name of the port information.</p>
     */
    inline InstancePortInfo& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}

    /**
     * <p>The common name of the port information.</p>
     */
    inline InstancePortInfo& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}

    /**
     * <p>The common name of the port information.</p>
     */
    inline InstancePortInfo& WithCommonName(const char* value) { SetCommonName(value); return *this;}


    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     *  <p>Lightsail currently supports only <code>inbound</code> access
     * direction.</p> 
     */
    inline const AccessDirection& GetAccessDirection() const{ return m_accessDirection; }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     *  <p>Lightsail currently supports only <code>inbound</code> access
     * direction.</p> 
     */
    inline bool AccessDirectionHasBeenSet() const { return m_accessDirectionHasBeenSet; }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     *  <p>Lightsail currently supports only <code>inbound</code> access
     * direction.</p> 
     */
    inline void SetAccessDirection(const AccessDirection& value) { m_accessDirectionHasBeenSet = true; m_accessDirection = value; }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     *  <p>Lightsail currently supports only <code>inbound</code> access
     * direction.</p> 
     */
    inline void SetAccessDirection(AccessDirection&& value) { m_accessDirectionHasBeenSet = true; m_accessDirection = std::move(value); }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     *  <p>Lightsail currently supports only <code>inbound</code> access
     * direction.</p> 
     */
    inline InstancePortInfo& WithAccessDirection(const AccessDirection& value) { SetAccessDirection(value); return *this;}

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     *  <p>Lightsail currently supports only <code>inbound</code> access
     * direction.</p> 
     */
    inline InstancePortInfo& WithAccessDirection(AccessDirection&& value) { SetAccessDirection(std::move(value)); return *this;}


    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortInfo& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortInfo& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortInfo& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortInfo& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv4 address, or range of IPv4 addresses (in CIDR notation) that are
     * allowed to connect to an instance through the ports, and the protocol.</p>
     *  <p>The <code>ipv6Cidrs</code> parameter lists the IPv6 addresses that are
     * allowed to connect to an instance.</p>  <p>For more information about
     * CIDR block notation, see <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_notation">Classless
     * Inter-Domain Routing</a> on <i>Wikipedia</i>.</p>
     */
    inline InstancePortInfo& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetIpv6Cidrs() const{ return m_ipv6Cidrs; }

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
    inline bool Ipv6CidrsHasBeenSet() const { return m_ipv6CidrsHasBeenSet; }

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
    inline void SetIpv6Cidrs(const Aws::Vector<Aws::String>& value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs = value; }

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
    inline void SetIpv6Cidrs(Aws::Vector<Aws::String>&& value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs = std::move(value); }

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
    inline InstancePortInfo& WithIpv6Cidrs(const Aws::Vector<Aws::String>& value) { SetIpv6Cidrs(value); return *this;}

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
    inline InstancePortInfo& WithIpv6Cidrs(Aws::Vector<Aws::String>&& value) { SetIpv6Cidrs(std::move(value)); return *this;}

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
    inline InstancePortInfo& AddIpv6Cidrs(const Aws::String& value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs.push_back(value); return *this; }

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
    inline InstancePortInfo& AddIpv6Cidrs(Aws::String&& value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs.push_back(std::move(value)); return *this; }

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
    inline InstancePortInfo& AddIpv6Cidrs(const char* value) { m_ipv6CidrsHasBeenSet = true; m_ipv6Cidrs.push_back(value); return *this; }


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
    inline InstancePortInfo& WithCidrListAliases(const Aws::Vector<Aws::String>& value) { SetCidrListAliases(value); return *this;}

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortInfo& WithCidrListAliases(Aws::Vector<Aws::String>&& value) { SetCidrListAliases(std::move(value)); return *this;}

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortInfo& AddCidrListAliases(const Aws::String& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.push_back(value); return *this; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortInfo& AddCidrListAliases(Aws::String&& value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.push_back(std::move(value)); return *this; }

    /**
     * <p>An alias that defines access for a preconfigured range of IP addresses.</p>
     * <p>The only alias currently supported is <code>lightsail-connect</code>, which
     * allows IP addresses of the browser-based RDP/SSH client in the Lightsail console
     * to connect to your instance.</p>
     */
    inline InstancePortInfo& AddCidrListAliases(const char* value) { m_cidrListAliasesHasBeenSet = true; m_cidrListAliases.push_back(value); return *this; }

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    NetworkProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_accessFrom;
    bool m_accessFromHasBeenSet = false;

    PortAccessType m_accessType;
    bool m_accessTypeHasBeenSet = false;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet = false;

    AccessDirection m_accessDirection;
    bool m_accessDirectionHasBeenSet = false;

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
