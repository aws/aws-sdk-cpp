/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPolicyRule.h>
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

TransitGatewayPolicyRule::TransitGatewayPolicyRule() : 
    m_sourceCidrBlockHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

TransitGatewayPolicyRule::TransitGatewayPolicyRule(const XmlNode& xmlNode) : 
    m_sourceCidrBlockHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayPolicyRule& TransitGatewayPolicyRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceCidrBlockNode = resultNode.FirstChild("sourceCidrBlock");
    if(!sourceCidrBlockNode.IsNull())
    {
      m_sourceCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCidrBlockNode.GetText());
      m_sourceCidrBlockHasBeenSet = true;
    }
    XmlNode sourcePortRangeNode = resultNode.FirstChild("sourcePortRange");
    if(!sourcePortRangeNode.IsNull())
    {
      m_sourcePortRange = Aws::Utils::Xml::DecodeEscapedXmlText(sourcePortRangeNode.GetText());
      m_sourcePortRangeHasBeenSet = true;
    }
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if(!destinationCidrBlockNode.IsNull())
    {
      m_destinationCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrBlockNode.GetText());
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode destinationPortRangeNode = resultNode.FirstChild("destinationPortRange");
    if(!destinationPortRangeNode.IsNull())
    {
      m_destinationPortRange = Aws::Utils::Xml::DecodeEscapedXmlText(destinationPortRangeNode.GetText());
      m_destinationPortRangeHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode metaDataNode = resultNode.FirstChild("metaData");
    if(!metaDataNode.IsNull())
    {
      m_metaData = metaDataNode;
      m_metaDataHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayPolicyRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }

  if(m_sourcePortRangeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourcePortRange=" << StringUtils::URLEncode(m_sourcePortRange.c_str()) << "&";
  }

  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_destinationPortRangeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationPortRange=" << StringUtils::URLEncode(m_destinationPortRange.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_metaDataHasBeenSet)
  {
      Aws::StringStream metaDataLocationAndMemberSs;
      metaDataLocationAndMemberSs << location << index << locationValue << ".MetaData";
      m_metaData.OutputToStream(oStream, metaDataLocationAndMemberSs.str().c_str());
  }

}

void TransitGatewayPolicyRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceCidrBlockHasBeenSet)
  {
      oStream << location << ".SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }
  if(m_sourcePortRangeHasBeenSet)
  {
      oStream << location << ".SourcePortRange=" << StringUtils::URLEncode(m_sourcePortRange.c_str()) << "&";
  }
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_destinationPortRangeHasBeenSet)
  {
      oStream << location << ".DestinationPortRange=" << StringUtils::URLEncode(m_destinationPortRange.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_metaDataHasBeenSet)
  {
      Aws::String metaDataLocationAndMember(location);
      metaDataLocationAndMember += ".MetaData";
      m_metaData.OutputToStream(oStream, metaDataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
