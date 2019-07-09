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

#include <aws/elasticache/model/NodeGroupMember.h>
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

NodeGroupMember::NodeGroupMember() : 
    m_cacheClusterIdHasBeenSet(false),
    m_cacheNodeIdHasBeenSet(false),
    m_readEndpointHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_currentRoleHasBeenSet(false)
{
}

NodeGroupMember::NodeGroupMember(const XmlNode& xmlNode) : 
    m_cacheClusterIdHasBeenSet(false),
    m_cacheNodeIdHasBeenSet(false),
    m_readEndpointHasBeenSet(false),
    m_preferredAvailabilityZoneHasBeenSet(false),
    m_currentRoleHasBeenSet(false)
{
  *this = xmlNode;
}

NodeGroupMember& NodeGroupMember::operator =(const XmlNode& xmlNode)
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
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      m_cacheNodeId = cacheNodeIdNode.GetText();
      m_cacheNodeIdHasBeenSet = true;
    }
    XmlNode readEndpointNode = resultNode.FirstChild("ReadEndpoint");
    if(!readEndpointNode.IsNull())
    {
      m_readEndpoint = readEndpointNode;
      m_readEndpointHasBeenSet = true;
    }
    XmlNode preferredAvailabilityZoneNode = resultNode.FirstChild("PreferredAvailabilityZone");
    if(!preferredAvailabilityZoneNode.IsNull())
    {
      m_preferredAvailabilityZone = preferredAvailabilityZoneNode.GetText();
      m_preferredAvailabilityZoneHasBeenSet = true;
    }
    XmlNode currentRoleNode = resultNode.FirstChild("CurrentRole");
    if(!currentRoleNode.IsNull())
    {
      m_currentRole = currentRoleNode.GetText();
      m_currentRoleHasBeenSet = true;
    }
  }

  return *this;
}

void NodeGroupMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }

  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }

  if(m_readEndpointHasBeenSet)
  {
      Aws::StringStream readEndpointLocationAndMemberSs;
      readEndpointLocationAndMemberSs << location << index << locationValue << ".ReadEndpoint";
      m_readEndpoint.OutputToStream(oStream, readEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_preferredAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreferredAvailabilityZone=" << StringUtils::URLEncode(m_preferredAvailabilityZone.c_str()) << "&";
  }

  if(m_currentRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentRole=" << StringUtils::URLEncode(m_currentRole.c_str()) << "&";
  }

}

void NodeGroupMember::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheClusterIdHasBeenSet)
  {
      oStream << location << ".CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }
  if(m_readEndpointHasBeenSet)
  {
      Aws::String readEndpointLocationAndMember(location);
      readEndpointLocationAndMember += ".ReadEndpoint";
      m_readEndpoint.OutputToStream(oStream, readEndpointLocationAndMember.c_str());
  }
  if(m_preferredAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".PreferredAvailabilityZone=" << StringUtils::URLEncode(m_preferredAvailabilityZone.c_str()) << "&";
  }
  if(m_currentRoleHasBeenSet)
  {
      oStream << location << ".CurrentRole=" << StringUtils::URLEncode(m_currentRole.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
