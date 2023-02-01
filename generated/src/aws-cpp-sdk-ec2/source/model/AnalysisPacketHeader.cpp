/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisPacketHeader.h>
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

AnalysisPacketHeader::AnalysisPacketHeader() : 
    m_destinationAddressesHasBeenSet(false),
    m_destinationPortRangesHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sourceAddressesHasBeenSet(false),
    m_sourcePortRangesHasBeenSet(false)
{
}

AnalysisPacketHeader::AnalysisPacketHeader(const XmlNode& xmlNode) : 
    m_destinationAddressesHasBeenSet(false),
    m_destinationPortRangesHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sourceAddressesHasBeenSet(false),
    m_sourcePortRangesHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisPacketHeader& AnalysisPacketHeader::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationAddressesNode = resultNode.FirstChild("destinationAddressSet");
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
    XmlNode destinationPortRangesNode = resultNode.FirstChild("destinationPortRangeSet");
    if(!destinationPortRangesNode.IsNull())
    {
      XmlNode destinationPortRangesMember = destinationPortRangesNode.FirstChild("item");
      while(!destinationPortRangesMember.IsNull())
      {
        m_destinationPortRanges.push_back(destinationPortRangesMember);
        destinationPortRangesMember = destinationPortRangesMember.NextNode("item");
      }

      m_destinationPortRangesHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode sourceAddressesNode = resultNode.FirstChild("sourceAddressSet");
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
    XmlNode sourcePortRangesNode = resultNode.FirstChild("sourcePortRangeSet");
    if(!sourcePortRangesNode.IsNull())
    {
      XmlNode sourcePortRangesMember = sourcePortRangesNode.FirstChild("item");
      while(!sourcePortRangesMember.IsNull())
      {
        m_sourcePortRanges.push_back(sourcePortRangesMember);
        sourcePortRangesMember = sourcePortRangesMember.NextNode("item");
      }

      m_sourcePortRangesHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisPacketHeader::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationAddressesHasBeenSet)
  {
      unsigned destinationAddressesIdx = 1;
      for(auto& item : m_destinationAddresses)
      {
        oStream << location << index << locationValue << ".DestinationAddressSet." << destinationAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_destinationPortRangesHasBeenSet)
  {
      unsigned destinationPortRangesIdx = 1;
      for(auto& item : m_destinationPortRanges)
      {
        Aws::StringStream destinationPortRangesSs;
        destinationPortRangesSs << location << index << locationValue << ".DestinationPortRangeSet." << destinationPortRangesIdx++;
        item.OutputToStream(oStream, destinationPortRangesSs.str().c_str());
      }
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_sourceAddressesHasBeenSet)
  {
      unsigned sourceAddressesIdx = 1;
      for(auto& item : m_sourceAddresses)
      {
        oStream << location << index << locationValue << ".SourceAddressSet." << sourceAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_sourcePortRangesHasBeenSet)
  {
      unsigned sourcePortRangesIdx = 1;
      for(auto& item : m_sourcePortRanges)
      {
        Aws::StringStream sourcePortRangesSs;
        sourcePortRangesSs << location << index << locationValue << ".SourcePortRangeSet." << sourcePortRangesIdx++;
        item.OutputToStream(oStream, sourcePortRangesSs.str().c_str());
      }
  }

}

void AnalysisPacketHeader::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationAddressesHasBeenSet)
  {
      unsigned destinationAddressesIdx = 1;
      for(auto& item : m_destinationAddresses)
      {
        oStream << location << ".DestinationAddressSet." << destinationAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_destinationPortRangesHasBeenSet)
  {
      unsigned destinationPortRangesIdx = 1;
      for(auto& item : m_destinationPortRanges)
      {
        Aws::StringStream destinationPortRangesSs;
        destinationPortRangesSs << location <<  ".DestinationPortRangeSet." << destinationPortRangesIdx++;
        item.OutputToStream(oStream, destinationPortRangesSs.str().c_str());
      }
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_sourceAddressesHasBeenSet)
  {
      unsigned sourceAddressesIdx = 1;
      for(auto& item : m_sourceAddresses)
      {
        oStream << location << ".SourceAddressSet." << sourceAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_sourcePortRangesHasBeenSet)
  {
      unsigned sourcePortRangesIdx = 1;
      for(auto& item : m_sourcePortRanges)
      {
        Aws::StringStream sourcePortRangesSs;
        sourcePortRangesSs << location <<  ".SourcePortRangeSet." << sourcePortRangesIdx++;
        item.OutputToStream(oStream, sourcePortRangesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
