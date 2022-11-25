/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupIdentifier.h>
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

SecurityGroupIdentifier::SecurityGroupIdentifier() : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

SecurityGroupIdentifier::SecurityGroupIdentifier(const XmlNode& xmlNode) : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroupIdentifier& SecurityGroupIdentifier::operator =(const XmlNode& xmlNode)
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
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
  }

  return *this;
}

void SecurityGroupIdentifier::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

}

void SecurityGroupIdentifier::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
