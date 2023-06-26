﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcCidrBlockAssociation.h>
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

VpcCidrBlockAssociation::VpcCidrBlockAssociation() : 
    m_associationIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_cidrBlockStateHasBeenSet(false)
{
}

VpcCidrBlockAssociation::VpcCidrBlockAssociation(const XmlNode& xmlNode) : 
    m_associationIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_cidrBlockStateHasBeenSet(false)
{
  *this = xmlNode;
}

VpcCidrBlockAssociation& VpcCidrBlockAssociation::operator =(const XmlNode& xmlNode)
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
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if(!cidrBlockNode.IsNull())
    {
      m_cidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(cidrBlockNode.GetText());
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode cidrBlockStateNode = resultNode.FirstChild("cidrBlockState");
    if(!cidrBlockStateNode.IsNull())
    {
      m_cidrBlockState = cidrBlockStateNode;
      m_cidrBlockStateHasBeenSet = true;
    }
  }

  return *this;
}

void VpcCidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_cidrBlockStateHasBeenSet)
  {
      Aws::StringStream cidrBlockStateLocationAndMemberSs;
      cidrBlockStateLocationAndMemberSs << location << index << locationValue << ".CidrBlockState";
      m_cidrBlockState.OutputToStream(oStream, cidrBlockStateLocationAndMemberSs.str().c_str());
  }

}

void VpcCidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_cidrBlockStateHasBeenSet)
  {
      Aws::String cidrBlockStateLocationAndMember(location);
      cidrBlockStateLocationAndMember += ".CidrBlockState";
      m_cidrBlockState.OutputToStream(oStream, cidrBlockStateLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
