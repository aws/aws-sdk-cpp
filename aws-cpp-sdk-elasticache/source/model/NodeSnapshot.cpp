/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

NodeSnapshot::NodeSnapshot() : 
    m_cacheNodeIdHasBeenSet(false),
    m_cacheSizeHasBeenSet(false),
    m_cacheNodeCreateTime(0.0),
    m_cacheNodeCreateTimeHasBeenSet(false),
    m_snapshotCreateTime(0.0),
    m_snapshotCreateTimeHasBeenSet(false)
{
}

NodeSnapshot::NodeSnapshot(const XmlNode& xmlNode) : 
    m_cacheNodeIdHasBeenSet(false),
    m_cacheSizeHasBeenSet(false),
    m_cacheNodeCreateTime(0.0),
    m_cacheNodeCreateTimeHasBeenSet(false),
    m_snapshotCreateTime(0.0),
    m_snapshotCreateTimeHasBeenSet(false)
{
  *this = xmlNode;
}

NodeSnapshot& NodeSnapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      m_cacheNodeId = StringUtils::Trim(cacheNodeIdNode.GetText().c_str());
      m_cacheNodeIdHasBeenSet = true;
    }
    XmlNode cacheSizeNode = resultNode.FirstChild("CacheSize");
    if(!cacheSizeNode.IsNull())
    {
      m_cacheSize = StringUtils::Trim(cacheSizeNode.GetText().c_str());
      m_cacheSizeHasBeenSet = true;
    }
    XmlNode cacheNodeCreateTimeNode = resultNode.FirstChild("CacheNodeCreateTime");
    if(!cacheNodeCreateTimeNode.IsNull())
    {
      m_cacheNodeCreateTime = StringUtils::ConvertToDouble(StringUtils::Trim(cacheNodeCreateTimeNode.GetText().c_str()).c_str());
      m_cacheNodeCreateTimeHasBeenSet = true;
    }
    XmlNode snapshotCreateTimeNode = resultNode.FirstChild("SnapshotCreateTime");
    if(!snapshotCreateTimeNode.IsNull())
    {
      m_snapshotCreateTime = StringUtils::ConvertToDouble(StringUtils::Trim(snapshotCreateTimeNode.GetText().c_str()).c_str());
      m_snapshotCreateTimeHasBeenSet = true;
    }
  }

  return *this;
}

void NodeSnapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }
  if(m_cacheSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSize=" << StringUtils::URLEncode(m_cacheSize.c_str()) << "&";
  }
  if(m_cacheNodeCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeCreateTime=" << m_cacheNodeCreateTime << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCreateTime=" << m_snapshotCreateTime << "&";
  }
}

void NodeSnapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }
  if(m_cacheSizeHasBeenSet)
  {
      oStream << location << ".CacheSize=" << StringUtils::URLEncode(m_cacheSize.c_str()) << "&";
  }
  if(m_cacheNodeCreateTimeHasBeenSet)
  {
      oStream << location << ".CacheNodeCreateTime=" << m_cacheNodeCreateTime << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".SnapshotCreateTime=" << m_snapshotCreateTime << "&";
  }
}
