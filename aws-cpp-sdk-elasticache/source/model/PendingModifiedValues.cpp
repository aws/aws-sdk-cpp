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
#include <aws/elasticache/model/PendingModifiedValues.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

PendingModifiedValues::PendingModifiedValues() : 
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

PendingModifiedValues::PendingModifiedValues(const XmlNode& xmlNode) : 
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
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
      m_numCacheNodes = StringUtils::ConvertToInt32(StringUtils::Trim(numCacheNodesNode.GetText().c_str()).c_str());
      m_numCacheNodesHasBeenSet = true;
    }
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      while(!cacheNodeIdNode.IsNull())
      {
        m_cacheNodeIdsToRemove.push_back(StringUtils::Trim(cacheNodeIdNode.GetText().c_str()));
        cacheNodeIdNode = cacheNodeIdNode.NextNode("CacheNodeId");
      }

      m_cacheNodeIdsToRemoveHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!cacheNodeIdNode.IsNull())
    {
      m_engineVersion = StringUtils::Trim(engineVersionNode.GetText().c_str());
      m_engineVersionHasBeenSet = true;
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
      for(auto& item : m_cacheNodeIdsToRemove)
      {
        oStream << location << index << locationValue << ".CacheNodeId=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
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
      for(auto& item : m_cacheNodeIdsToRemove)
      {
        oStream << location << ".CacheNodeId=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
}
