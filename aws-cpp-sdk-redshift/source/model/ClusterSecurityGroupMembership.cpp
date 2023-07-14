/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ClusterSecurityGroupMembership.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterSecurityGroupMembership::ClusterSecurityGroupMembership() : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ClusterSecurityGroupMembership::ClusterSecurityGroupMembership(const XmlNode& xmlNode) : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterSecurityGroupMembership& ClusterSecurityGroupMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterSecurityGroupNameNode = resultNode.FirstChild("ClusterSecurityGroupName");
    if(!clusterSecurityGroupNameNode.IsNull())
    {
      m_clusterSecurityGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(clusterSecurityGroupNameNode.GetText());
      m_clusterSecurityGroupNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void ClusterSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
