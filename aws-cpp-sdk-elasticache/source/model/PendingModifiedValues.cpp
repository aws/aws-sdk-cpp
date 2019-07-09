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

PendingModifiedValues::PendingModifiedValues() : 
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false)
{
}

PendingModifiedValues::PendingModifiedValues(const XmlNode& xmlNode) : 
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false)
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
    XmlNode cacheNodeIdsToRemoveNode = resultNode.FirstChild("CacheNodeIdsToRemove");
    if(!cacheNodeIdsToRemoveNode.IsNull())
    {
      XmlNode cacheNodeIdsToRemoveMember = cacheNodeIdsToRemoveNode.FirstChild("CacheNodeId");
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
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = cacheNodeTypeNode.GetText();
      m_cacheNodeTypeHasBeenSet = true;
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
        oStream << location << index << locationValue << ".CacheNodeId." << cacheNodeIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
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
        oStream << location << ".CacheNodeId." << cacheNodeIdsToRemoveIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
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
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
