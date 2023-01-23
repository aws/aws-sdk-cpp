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
    AWS_EC2_API AnalysisPacketHeader();
    AWS_EC2_API AnalysisPacketHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisPacketHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The destination addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const{ return m_destinationAddresses; }

    /**
     * <p>The destination addresses.</p>
     */
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }

    /**
     * <p>The destination addresses.</p>
     */
    inline void SetDestinationAddresses(const Aws::Vector<Aws::String>& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = value; }

    /**
     * <p>The destination addresses.</p>
     */
    inline void SetDestinationAddresses(Aws::Vector<Aws::String>&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::move(value); }

    /**
     * <p>The destination addresses.</p>
     */
    inline AnalysisPacketHeader& WithDestinationAddresses(const Aws::Vector<Aws::String>& value) { SetDestinationAddresses(value); return *this;}

    /**
     * <p>The destination addresses.</p>
     */
    inline AnalysisPacketHeader& WithDestinationAddresses(Aws::Vector<Aws::String>&& value) { SetDestinationAddresses(std::move(value)); return *this;}

    /**
     * <p>The destination addresses.</p>
     */
    inline AnalysisPacketHeader& AddDestinationAddresses(const Aws::String& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }

    /**
     * <p>The destination addresses.</p>
     */
    inline AnalysisPacketHeader& AddDestinationAddresses(Aws::String&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The destination addresses.</p>
     */
    inline AnalysisPacketHeader& AddDestinationAddresses(const char* value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }


    /**
     * <p>The destination port ranges.</p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPortRanges() const{ return m_destinationPortRanges; }

    /**
     * <p>The destination port ranges.</p>
     */
    inline bool DestinationPortRangesHasBeenSet() const { return m_destinationPortRangesHasBeenSet; }

    /**
     * <p>The destination port ranges.</p>
     */
    inline void SetDestinationPortRanges(const Aws::Vector<PortRange>& value) { m_destinationPortRangesHasBeenSet = true; m_destinationPortRanges = value; }

    /**
     * <p>The destination port ranges.</p>
     */
    inline void SetDestinationPortRanges(Aws::Vector<PortRange>&& value) { m_destinationPortRangesHasBeenSet = true; m_destinationPortRanges = std::move(value); }

    /**
     * <p>The destination port ranges.</p>
     */
    inline AnalysisPacketHeader& WithDestinationPortRanges(const Aws::Vector<PortRange>& value) { SetDestinationPortRanges(value); return *this;}

    /**
     * <p>The destination port ranges.</p>
     */
    inline AnalysisPacketHeader& WithDestinationPortRanges(Aws::Vector<PortRange>&& value) { SetDestinationPortRanges(std::move(value)); return *this;}

    /**
     * <p>The destination port ranges.</p>
     */
    inline AnalysisPacketHeader& AddDestinationPortRanges(const PortRange& value) { m_destinationPortRangesHasBeenSet = true; m_destinationPortRanges.push_back(value); return *this; }

    /**
     * <p>The destination port ranges.</p>
     */
    inline AnalysisPacketHeader& AddDestinationPortRanges(PortRange&& value) { m_destinationPortRangesHasBeenSet = true; m_destinationPortRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol.</p>
     */
    inline AnalysisPacketHeader& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol.</p>
     */
    inline AnalysisPacketHeader& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol.</p>
     */
    inline AnalysisPacketHeader& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The source addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAddresses() const{ return m_sourceAddresses; }

    /**
     * <p>The source addresses.</p>
     */
    inline bool SourceAddressesHasBeenSet() const { return m_sourceAddressesHasBeenSet; }

    /**
     * <p>The source addresses.</p>
     */
    inline void SetSourceAddresses(const Aws::Vector<Aws::String>& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses = value; }

    /**
     * <p>The source addresses.</p>
     */
    inline void SetSourceAddresses(Aws::Vector<Aws::String>&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses = std::move(value); }

    /**
     * <p>The source addresses.</p>
     */
    inline AnalysisPacketHeader& WithSourceAddresses(const Aws::Vector<Aws::String>& value) { SetSourceAddresses(value); return *this;}

    /**
     * <p>The source addresses.</p>
     */
    inline AnalysisPacketHeader& WithSourceAddresses(Aws::Vector<Aws::String>&& value) { SetSourceAddresses(std::move(value)); return *this;}

    /**
     * <p>The source addresses.</p>
     */
    inline AnalysisPacketHeader& AddSourceAddresses(const Aws::String& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.push_back(value); return *this; }

    /**
     * <p>The source addresses.</p>
     */
    inline AnalysisPacketHeader& AddSourceAddresses(Aws::String&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The source addresses.</p>
     */
    inline AnalysisPacketHeader& AddSourceAddresses(const char* value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.push_back(value); return *this; }


    /**
     * <p>The source port ranges.</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePortRanges() const{ return m_sourcePortRanges; }

    /**
     * <p>The source port ranges.</p>
     */
    inline bool SourcePortRangesHasBeenSet() const { return m_sourcePortRangesHasBeenSet; }

    /**
     * <p>The source port ranges.</p>
     */
    inline void SetSourcePortRanges(const Aws::Vector<PortRange>& value) { m_sourcePortRangesHasBeenSet = true; m_sourcePortRanges = value; }

    /**
     * <p>The source port ranges.</p>
     */
    inline void SetSourcePortRanges(Aws::Vector<PortRange>&& value) { m_sourcePortRangesHasBeenSet = true; m_sourcePortRanges = std::move(value); }

    /**
     * <p>The source port ranges.</p>
     */
    inline AnalysisPacketHeader& WithSourcePortRanges(const Aws::Vector<PortRange>& value) { SetSourcePortRanges(value); return *this;}

    /**
     * <p>The source port ranges.</p>
     */
    inline AnalysisPacketHeader& WithSourcePortRanges(Aws::Vector<PortRange>&& value) { SetSourcePortRanges(std::move(value)); return *this;}

    /**
     * <p>The source port ranges.</p>
     */
    inline AnalysisPacketHeader& AddSourcePortRanges(const PortRange& value) { m_sourcePortRangesHasBeenSet = true; m_sourcePortRanges.push_back(value); return *this; }

    /**
     * <p>The source port ranges.</p>
     */
    inline AnalysisPacketHeader& AddSourcePortRanges(PortRange&& value) { m_sourcePortRangesHasBeenSet = true; m_sourcePortRanges.push_back(std::move(value)); return *this; }

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
