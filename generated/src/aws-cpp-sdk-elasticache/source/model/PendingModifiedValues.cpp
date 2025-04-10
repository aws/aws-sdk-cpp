/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/PendingModifiedValues.h>
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

PendingModifiedValues::PendingModifiedValues(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

PendingModifiedValues& PendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode numCacheNodesNode = resultNode.FirstChild("NumCacheNodes");
    if(!numCacheNodesNode.IsNull())
    {
      m_numCacheNodes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numCacheNodesNode.GetText()).c_str()).c_str());
      m_numCacheNodesHasBeenSet = true;
    }
    XmlNode cacheNodeIdsToRemoveNode = resultNode.FirstChild("CacheNodeIdsToRemove");
    if(!cacheNodeIdsToRemoveNode.IsNull())
    {
      XmlNode cacheNodeIdsToRemoveMember = cacheNodeIdsToRemoveNode.FirstChild("CacheNodeId");
      m_cacheNodeIdsToRemoveHasBeenSet = !cacheNodeIdsToRemoveMember.IsNull();
      while(!cacheNodeIdsToRemoveMember.IsNull())
      {
        m_cacheNodeIdsToRemove.push_back(cacheNodeIdsToRemoveMember.GetText());
        cacheNodeIdsToRemoveMember = cacheNodeIdsToRemoveMember.NextNode("CacheNodeId");
      }

      m_cacheNodeIdsToRemoveHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeTypeNode.GetText());
      m_cacheNodeTypeHasBeenSet = true;
    }
    XmlNode authTokenStatusNode = resultNode.FirstChild("AuthTokenStatus");
    if(!authTokenStatusNode.IsNull())
    {
      m_authTokenStatus = AuthTokenUpdateStatusMapper::GetAuthTokenUpdateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenStatusNode.GetText()).c_str()));
      m_authTokenStatusHasBeenSet = true;
    }
    XmlNode logDeliveryConfigurationsNode = resultNode.FirstChild("LogDeliveryConfigurations");
    if(!logDeliveryConfigurationsNode.IsNull())
    {
      XmlNode logDeliveryConfigurationsMember = logDeliveryConfigurationsNode.FirstChild("member");
      m_logDeliveryConfigurationsHasBeenSet = !logDeliveryConfigurationsMember.IsNull();
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
      m_transitEncryptionMode = TransitEncryptionModeMapper::GetTransitEncryptionModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitEncryptionModeNode.GetText()).c_str()));
      m_transitEncryptionModeHasBeenSet = true;
    }
    XmlNode scaleConfigNode = resultNode.FirstChild("ScaleConfig");
    if(!scaleConfigNode.IsNull())
    {
      m_scaleConfig = scaleConfigNode;
      m_scaleConfigHasBeenSet = true;
    }
  }

  return *this;
}

void PendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_numCacheNodesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumCacheNodes=" << m_numCacheNodes << "&";
  }

  if(m_cacheNodeIdsToRemoveHasBeenSet)
  {
      unsigned cacheNodeIdsToRemoveIdx = 1;
      for(auto& item : m_cacheNodeIdsToRemove)
      {
        oStream << location << index << locationValue << ".CacheNodeIdsToRemove.CacheNodeId." << cacheNodeIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_authTokenStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenStatus=" << StringUtils::URLEncode(AuthTokenUpdateStatusMapper::GetNameForAuthTokenUpdateStatus(m_authTokenStatus)) << "&";
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
      oStream << location << index << locationValue << ".TransitEncryptionMode=" << StringUtils::URLEncode(TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode)) << "&";
  }

  if(m_scaleConfigHasBeenSet)
  {
      Aws::StringStream scaleConfigLocationAndMemberSs;
      scaleConfigLocationAndMemberSs << location << index << locationValue << ".ScaleConfig";
      m_scaleConfig.OutputToStream(oStream, scaleConfigLocationAndMemberSs.str().c_str());
  }

}

void PendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_numCacheNodesHasBeenSet)
  {
      oStream << location << ".NumCacheNodes=" << m_numCacheNodes << "&";
  }
  if(m_cacheNodeIdsToRemoveHasBeenSet)
  {
      unsigned cacheNodeIdsToRemoveIdx = 1;
      for(auto& item : m_cacheNodeIdsToRemove)
      {
        oStream << location << ".CacheNodeIdsToRemove.CacheNodeId." << cacheNodeIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }
  if(m_authTokenStatusHasBeenSet)
  {
      oStream << location << ".AuthTokenStatus=" << StringUtils::URLEncode(AuthTokenUpdateStatusMapper::GetNameForAuthTokenUpdateStatus(m_authTokenStatus)) << "&";
  }
  if(m_logDeliveryConfigurationsHasBeenSet)
  {
      unsigned logDeliveryConfigurationsIdx = 1;
      for(auto& item : m_logDeliveryConfigurations)
      {
        Aws::StringStream logDeliveryConfigurationsSs;
        logDeliveryConfigurationsSs << location << ".LogDeliveryConfigurations.member." << logDeliveryConfigurationsIdx++;
        item.OutputToStream(oStream, logDeliveryConfigurationsSs.str().c_str());
      }
  }
  if(m_transitEncryptionEnabledHasBeenSet)
  {
      oStream << location << ".TransitEncryptionEnabled=" << std::boolalpha << m_transitEncryptionEnabled << "&";
  }
  if(m_transitEncryptionModeHasBeenSet)
  {
      oStream << location << ".TransitEncryptionMode=" << StringUtils::URLEncode(TransitEncryptionModeMapper::GetNameForTransitEncryptionMode(m_transitEncryptionMode)) << "&";
  }
  if(m_scaleConfigHasBeenSet)
  {
      Aws::String scaleConfigLocationAndMember(location);
      scaleConfigLocationAndMember += ".ScaleConfig";
      m_scaleConfig.OutputToStream(oStream, scaleConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
