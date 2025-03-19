/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpointEniOptions.h>
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

VerifiedAccessEndpointEniOptions::VerifiedAccessEndpointEniOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VerifiedAccessEndpointEniOptions& VerifiedAccessEndpointEniOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = VerifiedAccessEndpointProtocolMapper::GetVerifiedAccessEndpointProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()));
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode portRangesNode = resultNode.FirstChild("portRangeSet");
    if(!portRangesNode.IsNull())
    {
      XmlNode portRangesMember = portRangesNode.FirstChild("item");
      m_portRangesHasBeenSet = !portRangesMember.IsNull();
      while(!portRangesMember.IsNull())
      {
        m_portRanges.push_back(portRangesMember);
        portRangesMember = portRangesMember.NextNode("item");
      }

      m_portRangesHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessEndpointEniOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol)) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_portRangesHasBeenSet)
  {
      unsigned portRangesIdx = 1;
      for(auto& item : m_portRanges)
      {
        Aws::StringStream portRangesSs;
        portRangesSs << location << index << locationValue << ".PortRangeSet." << portRangesIdx++;
        item.OutputToStream(oStream, portRangesSs.str().c_str());
      }
  }

}

void VerifiedAccessEndpointEniOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol)) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_portRangesHasBeenSet)
  {
      unsigned portRangesIdx = 1;
      for(auto& item : m_portRanges)
      {
        Aws::StringStream portRangesSs;
        portRangesSs << location << ".PortRangeSet." << portRangesIdx++;
        item.OutputToStream(oStream, portRangesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
