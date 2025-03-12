﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetIpv6CidrBlockAssociation.h>
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

SubnetIpv6CidrBlockAssociation::SubnetIpv6CidrBlockAssociation() : 
    m_associationIdHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_ipv6CidrBlockStateHasBeenSet(false),
    m_ipv6AddressAttribute(Ipv6AddressAttribute::NOT_SET),
    m_ipv6AddressAttributeHasBeenSet(false),
    m_ipSource(IpSource::NOT_SET),
    m_ipSourceHasBeenSet(false)
{
}

SubnetIpv6CidrBlockAssociation::SubnetIpv6CidrBlockAssociation(const XmlNode& xmlNode)
  : SubnetIpv6CidrBlockAssociation()
{
  *this = xmlNode;
}

SubnetIpv6CidrBlockAssociation& SubnetIpv6CidrBlockAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = Aws::Utils::Xml::DecodeEscapedXmlText(associationIdNode.GetText());
      m_associationIdHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockNode = resultNode.FirstChild("ipv6CidrBlock");
    if(!ipv6CidrBlockNode.IsNull())
    {
      m_ipv6CidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6CidrBlockNode.GetText());
      m_ipv6CidrBlockHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockStateNode = resultNode.FirstChild("ipv6CidrBlockState");
    if(!ipv6CidrBlockStateNode.IsNull())
    {
      m_ipv6CidrBlockState = ipv6CidrBlockStateNode;
      m_ipv6CidrBlockStateHasBeenSet = true;
    }
    XmlNode ipv6AddressAttributeNode = resultNode.FirstChild("ipv6AddressAttribute");
    if(!ipv6AddressAttributeNode.IsNull())
    {
      m_ipv6AddressAttribute = Ipv6AddressAttributeMapper::GetIpv6AddressAttributeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressAttributeNode.GetText()).c_str()).c_str());
      m_ipv6AddressAttributeHasBeenSet = true;
    }
    XmlNode ipSourceNode = resultNode.FirstChild("ipSource");
    if(!ipSourceNode.IsNull())
    {
      m_ipSource = IpSourceMapper::GetIpSourceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipSourceNode.GetText()).c_str()).c_str());
      m_ipSourceHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetIpv6CidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  if(m_ipv6CidrBlockStateHasBeenSet)
  {
      Aws::StringStream ipv6CidrBlockStateLocationAndMemberSs;
      ipv6CidrBlockStateLocationAndMemberSs << location << index << locationValue << ".Ipv6CidrBlockState";
      m_ipv6CidrBlockState.OutputToStream(oStream, ipv6CidrBlockStateLocationAndMemberSs.str().c_str());
  }

  if(m_ipv6AddressAttributeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6AddressAttribute=" << StringUtils::URLEncode(Ipv6AddressAttributeMapper::GetNameForIpv6AddressAttribute(m_ipv6AddressAttribute)) << "&";
  }

  if(m_ipSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpSource=" << StringUtils::URLEncode(IpSourceMapper::GetNameForIpSource(m_ipSource)) << "&";
  }

}

void SubnetIpv6CidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }
  if(m_ipv6CidrBlockStateHasBeenSet)
  {
      Aws::String ipv6CidrBlockStateLocationAndMember(location);
      ipv6CidrBlockStateLocationAndMember += ".Ipv6CidrBlockState";
      m_ipv6CidrBlockState.OutputToStream(oStream, ipv6CidrBlockStateLocationAndMember.c_str());
  }
  if(m_ipv6AddressAttributeHasBeenSet)
  {
      oStream << location << ".Ipv6AddressAttribute=" << StringUtils::URLEncode(Ipv6AddressAttributeMapper::GetNameForIpv6AddressAttribute(m_ipv6AddressAttribute)) << "&";
  }
  if(m_ipSourceHasBeenSet)
  {
      oStream << location << ".IpSource=" << StringUtils::URLEncode(IpSourceMapper::GetNameForIpSource(m_ipSource)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
