/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVerifiedAccessEndpointCidrOptions.h>
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

CreateVerifiedAccessEndpointCidrOptions::CreateVerifiedAccessEndpointCidrOptions() : 
    m_protocol(VerifiedAccessEndpointProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_portRangesHasBeenSet(false)
{
}

CreateVerifiedAccessEndpointCidrOptions::CreateVerifiedAccessEndpointCidrOptions(const XmlNode& xmlNode)
  : CreateVerifiedAccessEndpointCidrOptions()
{
  *this = xmlNode;
}

CreateVerifiedAccessEndpointCidrOptions& CreateVerifiedAccessEndpointCidrOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = VerifiedAccessEndpointProtocolMapper::GetVerifiedAccessEndpointProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode subnetIdsNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdsNode.IsNull())
    {
      XmlNode subnetIdsMember = subnetIdsNode.FirstChild("item");
      while(!subnetIdsMember.IsNull())
      {
        m_subnetIds.push_back(subnetIdsMember.GetText());
        subnetIdsMember = subnetIdsMember.NextNode("item");
      }

      m_subnetIdsHasBeenSet = true;
    }
    XmlNode cidrNode = resultNode.FirstChild("Cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode portRangesNode = resultNode.FirstChild("PortRange");
    if(!portRangesNode.IsNull())
    {
      XmlNode portRangesMember = portRangesNode.FirstChild("item");
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

void CreateVerifiedAccessEndpointCidrOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << index << locationValue << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_portRangesHasBeenSet)
  {
      unsigned portRangesIdx = 1;
      for(auto& item : m_portRanges)
      {
        Aws::StringStream portRangesSs;
        portRangesSs << location << index << locationValue << ".PortRange." << portRangesIdx++;
        item.OutputToStream(oStream, portRangesSs.str().c_str());
      }
  }

}

void CreateVerifiedAccessEndpointCidrOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol) << "&";
  }
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_portRangesHasBeenSet)
  {
      unsigned portRangesIdx = 1;
      for(auto& item : m_portRanges)
      {
        Aws::StringStream portRangesSs;
        portRangesSs << location <<  ".PortRange." << portRangesIdx++;
        item.OutputToStream(oStream, portRangesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
