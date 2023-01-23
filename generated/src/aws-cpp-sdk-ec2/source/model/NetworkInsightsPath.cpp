/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInsightsPath.h>
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

NetworkInsightsPath::NetworkInsightsPath() : 
    m_networkInsightsPathIdHasBeenSet(false),
    m_networkInsightsPathArnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_destinationIpHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NetworkInsightsPath::NetworkInsightsPath(const XmlNode& xmlNode) : 
    m_networkInsightsPathIdHasBeenSet(false),
    m_networkInsightsPathArnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_destinationIpHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInsightsPath& NetworkInsightsPath::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsPathIdNode = resultNode.FirstChild("networkInsightsPathId");
    if(!networkInsightsPathIdNode.IsNull())
    {
      m_networkInsightsPathId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsPathIdNode.GetText());
      m_networkInsightsPathIdHasBeenSet = true;
    }
    XmlNode networkInsightsPathArnNode = resultNode.FirstChild("networkInsightsPathArn");
    if(!networkInsightsPathArnNode.IsNull())
    {
      m_networkInsightsPathArn = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsPathArnNode.GetText());
      m_networkInsightsPathArnHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("createdDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode sourceNode = resultNode.FirstChild("source");
    if(!sourceNode.IsNull())
    {
      m_source = Aws::Utils::Xml::DecodeEscapedXmlText(sourceNode.GetText());
      m_sourceHasBeenSet = true;
    }
    XmlNode destinationNode = resultNode.FirstChild("destination");
    if(!destinationNode.IsNull())
    {
      m_destination = Aws::Utils::Xml::DecodeEscapedXmlText(destinationNode.GetText());
      m_destinationHasBeenSet = true;
    }
    XmlNode sourceArnNode = resultNode.FirstChild("sourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
    XmlNode destinationArnNode = resultNode.FirstChild("destinationArn");
    if(!destinationArnNode.IsNull())
    {
      m_destinationArn = Aws::Utils::Xml::DecodeEscapedXmlText(destinationArnNode.GetText());
      m_destinationArnHasBeenSet = true;
    }
    XmlNode sourceIpNode = resultNode.FirstChild("sourceIp");
    if(!sourceIpNode.IsNull())
    {
      m_sourceIp = Aws::Utils::Xml::DecodeEscapedXmlText(sourceIpNode.GetText());
      m_sourceIpHasBeenSet = true;
    }
    XmlNode destinationIpNode = resultNode.FirstChild("destinationIp");
    if(!destinationIpNode.IsNull())
    {
      m_destinationIp = Aws::Utils::Xml::DecodeEscapedXmlText(destinationIpNode.GetText());
      m_destinationIpHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = ProtocolMapper::GetProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode destinationPortNode = resultNode.FirstChild("destinationPort");
    if(!destinationPortNode.IsNull())
    {
      m_destinationPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(destinationPortNode.GetText()).c_str()).c_str());
      m_destinationPortHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInsightsPath::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInsightsPathIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }

  if(m_networkInsightsPathArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsPathArn=" << StringUtils::URLEncode(m_networkInsightsPathArn.c_str()) << "&";
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Destination=" << StringUtils::URLEncode(m_destination.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_destinationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationArn=" << StringUtils::URLEncode(m_destinationArn.c_str()) << "&";
  }

  if(m_sourceIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceIp=" << StringUtils::URLEncode(m_sourceIp.c_str()) << "&";
  }

  if(m_destinationIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationIp=" << StringUtils::URLEncode(m_destinationIp.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << ProtocolMapper::GetNameForProtocol(m_protocol) << "&";
  }

  if(m_destinationPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationPort=" << m_destinationPort << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void NetworkInsightsPath::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInsightsPathIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }
  if(m_networkInsightsPathArnHasBeenSet)
  {
      oStream << location << ".NetworkInsightsPathArn=" << StringUtils::URLEncode(m_networkInsightsPathArn.c_str()) << "&";
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }
  if(m_destinationHasBeenSet)
  {
      oStream << location << ".Destination=" << StringUtils::URLEncode(m_destination.c_str()) << "&";
  }
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
  if(m_destinationArnHasBeenSet)
  {
      oStream << location << ".DestinationArn=" << StringUtils::URLEncode(m_destinationArn.c_str()) << "&";
  }
  if(m_sourceIpHasBeenSet)
  {
      oStream << location << ".SourceIp=" << StringUtils::URLEncode(m_sourceIp.c_str()) << "&";
  }
  if(m_destinationIpHasBeenSet)
  {
      oStream << location << ".DestinationIp=" << StringUtils::URLEncode(m_destinationIp.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << ProtocolMapper::GetNameForProtocol(m_protocol) << "&";
  }
  if(m_destinationPortHasBeenSet)
  {
      oStream << location << ".DestinationPort=" << m_destinationPort << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
