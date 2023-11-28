/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ServerlessCache.h>
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

ServerlessCache::ServerlessCache() : 
    m_serverlessCacheNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_fullEngineVersionHasBeenSet(false),
    m_cacheUsageLimitsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_dailySnapshotTimeHasBeenSet(false)
{
}

ServerlessCache::ServerlessCache(const XmlNode& xmlNode) : 
    m_serverlessCacheNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_fullEngineVersionHasBeenSet(false),
    m_cacheUsageLimitsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_readerEndpointHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_dailySnapshotTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ServerlessCache& ServerlessCache::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serverlessCacheNameNode = resultNode.FirstChild("ServerlessCacheName");
    if(!serverlessCacheNameNode.IsNull())
    {
      m_serverlessCacheName = Aws::Utils::Xml::DecodeEscapedXmlText(serverlessCacheNameNode.GetText());
      m_serverlessCacheNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode fullEngineVersionNode = resultNode.FirstChild("FullEngineVersion");
    if(!fullEngineVersionNode.IsNull())
    {
      m_fullEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(fullEngineVersionNode.GetText());
      m_fullEngineVersionHasBeenSet = true;
    }
    XmlNode cacheUsageLimitsNode = resultNode.FirstChild("CacheUsageLimits");
    if(!cacheUsageLimitsNode.IsNull())
    {
      m_cacheUsageLimits = cacheUsageLimitsNode;
      m_cacheUsageLimitsHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode securityGroupIdsNode = resultNode.FirstChild("SecurityGroupIds");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("SecurityGroupId");
      while(!securityGroupIdsMember.IsNull())
      {
        m_securityGroupIds.push_back(securityGroupIdsMember.GetText());
        securityGroupIdsMember = securityGroupIdsMember.NextNode("SecurityGroupId");
      }

      m_securityGroupIdsHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode;
      m_endpointHasBeenSet = true;
    }
    XmlNode readerEndpointNode = resultNode.FirstChild("ReaderEndpoint");
    if(!readerEndpointNode.IsNull())
    {
      m_readerEndpoint = readerEndpointNode;
      m_readerEndpointHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode userGroupIdNode = resultNode.FirstChild("UserGroupId");
    if(!userGroupIdNode.IsNull())
    {
      m_userGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(userGroupIdNode.GetText());
      m_userGroupIdHasBeenSet = true;
    }
    XmlNode subnetIdsNode = resultNode.FirstChild("SubnetIds");
    if(!subnetIdsNode.IsNull())
    {
      XmlNode subnetIdsMember = subnetIdsNode.FirstChild("SubnetId");
      while(!subnetIdsMember.IsNull())
      {
        m_subnetIds.push_back(subnetIdsMember.GetText());
        subnetIdsMember = subnetIdsMember.NextNode("SubnetId");
      }

      m_subnetIdsHasBeenSet = true;
    }
    XmlNode snapshotRetentionLimitNode = resultNode.FirstChild("SnapshotRetentionLimit");
    if(!snapshotRetentionLimitNode.IsNull())
    {
      m_snapshotRetentionLimit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotRetentionLimitNode.GetText()).c_str()).c_str());
      m_snapshotRetentionLimitHasBeenSet = true;
    }
    XmlNode dailySnapshotTimeNode = resultNode.FirstChild("DailySnapshotTime");
    if(!dailySnapshotTimeNode.IsNull())
    {
      m_dailySnapshotTime = Aws::Utils::Xml::DecodeEscapedXmlText(dailySnapshotTimeNode.GetText());
      m_dailySnapshotTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ServerlessCache::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serverlessCacheNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_fullEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".FullEngineVersion=" << StringUtils::URLEncode(m_fullEngineVersion.c_str()) << "&";
  }

  if(m_cacheUsageLimitsHasBeenSet)
  {
      Aws::StringStream cacheUsageLimitsLocationAndMemberSs;
      cacheUsageLimitsLocationAndMemberSs << location << index << locationValue << ".CacheUsageLimits";
      m_cacheUsageLimits.OutputToStream(oStream, cacheUsageLimitsLocationAndMemberSs.str().c_str());
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << index << locationValue << ".SecurityGroupId." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_endpointHasBeenSet)
  {
      Aws::StringStream endpointLocationAndMemberSs;
      endpointLocationAndMemberSs << location << index << locationValue << ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMemberSs.str().c_str());
  }

  if(m_readerEndpointHasBeenSet)
  {
      Aws::StringStream readerEndpointLocationAndMemberSs;
      readerEndpointLocationAndMemberSs << location << index << locationValue << ".ReaderEndpoint";
      m_readerEndpoint.OutputToStream(oStream, readerEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_userGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << index << locationValue << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }

  if(m_dailySnapshotTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DailySnapshotTime=" << StringUtils::URLEncode(m_dailySnapshotTime.c_str()) << "&";
  }

}

void ServerlessCache::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serverlessCacheNameHasBeenSet)
  {
      oStream << location << ".ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_fullEngineVersionHasBeenSet)
  {
      oStream << location << ".FullEngineVersion=" << StringUtils::URLEncode(m_fullEngineVersion.c_str()) << "&";
  }
  if(m_cacheUsageLimitsHasBeenSet)
  {
      Aws::String cacheUsageLimitsLocationAndMember(location);
      cacheUsageLimitsLocationAndMember += ".CacheUsageLimits";
      m_cacheUsageLimits.OutputToStream(oStream, cacheUsageLimitsLocationAndMember.c_str());
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << ".SecurityGroupId." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_endpointHasBeenSet)
  {
      Aws::String endpointLocationAndMember(location);
      endpointLocationAndMember += ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMember.c_str());
  }
  if(m_readerEndpointHasBeenSet)
  {
      Aws::String readerEndpointLocationAndMember(location);
      readerEndpointLocationAndMember += ".ReaderEndpoint";
      m_readerEndpoint.OutputToStream(oStream, readerEndpointLocationAndMember.c_str());
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_userGroupIdHasBeenSet)
  {
      oStream << location << ".UserGroupId=" << StringUtils::URLEncode(m_userGroupId.c_str()) << "&";
  }
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_snapshotRetentionLimitHasBeenSet)
  {
      oStream << location << ".SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }
  if(m_dailySnapshotTimeHasBeenSet)
  {
      oStream << location << ".DailySnapshotTime=" << StringUtils::URLEncode(m_dailySnapshotTime.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
