/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReferencedSecurityGroup.h>
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

ReferencedSecurityGroup::ReferencedSecurityGroup() : 
    m_groupIdHasBeenSet(false),
    m_peeringStatusHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

ReferencedSecurityGroup::ReferencedSecurityGroup(const XmlNode& xmlNode) : 
    m_groupIdHasBeenSet(false),
    m_peeringStatusHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
  *this = xmlNode;
}

ReferencedSecurityGroup& ReferencedSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupIdNode = resultNode.FirstChild("groupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = Aws::Utils::Xml::DecodeEscapedXmlText(groupIdNode.GetText());
      m_groupIdHasBeenSet = true;
    }
    XmlNode peeringStatusNode = resultNode.FirstChild("peeringStatus");
    if(!peeringStatusNode.IsNull())
    {
      m_peeringStatus = Aws::Utils::Xml::DecodeEscapedXmlText(peeringStatusNode.GetText());
      m_peeringStatusHasBeenSet = true;
    }
    XmlNode userIdNode = resultNode.FirstChild("userId");
    if(!userIdNode.IsNull())
    {
      m_userId = Aws::Utils::Xml::DecodeEscapedXmlText(userIdNode.GetText());
      m_userIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode vpcPeeringConnectionIdNode = resultNode.FirstChild("vpcPeeringConnectionId");
    if(!vpcPeeringConnectionIdNode.IsNull())
    {
      m_vpcPeeringConnectionId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcPeeringConnectionIdNode.GetText());
      m_vpcPeeringConnectionIdHasBeenSet = true;
    }
  }

  return *this;
}

void ReferencedSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_peeringStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeeringStatus=" << StringUtils::URLEncode(m_peeringStatus.c_str()) << "&";
  }

  if(m_userIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

}

void ReferencedSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_peeringStatusHasBeenSet)
  {
      oStream << location << ".PeeringStatus=" << StringUtils::URLEncode(m_peeringStatus.c_str()) << "&";
  }
  if(m_userIdHasBeenSet)
  {
      oStream << location << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
