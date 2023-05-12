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
    m_userGroupsHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_transitEncryptionMode(TransitEncryptionMode::NOT_SET),
    m_transitEncryptionModeHasBeenSet(false),
    m_clusterMode(ClusterMode::NOT_SET),
    m_clusterModeHasBeenSet(false)
{
}

ReplicationGroupPendingModifiedValues::ReplicationGroupPendingModifiedValues(const XmlNode& xmlNode) : 
    m_primaryClusterIdHasBeenSet(false),
    m_automaticFailoverStatus(PendingAutomaticFailoverStatus::NOT_SET),
    m_automaticFailoverStatusHasBeenSet(false),
    m_reshardingHasBeenSet(false),
    m_authTokenStatus(AuthTokenUpdateStatus::NOT_SET),
    m_authTokenStatusHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_logDeliveryConfigurationsHasBeenSet(false),
    m_transitEncryptionEnabled(false),
    m_transitEncryptionEnabledHasBeenSet(false),
    m_transitEncryptionMode(TransitEncryptionMode::NOT_SET),
    m_transitEncryptionModeHasBeenSet(false),
    m_clusterMode(ClusterMode::NOT_SET),
    m_clusterModeHasBeenSet(false)
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
    XmlNode logDeliveryConfigurationsNode = resultNode.FirstChild("LogDeliveryConfigurations");
    if(!logDeliveryConfigurationsNode.IsNull())
    {
      XmlNode logDeliveryConfigurationsMember = logDeliveryConfigurationsNode.FirstChild("member");
      while(!logDeliveryConfigurationsMember.IsNull())
      {
        m_logDeliveryConfigurations.push_back(logDeliveryConfigurationsMember);
        logDeliveryConfigurationsMember = logDeliveryConfigurationsMember.NextNode("member");
      }

      m_logDeliveryConfigurationsHasBeenSet = true;
    }
    XmlNode transitEncryptionEnabledNode = resultNode.FirstChild("TransitEncryptionEnabled");
    if(!transitEncryptionEnabledNode.IsNull())
    {
      m_transitEncryptionEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitEncryptionEnabledNode.GetText()).c_str()).c_str());
      m_transitEncryptionEnabledHasBeenSet = true;
    }
    XmlNode transitEncryptionModeNode = resultNode.FirstChild("TransitEncryptionMode");
    if(!transitEncryptionModeNode.IsNull())
    {
      m_transitEncryptionMode = TransitEncryptionModeMapper::GetTransitEncryptionModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitEncryptionModeNode.GetText()).c_str()).c_str());
      m_transitEncryptionModeHasBeenSet = true;
    }
    XmlNode clusterModeNode = resultNode.FirstChild("ClusterMode");
    if(!clusterModeNode.IsNull())
    {
      m_clusterMode = ClusterModeMapper::GetClusterModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterModeNode.GetText()).c_str()).c_str());
      m_clusterModeHasBeenSet = true;
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

  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location << index << locationValue << ".LogDeliveryConfigurations.member." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }

  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }

  if(m_transitEncryptionModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitEncryptionMode=" << TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode) << "&";
  }

  if(m_clusterModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterMode=" << ClusterModeMapper::GetNameForClusterMode(m_clusterMode) << "&";
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
  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location <<  ".LogDeliveryConfigurations.member." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }
  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }
  if(m_transitEncryptionModeHasBeenSet)
  {
      oStream << location << ".TransitEncryptionMode=" << TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode) << "&";
  }
  if(m_clusterModeHasBeenSet)
  {
      oStream << location << ".ClusterMode=" << ClusterModeMapper::GetNameForClusterMode(m_clusterMode) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
