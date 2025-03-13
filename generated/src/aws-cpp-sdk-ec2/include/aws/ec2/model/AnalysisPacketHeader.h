/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PortRange.h>
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
   * <p>Describes a header. Reflects any changes made by a component as traffic
   * passes through. The fields of an inbound header are null except for the first
   * component of a path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisPacketHeader">AWS
   * API Reference</a></p>
   */
  class AnalysisPacketHeader
  {
  public:
    AWS_EC2_API AnalysisPacketHeader() = default;
    AWS_EC2_API AnalysisPacketHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisPacketHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The destination addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const { return m_destinationAddresses; }
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }
    template<typename DestinationAddressesT = Aws::Vector<Aws::String>>
    void SetDestinationAddresses(DestinationAddressesT&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::forward<DestinationAddressesT>(value); }
    template<typename DestinationAddressesT = Aws::Vector<Aws::String>>
    AnalysisPacketHeader& WithDestinationAddresses(DestinationAddressesT&& value) { SetDestinationAddresses(std::forward<DestinationAddressesT>(value)); return *this;}
    template<typename DestinationAddressesT = Aws::String>
    AnalysisPacketHeader& AddDestinationAddresses(DestinationAddressesT&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.emplace_back(std::forward<DestinationAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination port ranges.</p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPortRanges() const { return m_destinationPortRanges; }
    inline bool DestinationPortRangesHasBeenSet() const { return m_destinationPortRangesHasBeenSet; }
    template<typename DestinationPortRangesT = Aws::Vector<PortRange>>
    void SetDestinationPortRanges(DestinationPortRangesT&& value) { m_destinationPortRangesHasBeenSet = true; m_destinationPortRanges = std::forward<DestinationPortRangesT>(value); }
    template<typename DestinationPortRangesT = Aws::Vector<PortRange>>
    AnalysisPacketHeader& WithDestinationPortRanges(DestinationPortRangesT&& value) { SetDestinationPortRanges(std::forward<DestinationPortRangesT>(value)); return *this;}
    template<typename DestinationPortRangesT = PortRange>
    AnalysisPacketHeader& AddDestinationPortRanges(DestinationPortRangesT&& value) { m_destinationPortRangesHasBeenSet = true; m_destinationPortRanges.emplace_back(std::forward<DestinationPortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    AnalysisPacketHeader& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAddresses() const { return m_sourceAddresses; }
    inline bool SourceAddressesHasBeenSet() const { return m_sourceAddressesHasBeenSet; }
    template<typename SourceAddressesT = Aws::Vector<Aws::String>>
    void SetSourceAddresses(SourceAddressesT&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses = std::forward<SourceAddressesT>(value); }
    template<typename SourceAddressesT = Aws::Vector<Aws::String>>
    AnalysisPacketHeader& WithSourceAddresses(SourceAddressesT&& value) { SetSourceAddresses(std::forward<SourceAddressesT>(value)); return *this;}
    template<typename SourceAddressesT = Aws::String>
    AnalysisPacketHeader& AddSourceAddresses(SourceAddressesT&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.emplace_back(std::forward<SourceAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source port ranges.</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePortRanges() const { return m_sourcePortRanges; }
    inline bool SourcePortRangesHasBeenSet() const { return m_sourcePortRangesHasBeenSet; }
    template<typename SourcePortRangesT = Aws::Vector<PortRange>>
    void SetSourcePortRanges(SourcePortRangesT&& value) { m_sourcePortRangesHasBeenSet = true; m_sourcePortRanges = std::forward<SourcePortRangesT>(value); }
    template<typename SourcePortRangesT = Aws::Vector<PortRange>>
    AnalysisPacketHeader& WithSourcePortRanges(SourcePortRangesT&& value) { SetSourcePortRanges(std::forward<SourcePortRangesT>(value)); return *this;}
    template<typename SourcePortRangesT = PortRange>
    AnalysisPacketHeader& AddSourcePortRanges(SourcePortRangesT&& value) { m_sourcePortRangesHasBeenSet = true; m_sourcePortRanges.emplace_back(std::forward<SourcePortRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_destinationAddresses;
    bool m_destinationAddressesHasBeenSet = false;

    Aws::Vector<PortRange> m_destinationPortRanges;
    bool m_destinationPortRangesHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceAddresses;
    bool m_sourceAddressesHasBeenSet = false;

    Aws::Vector<PortRange> m_sourcePortRanges;
    bool m_sourcePortRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
