/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/SourceSecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

SourceSecurityGroup::SourceSecurityGroup() : 
    m_ownerAliasHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

SourceSecurityGroup::SourceSecurityGroup(const XmlNode& xmlNode) : 
    m_ownerAliasHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
  *this = xmlNode;
}

SourceSecurityGroup& SourceSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerAliasNode = resultNode.FirstChild("OwnerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAliasNode.GetText());
      m_ownerAliasHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("GroupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
  }

  return *this;
}

void SourceSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

}

void SourceSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
