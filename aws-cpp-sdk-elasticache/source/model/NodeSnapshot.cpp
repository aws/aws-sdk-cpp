/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/elasticache/model/NodeSnapshot.h>
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

NodeSnapshot::NodeSnapshot() : 
    m_cacheClusterIdHasBeenSet(false),
    m_nodeGroupIdHasBeenSet(false),
    m_cacheNodeIdHasBeenSet(false),
    m_nodeGroupConfigurationHasBeenSet(false),
    m_cacheSizeHasBeenSet(false),
    m_cacheNodeCreateTimeHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false)
{
}

NodeSnapshot::NodeSnapshot(const XmlNode& xmlNode) : 
    m_cacheClusterIdHasBeenSet(false),
    m_nodeGroupIdHasBeenSet(false),
    m_cacheNodeIdHasBeenSet(false),
    m_nodeGroupConfigurationHasBeenSet(false),
    m_cacheSizeHasBeenSet(false),
    m_cacheNodeCreateTimeHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false)
{
  *this = xmlNode;
}

NodeSnapshot& NodeSnapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheClusterIdNode = resultNode.FirstChild("CacheClusterId");
    if(!cacheClusterIdNode.IsNull())
    {
      m_cacheClusterId = cacheClusterIdNode.GetText();
      m_cacheClusterIdHasBeenSet = true;
    }
    XmlNode nodeGroupIdNode = resultNode.FirstChild("NodeGroupId");
    if(!nodeGroupIdNode.IsNull())
    {
      m_nodeGroupId = nodeGroupIdNode.GetText();
      m_nodeGroupIdHasBeenSet = true;
    }
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      m_cacheNodeId = cacheNodeIdNode.GetText();
      m_cacheNodeIdHasBeenSet = true;
    }
    XmlNode nodeGroupConfigurationNode = resultNode.FirstChild("NodeGroupConfiguration");
    if(!nodeGroupConfigurationNode.IsNull())
    {
      m_nodeGroupConfiguration = nodeGroupConfigurationNode;
      m_nodeGroupConfigurationHasBeenSet = true;
    }
    XmlNode cacheSizeNode = resultNode.FirstChild("CacheSize");
    if(!cacheSizeNode.IsNull())
    {
      m_cacheSize = cacheSizeNode.GetText();
      m_cacheSizeHasBeenSet = true;
    }
    XmlNode cacheNodeCreateTimeNode = resultNode.FirstChild("CacheNodeCreateTime");
    if(!cacheNodeCreateTimeNode.IsNull())
    {
      m_cacheNodeCreateTime = DateTime(StringUtils::Trim(cacheNodeCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_cacheNodeCreateTimeHasBeenSet = true;
    }
    XmlNode snapshotCreateTimeNode = resultNode.FirstChild("SnapshotCreateTime");
    if(!snapshotCreateTimeNode.IsNull())
    {
      m_snapshotCreateTime = DateTime(StringUtils::Trim(snapshotCreateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_snapshotCreateTimeHasBeenSet = true;
    }
  }

  return *this;
}

void NodeSnapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }

  if(m_nodeGroupConfigurationHasBeenSet)
  {
      Aws::StringStream nodeGroupConfigurationLocationAndMemberSs;
      nodeGroupConfigurationLocationAndMemberSs << location << index << locationValue << ".NodeGroupConfiguration";
      m_nodeGroupConfiguration.OutputToStream(oStream, nodeGroupConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_cacheSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSize=" << StringUtils::URLEncode(m_cacheSize.c_str()) << "&";
  }

  if(m_cacheNodeCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeCreateTime=" << StringUtils::URLEncode(m_cacheNodeCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void NodeSnapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }
  if(m_nodeGroupConfigurationHasBeenSet)
  {
      Aws::String nodeGroupConfigurationLocationAndMember(location);
      nodeGroupConfigurationLocationAndMember += ".NodeGroupConfiguration";
      m_nodeGroupConfiguration.OutputToStream(oStream, nodeGroupConfigurationLocationAndMember.c_str());
  }
  if(m_cacheSizeHasBeenSet)
  {
      oStream << location << ".CacheSize=" << StringUtils::URLEncode(m_cacheSize.c_str()) << "&";
  }
  if(m_cacheNodeCreateTimeHasBeenSet)
  {
      oStream << location << ".CacheNodeCreateTime=" << StringUtils::URLEncode(m_cacheNodeCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
