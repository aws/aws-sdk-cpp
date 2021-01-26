/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ReplicationGroupPendingModifiedValues.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ReplicationGroupPendingModifiedValues::ReplicationGroupPendingModifiedValues() : 
    m_primaryClusterIdHasBeenSet(false),
    m_automaticFailoverStatus(PendingAutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverStatusHasBeenSet(false),
    m_reshardingHasBeenSet(false),
    m_authTokenStatus(AuthTokenUpdateStatus::NOT_SET),
    m_authTokenStatusHasBeenSet(false),
    m_userGroupsHasBeenSet(false)
{
}

ReplicationGroupPendingModifiedValues::ReplicationGroupPendingModifiedValues(const XmlNode& xmlNode) : 
    m_primaryClusterIdHasBeenSet(false),
    m_automaticFailoverStatus(PendingAutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverStatusHasBeenSet(false),
    m_reshardingHasBeenSet(false),
    m_authTokenStatus(AuthTokenUpdateStatus::NOT_SET),
    m_authTokenStatusHasBeenSet(false),
    m_userGroupsHasBeenSet(false)
{
  *this = xmlNode;
}

ReplicationGroupPendingModifiedValues& ReplicationGroupPendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode primaryClusterIdNode = resultNode.FirstChild("PrimaryClusterId");
    if(!primaryClusterIdNode.IsNull())
    {
      m_primaryClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(primaryClusterIdNode.GetText());
      m_primaryClusterIdHasBeenSet = true;
    }
    XmlNode automaticFailoverStatusNode = resultNode.FirstChild("AutomaticFailoverStatus");
    if(!automaticFailoverStatusNode.IsNull())
    {
      m_automaticFailoverStatus = PendingAutomaticFailoverStatusMapper::GetPendingAutomaticFailoverStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automaticFailoverStatusNode.GetText()).c_str()).c_str());
      m_automaticFailoverStatusHasBeenSet = true;
    }
    XmlNode reshardingNode = resultNode.FirstChild("Resharding");
    if(!reshardingNode.IsNull())
    {
      m_resharding = reshardingNode;
      m_reshardingHasBeenSet = true;
    }
    XmlNode authTokenStatusNode = resultNode.FirstChild("AuthTokenStatus");
    if(!authTokenStatusNode.IsNull())
    {
      m_authTokenStatus = AuthTokenUpdateStatusMapper::GetAuthTokenUpdateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenStatusNode.GetText()).c_str()).c_str());
      m_authTokenStatusHasBeenSet = true;
    }
    XmlNode userGroupsNode = resultNode.FirstChild("UserGroups");
    if(!userGroupsNode.IsNull())
    {
      m_userGroups = userGroupsNode;
      m_userGroupsHasBeenSet = true;
    }
  }

  return *this;
}

void ReplicationGroupPendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_primaryClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrimaryClusterId=" << StringUtils::URLEncode(m_primaryClusterId.c_str()) << "&";
  }

  if(m_automaticFailoverStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomaticFailoverStatus=" << PendingAutomaticFailoverStatusMapper::GetNameForPendingAutomaticFailoverStatus(m_automaticFailoverStatus) << "&";
  }

  if(m_reshardingHasBeenSet)
  {
      Aws::StringStream reshardingLocationAndMemberSs;
      reshardingLocationAndMemberSs << location << index << locationValue << ".Resharding";
      m_resharding.OutputToStream(oStream, reshardingLocationAndMemberSs.str().c_str());
  }

  if(m_authTokenStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenStatus=" << AuthTokenUpdateStatusMapper::GetNameForAuthTokenUpdateStatus(m_authTokenStatus) << "&";
  }

  if(m_userGroupsHasBeenSet)
  {
      Aws::StringStream userGroupsLocationAndMemberSs;
      userGroupsLocationAndMemberSs << location << index << locationValue << ".UserGroups";
      m_userGroups.OutputToStream(oStream, userGroupsLocationAndMemberSs.str().c_str());
  }

}

void ReplicationGroupPendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_primaryClusterIdHasBeenSet)
  {
      oStream << location << ".PrimaryClusterId=" << StringUtils::URLEncode(m_primaryClusterId.c_str()) << "&";
  }
  if(m_automaticFailoverStatusHasBeenSet)
  {
      oStream << location << ".AutomaticFailoverStatus=" << PendingAutomaticFailoverStatusMapper::GetNameForPendingAutomaticFailoverStatus(m_automaticFailoverStatus) << "&";
  }
  if(m_reshardingHasBeenSet)
  {
      Aws::String reshardingLocationAndMember(location);
      reshardingLocationAndMember += ".Resharding";
      m_resharding.OutputToStream(oStream, reshardingLocationAndMember.c_str());
  }
  if(m_authTokenStatusHasBeenSet)
  {
      oStream << location << ".AuthTokenStatus=" << AuthTokenUpdateStatusMapper::GetNameForAuthTokenUpdateStatus(m_authTokenStatus) << "&";
  }
  if(m_userGroupsHasBeenSet)
  {
      Aws::String userGroupsLocationAndMember(location);
      userGroupsLocationAndMember += ".UserGroups";
      m_userGroups.OutputToStream(oStream, userGroupsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
