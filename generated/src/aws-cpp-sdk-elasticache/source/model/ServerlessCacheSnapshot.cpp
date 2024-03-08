/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ServerlessCacheSnapshot.h>
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

ServerlessCacheSnapshot::ServerlessCacheSnapshot() : 
    m_serverlessCacheSnapshotNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_bytesUsedForCacheHasBeenSet(false),
    m_serverlessCacheConfigurationHasBeenSet(false)
{
}

ServerlessCacheSnapshot::ServerlessCacheSnapshot(const XmlNode& xmlNode) : 
    m_serverlessCacheSnapshotNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_bytesUsedForCacheHasBeenSet(false),
    m_serverlessCacheConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

ServerlessCacheSnapshot& ServerlessCacheSnapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serverlessCacheSnapshotNameNode = resultNode.FirstChild("ServerlessCacheSnapshotName");
    if(!serverlessCacheSnapshotNameNode.IsNull())
    {
      m_serverlessCacheSnapshotName = Aws::Utils::Xml::DecodeEscapedXmlText(serverlessCacheSnapshotNameNode.GetText());
      m_serverlessCacheSnapshotNameHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode snapshotTypeNode = resultNode.FirstChild("SnapshotType");
    if(!snapshotTypeNode.IsNull())
    {
      m_snapshotType = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTypeNode.GetText());
      m_snapshotTypeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode expiryTimeNode = resultNode.FirstChild("ExpiryTime");
    if(!expiryTimeNode.IsNull())
    {
      m_expiryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expiryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_expiryTimeHasBeenSet = true;
    }
    XmlNode bytesUsedForCacheNode = resultNode.FirstChild("BytesUsedForCache");
    if(!bytesUsedForCacheNode.IsNull())
    {
      m_bytesUsedForCache = Aws::Utils::Xml::DecodeEscapedXmlText(bytesUsedForCacheNode.GetText());
      m_bytesUsedForCacheHasBeenSet = true;
    }
    XmlNode serverlessCacheConfigurationNode = resultNode.FirstChild("ServerlessCacheConfiguration");
    if(!serverlessCacheConfigurationNode.IsNull())
    {
      m_serverlessCacheConfiguration = serverlessCacheConfigurationNode;
      m_serverlessCacheConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void ServerlessCacheSnapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serverlessCacheSnapshotNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_serverlessCacheSnapshotName.c_str()) << "&";
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_expiryTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpiryTime=" << StringUtils::URLEncode(m_expiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_bytesUsedForCacheHasBeenSet)
  {
      oStream << location << index << locationValue << ".BytesUsedForCache=" << StringUtils::URLEncode(m_bytesUsedForCache.c_str()) << "&";
  }

  if(m_serverlessCacheConfigurationHasBeenSet)
  {
      Aws::StringStream serverlessCacheConfigurationLocationAndMemberSs;
      serverlessCacheConfigurationLocationAndMemberSs << location << index << locationValue << ".ServerlessCacheConfiguration";
      m_serverlessCacheConfiguration.OutputToStream(oStream, serverlessCacheConfigurationLocationAndMemberSs.str().c_str());
  }

}

void ServerlessCacheSnapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serverlessCacheSnapshotNameHasBeenSet)
  {
      oStream << location << ".ServerlessCacheSnapshotName=" << StringUtils::URLEncode(m_serverlessCacheSnapshotName.c_str()) << "&";
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_expiryTimeHasBeenSet)
  {
      oStream << location << ".ExpiryTime=" << StringUtils::URLEncode(m_expiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_bytesUsedForCacheHasBeenSet)
  {
      oStream << location << ".BytesUsedForCache=" << StringUtils::URLEncode(m_bytesUsedForCache.c_str()) << "&";
  }
  if(m_serverlessCacheConfigurationHasBeenSet)
  {
      Aws::String serverlessCacheConfigurationLocationAndMember(location);
      serverlessCacheConfigurationLocationAndMember += ".ServerlessCacheConfiguration";
      m_serverlessCacheConfiguration.OutputToStream(oStream, serverlessCacheConfigurationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
