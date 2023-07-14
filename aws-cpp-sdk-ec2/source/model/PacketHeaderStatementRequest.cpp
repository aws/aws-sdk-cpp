/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PacketHeaderStatementRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

PacketHeaderStatementRequest::PacketHeaderStatementRequest() : 
    m_sourceAddressesHasBeenSet(false),
    m_destinationAddressesHasBeenSet(false),
    m_sourcePortsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_sourcePrefixListsHasBeenSet(false),
    m_destinationPrefixListsHasBeenSet(false),
    m_protocolsHasBeenSet(false)
{
}

PacketHeaderStatementRequest::PacketHeaderStatementRequest(const XmlNode& xmlNode) : 
    m_sourceAddressesHasBeenSet(false),
    m_destinationAddressesHasBeenSet(false),
    m_sourcePortsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_sourcePrefixListsHasBeenSet(false),
    m_destinationPrefixListsHasBeenSet(false),
    m_protocolsHasBeenSet(false)
{
  *this = xmlNode;
}

PacketHeaderStatementRequest& PacketHeaderStatementRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceAddressesNode = resultNode.FirstChild("SourceAddress");
    if(!sourceAddressesNode.IsNull())
    {
      XmlNode sourceAddressesMember = sourceAddressesNode.FirstChild("item");
      while(!sourceAddressesMember.IsNull())
      {
        m_sourceAddresses.push_back(sourceAddressesMember.GetText());
        sourceAddressesMember = sourceAddressesMember.NextNode("item");
      }

      m_sourceAddressesHasBeenSet = true;
    }
    XmlNode destinationAddressesNode = resultNode.FirstChild("DestinationAddress");
    if(!destinationAddressesNode.IsNull())
    {
      XmlNode destinationAddressesMember = destinationAddressesNode.FirstChild("item");
      while(!destinationAddressesMember.IsNull())
      {
        m_destinationAddresses.push_back(destinationAddressesMember.GetText());
        destinationAddressesMember = destinationAddressesMember.NextNode("item");
      }

      m_destinationAddressesHasBeenSet = true;
    }
    XmlNode sourcePortsNode = resultNode.FirstChild("SourcePort");
    if(!sourcePortsNode.IsNull())
    {
      XmlNode sourcePortsMember = sourcePortsNode.FirstChild("item");
      while(!sourcePortsMember.IsNull())
      {
        m_sourcePorts.push_back(sourcePortsMember.GetText());
        sourcePortsMember = sourcePortsMember.NextNode("item");
      }

      m_sourcePortsHasBeenSet = true;
    }
    XmlNode destinationPortsNode = resultNode.FirstChild("DestinationPort");
    if(!destinationPortsNode.IsNull())
    {
      XmlNode destinationPortsMember = destinationPortsNode.FirstChild("item");
      while(!destinationPortsMember.IsNull())
      {
        m_destinationPorts.push_back(destinationPortsMember.GetText());
        destinationPortsMember = destinationPortsMember.NextNode("item");
      }

      m_destinationPortsHasBeenSet = true;
    }
    XmlNode sourcePrefixListsNode = resultNode.FirstChild("SourcePrefixList");
    if(!sourcePrefixListsNode.IsNull())
    {
      XmlNode sourcePrefixListsMember = sourcePrefixListsNode.FirstChild("item");
      while(!sourcePrefixListsMember.IsNull())
      {
        m_sourcePrefixLists.push_back(sourcePrefixListsMember.GetText());
        sourcePrefixListsMember = sourcePrefixListsMember.NextNode("item");
      }

      m_sourcePrefixListsHasBeenSet = true;
    }
    XmlNode destinationPrefixListsNode = resultNode.FirstChild("DestinationPrefixList");
    if(!destinationPrefixListsNode.IsNull())
    {
      XmlNode destinationPrefixListsMember = destinationPrefixListsNode.FirstChild("item");
      while(!destinationPrefixListsMember.IsNull())
      {
        m_destinationPrefixLists.push_back(destinationPrefixListsMember.GetText());
        destinationPrefixListsMember = destinationPrefixListsMember.NextNode("item");
      }

      m_destinationPrefixListsHasBeenSet = true;
    }
    XmlNode protocolsNode = resultNode.FirstChild("Protocol");
    if(!protocolsNode.IsNull())
    {
      XmlNode protocolsMember = protocolsNode.FirstChild("item");
      while(!protocolsMember.IsNull())
      {
        m_protocols.push_back(ProtocolMapper::GetProtocolForName(StringUtils::Trim(protocolsMember.GetText().c_str())));
        protocolsMember = protocolsMember.NextNode("item");
      }

      m_protocolsHasBeenSet = true;
    }
  }

  return *this;
}

void PacketHeaderStatementRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceAddressesHasBeenSet)
  {
      unsigned sourceAddressesIdx = 1;
      for(auto& item : m_sourceAddresses)
      {
        oStream << location << index << locationValue << ".SourceAddress." << sourceAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_destinationAddressesHasBeenSet)
  {
      unsigned destinationAddressesIdx = 1;
      for(auto& item : m_destinationAddresses)
      {
        oStream << location << index << locationValue << ".DestinationAddress." << destinationAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_sourcePortsHasBeenSet)
  {
      unsigned sourcePortsIdx = 1;
      for(auto& item : m_sourcePorts)
      {
        oStream << location << index << locationValue << ".SourcePort." << sourcePortsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_destinationPortsHasBeenSet)
  {
      unsigned destinationPortsIdx = 1;
      for(auto& item : m_destinationPorts)
      {
        oStream << location << index << locationValue << ".DestinationPort." << destinationPortsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_sourcePrefixListsHasBeenSet)
  {
      unsigned sourcePrefixListsIdx = 1;
      for(auto& item : m_sourcePrefixLists)
      {
        oStream << location << index << locationValue << ".SourcePrefixList." << sourcePrefixListsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_destinationPrefixListsHasBeenSet)
  {
      unsigned destinationPrefixListsIdx = 1;
      for(auto& item : m_destinationPrefixLists)
      {
        oStream << location << index << locationValue << ".DestinationPrefixList." << destinationPrefixListsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_protocolsHasBeenSet)
  {
      unsigned protocolsIdx = 1;
      for(auto& item : m_protocols)
      {
        oStream << location << index << locationValue << ".Protocol." << protocolsIdx++ << "=" << ProtocolMapper::GetNameForProtocol(item) << "&";
      }
  }

}

void PacketHeaderStatementRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceAddressesHasBeenSet)
  {
      unsigned sourceAddressesIdx = 1;
      for(auto& item : m_sourceAddresses)
      {
        oStream << location << ".SourceAddress." << sourceAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_destinationAddressesHasBeenSet)
  {
      unsigned destinationAddressesIdx = 1;
      for(auto& item : m_destinationAddresses)
      {
        oStream << location << ".DestinationAddress." << destinationAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_sourcePortsHasBeenSet)
  {
      unsigned sourcePortsIdx = 1;
      for(auto& item : m_sourcePorts)
      {
        oStream << location << ".SourcePort." << sourcePortsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_destinationPortsHasBeenSet)
  {
      unsigned destinationPortsIdx = 1;
      for(auto& item : m_destinationPorts)
      {
        oStream << location << ".DestinationPort." << destinationPortsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_sourcePrefixListsHasBeenSet)
  {
      unsigned sourcePrefixListsIdx = 1;
      for(auto& item : m_sourcePrefixLists)
      {
        oStream << location << ".SourcePrefixList." << sourcePrefixListsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_destinationPrefixListsHasBeenSet)
  {
      unsigned destinationPrefixListsIdx = 1;
      for(auto& item : m_destinationPrefixLists)
      {
        oStream << location << ".DestinationPrefixList." << destinationPrefixListsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_protocolsHasBeenSet)
  {
      unsigned protocolsIdx = 1;
      for(auto& item : m_protocols)
      {
        oStream << location << ".Protocol." << protocolsIdx++ << "=" << ProtocolMapper::GetNameForProtocol(item) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
