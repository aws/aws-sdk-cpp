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
    m_ipv6CidrBlockStateHasBeenSet(false)
{
}

SubnetIpv6CidrBlockAssociation::SubnetIpv6CidrBlockAssociation(const XmlNode& xmlNode) : 
    m_associationIdHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_ipv6CidrBlockStateHasBeenSet(false)
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
