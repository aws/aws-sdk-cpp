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

PendingModifiedValues::PendingModifiedValues() : 
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_authTokenStatus(AuthTokenUpdateStatus::NOT_SET),
    m_authTokenStatusHasBeenSet(false)
{
}

PendingModifiedValues::PendingModifiedValues(const XmlNode& xmlNode) : 
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheNodeTypeHasBeenSet(false),
    m_authTokenStatus(AuthTokenUpdateStatus::NOT_SET),
    m_authTokenStatusHasBeenSet(false)
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
      m_authTokenStatus = AuthTokenUpdateStatusMapper::GetAuthTokenUpdateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authTokenStatusNode.GetText()).c_str()).c_str());
      m_authTokenStatusHasBeenSet = true;
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

  if(m_authTokenStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthTokenStatus=" << AuthTokenUpdateStatusMapper::GetNameForAuthTokenUpdateStatus(m_authTokenStatus) << "&";
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
  if(m_authTokenStatusHasBeenSet)
  {
      oStream << location << ".AuthTokenStatus=" << AuthTokenUpdateStatusMapper::GetNameForAuthTokenUpdateStatus(m_authTokenStatus) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
