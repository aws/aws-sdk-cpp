/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Protocol.h>
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
   * <p>Describes a packet header statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PacketHeaderStatementRequest">AWS
   * API Reference</a></p>
   */
  class PacketHeaderStatementRequest
  {
  public:
    AWS_EC2_API PacketHeaderStatementRequest() = default;
    AWS_EC2_API PacketHeaderStatementRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PacketHeaderStatementRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAddresses() const { return m_sourceAddresses; }
    inline bool SourceAddressesHasBeenSet() const { return m_sourceAddressesHasBeenSet; }
    template<typename SourceAddressesT = Aws::Vector<Aws::String>>
    void SetSourceAddresses(SourceAddressesT&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses = std::forward<SourceAddressesT>(value); }
    template<typename SourceAddressesT = Aws::Vector<Aws::String>>
    PacketHeaderStatementRequest& WithSourceAddresses(SourceAddressesT&& value) { SetSourceAddresses(std::forward<SourceAddressesT>(value)); return *this;}
    template<typename SourceAddressesT = Aws::String>
    PacketHeaderStatementRequest& AddSourceAddresses(SourceAddressesT&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.emplace_back(std::forward<SourceAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const { return m_destinationAddresses; }
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }
    template<typename DestinationAddressesT = Aws::Vector<Aws::String>>
    void SetDestinationAddresses(DestinationAddressesT&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::forward<DestinationAddressesT>(value); }
    template<typename DestinationAddressesT = Aws::Vector<Aws::String>>
    PacketHeaderStatementRequest& WithDestinationAddresses(DestinationAddressesT&& value) { SetDestinationAddresses(std::forward<DestinationAddressesT>(value)); return *this;}
    template<typename DestinationAddressesT = Aws::String>
    PacketHeaderStatementRequest& AddDestinationAddresses(DestinationAddressesT&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.emplace_back(std::forward<DestinationAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source ports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourcePorts() const { return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    template<typename SourcePortsT = Aws::Vector<Aws::String>>
    void SetSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::forward<SourcePortsT>(value); }
    template<typename SourcePortsT = Aws::Vector<Aws::String>>
    PacketHeaderStatementRequest& WithSourcePorts(SourcePortsT&& value) { SetSourcePorts(std::forward<SourcePortsT>(value)); return *this;}
    template<typename SourcePortsT = Aws::String>
    PacketHeaderStatementRequest& AddSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.emplace_back(std::forward<SourcePortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination ports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPorts() const { return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    template<typename DestinationPortsT = Aws::Vector<Aws::String>>
    void SetDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::forward<DestinationPortsT>(value); }
    template<typename DestinationPortsT = Aws::Vector<Aws::String>>
    PacketHeaderStatementRequest& WithDestinationPorts(DestinationPortsT&& value) { SetDestinationPorts(std::forward<DestinationPortsT>(value)); return *this;}
    template<typename DestinationPortsT = Aws::String>
    PacketHeaderStatementRequest& AddDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.emplace_back(std::forward<DestinationPortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source prefix lists.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourcePrefixLists() const { return m_sourcePrefixLists; }
    inline bool SourcePrefixListsHasBeenSet() const { return m_sourcePrefixListsHasBeenSet; }
    template<typename SourcePrefixListsT = Aws::Vector<Aws::String>>
    void SetSourcePrefixLists(SourcePrefixListsT&& value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists = std::forward<SourcePrefixListsT>(value); }
    template<typename SourcePrefixListsT = Aws::Vector<Aws::String>>
    PacketHeaderStatementRequest& WithSourcePrefixLists(SourcePrefixListsT&& value) { SetSourcePrefixLists(std::forward<SourcePrefixListsT>(value)); return *this;}
    template<typename SourcePrefixListsT = Aws::String>
    PacketHeaderStatementRequest& AddSourcePrefixLists(SourcePrefixListsT&& value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists.emplace_back(std::forward<SourcePrefixListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination prefix lists.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPrefixLists() const { return m_destinationPrefixLists; }
    inline bool DestinationPrefixListsHasBeenSet() const { return m_destinationPrefixListsHasBeenSet; }
    template<typename DestinationPrefixListsT = Aws::Vector<Aws::String>>
    void SetDestinationPrefixLists(DestinationPrefixListsT&& value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists = std::forward<DestinationPrefixListsT>(value); }
    template<typename DestinationPrefixListsT = Aws::Vector<Aws::String>>
    PacketHeaderStatementRequest& WithDestinationPrefixLists(DestinationPrefixListsT&& value) { SetDestinationPrefixLists(std::forward<DestinationPrefixListsT>(value)); return *this;}
    template<typename DestinationPrefixListsT = Aws::String>
    PacketHeaderStatementRequest& AddDestinationPrefixLists(DestinationPrefixListsT&& value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists.emplace_back(std::forward<DestinationPrefixListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    PacketHeaderStatementRequest& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline PacketHeaderStatementRequest& AddProtocols(Protocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_sourceAddresses;
    bool m_sourceAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationAddresses;
    bool m_destinationAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourcePorts;
    bool m_sourcePortsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourcePrefixLists;
    bool m_sourcePrefixListsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPrefixLists;
    bool m_destinationPrefixListsHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
