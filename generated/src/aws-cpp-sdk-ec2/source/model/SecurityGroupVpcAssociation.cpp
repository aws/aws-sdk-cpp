/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupVpcAssociation.h>
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

SecurityGroupVpcAssociation::SecurityGroupVpcAssociation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SecurityGroupVpcAssociation& SecurityGroupVpcAssociation::operator =(const XmlNode& xmlNode)
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
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode vpcOwnerIdNode = resultNode.FirstChild("vpcOwnerId");
    if(!vpcOwnerIdNode.IsNull())
    {
      m_vpcOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcOwnerIdNode.GetText());
      m_vpcOwnerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = SecurityGroupVpcAssociationStateMapper::GetSecurityGroupVpcAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonNode.GetText());
      m_stateReasonHasBeenSet = true;
    }
    XmlNode groupOwnerIdNode = resultNode.FirstChild("groupOwnerId");
    if(!groupOwnerIdNode.IsNull())
    {
      m_groupOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(groupOwnerIdNode.GetText());
      m_groupOwnerIdHasBeenSet = true;
    }
  }

  return *this;
}

void SecurityGroupVpcAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_vpcOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcOwnerId=" << StringUtils::URLEncode(m_vpcOwnerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(m_state)) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }

  if(m_groupOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupOwnerId=" << StringUtils::URLEncode(m_groupOwnerId.c_str()) << "&";
  }

}

void SecurityGroupVpcAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_vpcOwnerIdHasBeenSet)
  {
      oStream << location << ".VpcOwnerId=" << StringUtils::URLEncode(m_vpcOwnerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(SecurityGroupVpcAssociationStateMapper::GetNameForSecurityGroupVpcAssociationState(m_state)) << "&";
  }
  if(m_stateReasonHasBeenSet)
  {
      oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
  if(m_groupOwnerIdHasBeenSet)
  {
      oStream << location << ".GroupOwnerId=" << StringUtils::URLEncode(m_groupOwnerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
