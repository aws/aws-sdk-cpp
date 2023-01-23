/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupReference.h>
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

SecurityGroupReference::SecurityGroupReference() : 
    m_groupIdHasBeenSet(false),
    m_referencingVpcIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

SecurityGroupReference::SecurityGroupReference(const XmlNode& xmlNode) : 
    m_groupIdHasBeenSet(false),
    m_referencingVpcIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroupReference& SecurityGroupReference::operator =(const XmlNode& xmlNode)
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
    XmlNode referencingVpcIdNode = resultNode.FirstChild("referencingVpcId");
    if(!referencingVpcIdNode.IsNull())
    {
      m_referencingVpcId = Aws::Utils::Xml::DecodeEscapedXmlText(referencingVpcIdNode.GetText());
      m_referencingVpcIdHasBeenSet = true;
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

void SecurityGroupReference::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_referencingVpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReferencingVpcId=" << StringUtils::URLEncode(m_referencingVpcId.c_str()) << "&";
  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

}

void SecurityGroupReference::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_referencingVpcIdHasBeenSet)
  {
      oStream << location << ".ReferencingVpcId=" << StringUtils::URLEncode(m_referencingVpcId.c_str()) << "&";
  }
  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
