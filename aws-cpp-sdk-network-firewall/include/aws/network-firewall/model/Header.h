/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/StatefulRuleProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/StatefulRuleDirection.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The basic rule criteria for Network Firewall to use to inspect packet headers
   * in stateful traffic flow inspection. Traffic flows that match the criteria are a
   * match for the corresponding <a>StatefulRule</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Header">AWS
   * API Reference</a></p>
   */
  class Header
  {
  public:
    AWS_NETWORKFIREWALL_API Header();
    AWS_NETWORKFIREWALL_API Header(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Header& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline const StatefulRuleProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline void SetProtocol(const StatefulRuleProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline void SetProtocol(StatefulRuleProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline Header& WithProtocol(const StatefulRuleProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline Header& WithProtocol(StatefulRuleProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline Header& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline Header& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure Network Firewall to inspect for the IP address
     * 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for IP addresses from 192.0.2.0 to 192.0.2.255,
     * specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more information about
     * CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline Header& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline const Aws::String& GetSourcePort() const{ return m_sourcePort; }

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline void SetSourcePort(const Aws::String& value) { m_sourcePortHasBeenSet = true; m_sourcePort = value; }

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline void SetSourcePort(Aws::String&& value) { m_sourcePortHasBeenSet = true; m_sourcePort = std::move(value); }

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline void SetSourcePort(const char* value) { m_sourcePortHasBeenSet = true; m_sourcePort.assign(value); }

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline Header& WithSourcePort(const Aws::String& value) { SetSourcePort(value); return *this;}

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline Header& WithSourcePort(Aws::String&& value) { SetSourcePort(std::move(value)); return *this;}

    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline Header& WithSourcePort(const char* value) { SetSourcePort(value); return *this;}


    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline const StatefulRuleDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline void SetDirection(const StatefulRuleDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline void SetDirection(StatefulRuleDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline Header& WithDirection(const StatefulRuleDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline Header& WithDirection(StatefulRuleDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline Header& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline Header& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> </ul> <p>For more
     * information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline Header& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline const Aws::String& GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline void SetDestinationPort(const Aws::String& value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline void SetDestinationPort(Aws::String&& value) { m_destinationPortHasBeenSet = true; m_destinationPort = std::move(value); }

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline void SetDestinationPort(const char* value) { m_destinationPortHasBeenSet = true; m_destinationPort.assign(value); }

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline Header& WithDestinationPort(const Aws::String& value) { SetDestinationPort(value); return *this;}

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline Header& WithDestinationPort(Aws::String&& value) { SetDestinationPort(std::move(value)); return *this;}

    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>. </p>
     */
    inline Header& WithDestinationPort(const char* value) { SetDestinationPort(value); return *this;}

  private:

    StatefulRuleProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourcePort;
    bool m_sourcePortHasBeenSet = false;

    StatefulRuleDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationPort;
    bool m_destinationPortHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
