/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/network-firewall/model/PortRange.h>
#include <aws/network-firewall/model/TCPFlagField.h>
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
   * <p>Criteria for Network Firewall to use to inspect an individual packet in
   * stateless rule inspection. Each match attributes set can include one or more
   * items such as IP address, CIDR range, port number, protocol, and TCP flags.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/MatchAttributes">AWS
   * API Reference</a></p>
   */
  class MatchAttributes
  {
  public:
    AWS_NETWORKFIREWALL_API MatchAttributes();
    AWS_NETWORKFIREWALL_API MatchAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API MatchAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline const Aws::Vector<Address>& GetSources() const{ return m_sources; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline void SetSources(const Aws::Vector<Address>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline void SetSources(Aws::Vector<Address>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline MatchAttributes& WithSources(const Aws::Vector<Address>& value) { SetSources(value); return *this;}

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline MatchAttributes& WithSources(Aws::Vector<Address>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline MatchAttributes& AddSources(const Address& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline MatchAttributes& AddSources(Address&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline const Aws::Vector<Address>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline void SetDestinations(const Aws::Vector<Address>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline void SetDestinations(Aws::Vector<Address>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline MatchAttributes& WithDestinations(const Aws::Vector<Address>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline MatchAttributes& WithDestinations(Aws::Vector<Address>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline MatchAttributes& AddDestinations(const Address& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline MatchAttributes& AddDestinations(Address&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePorts() const{ return m_sourcePorts; }

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline void SetSourcePorts(const Aws::Vector<PortRange>& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = value; }

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline void SetSourcePorts(Aws::Vector<PortRange>&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::move(value); }

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& WithSourcePorts(const Aws::Vector<PortRange>& value) { SetSourcePorts(value); return *this;}

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& WithSourcePorts(Aws::Vector<PortRange>&& value) { SetSourcePorts(std::move(value)); return *this;}

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& AddSourcePorts(const PortRange& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }

    /**
     * <p>The source ports to inspect for. If not specified, this matches with any
     * source port. This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     * <p>You can specify individual ports, for example <code>1994</code> and you can
     * specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& AddSourcePorts(PortRange&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPorts() const{ return m_destinationPorts; }

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline void SetDestinationPorts(const Aws::Vector<PortRange>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline void SetDestinationPorts(Aws::Vector<PortRange>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& WithDestinationPorts(const Aws::Vector<PortRange>& value) { SetDestinationPorts(value); return *this;}

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& WithDestinationPorts(Aws::Vector<PortRange>&& value) { SetDestinationPorts(std::move(value)); return *this;}

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& AddDestinationPorts(const PortRange& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }

    /**
     * <p>The destination ports to inspect for. If not specified, this matches with any
     * destination port. This setting is only used for protocols 6 (TCP) and 17 (UDP).
     * </p> <p>You can specify individual ports, for example <code>1994</code> and you
     * can specify port ranges, for example <code>1990:1994</code>. </p>
     */
    inline MatchAttributes& AddDestinationPorts(PortRange&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(std::move(value)); return *this; }


    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline const Aws::Vector<int>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline void SetProtocols(const Aws::Vector<int>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline void SetProtocols(Aws::Vector<int>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline MatchAttributes& WithProtocols(const Aws::Vector<int>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline MatchAttributes& WithProtocols(Aws::Vector<int>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols to inspect for, specified using each protocol's assigned
     * internet protocol number (IANA). If not specified, this matches with any
     * protocol. </p>
     */
    inline MatchAttributes& AddProtocols(int value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }


    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline const Aws::Vector<TCPFlagField>& GetTCPFlags() const{ return m_tCPFlags; }

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline bool TCPFlagsHasBeenSet() const { return m_tCPFlagsHasBeenSet; }

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline void SetTCPFlags(const Aws::Vector<TCPFlagField>& value) { m_tCPFlagsHasBeenSet = true; m_tCPFlags = value; }

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline void SetTCPFlags(Aws::Vector<TCPFlagField>&& value) { m_tCPFlagsHasBeenSet = true; m_tCPFlags = std::move(value); }

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline MatchAttributes& WithTCPFlags(const Aws::Vector<TCPFlagField>& value) { SetTCPFlags(value); return *this;}

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline MatchAttributes& WithTCPFlags(Aws::Vector<TCPFlagField>&& value) { SetTCPFlags(std::move(value)); return *this;}

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline MatchAttributes& AddTCPFlags(const TCPFlagField& value) { m_tCPFlagsHasBeenSet = true; m_tCPFlags.push_back(value); return *this; }

    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline MatchAttributes& AddTCPFlags(TCPFlagField&& value) { m_tCPFlagsHasBeenSet = true; m_tCPFlags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Address> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<Address> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<PortRange> m_sourcePorts;
    bool m_sourcePortsHasBeenSet = false;

    Aws::Vector<PortRange> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    Aws::Vector<int> m_protocols;
    bool m_protocolsHasBeenSet = false;

    Aws::Vector<TCPFlagField> m_tCPFlags;
    bool m_tCPFlagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
