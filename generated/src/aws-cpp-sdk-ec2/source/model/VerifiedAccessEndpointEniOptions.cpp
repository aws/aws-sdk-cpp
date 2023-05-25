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

VerifiedAccessEndpointEniOptions::VerifiedAccessEndpointEniOptions() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_protocol(VerifiedAccessEndpointProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

VerifiedAccessEndpointEniOptions::VerifiedAccessEndpointEniOptions(const XmlNode& xmlNode) : 
    m_networkInterfaceIdHasBeenSet(false),
    m_protocol(VerifiedAccessEndpointProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
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
      m_protocol = VerifiedAccessEndpointProtocolMapper::GetVerifiedAccessEndpointProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
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
      oStream << location << index << locationValue << ".Protocol=" << VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
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
      oStream << location << ".Protocol=" << VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
