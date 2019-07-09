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

#include <aws/elasticache/model/CacheParameterGroupStatus.h>
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

CacheParameterGroupStatus::CacheParameterGroupStatus() : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_cacheNodeIdsToRebootHasBeenSet(false)
{
}

CacheParameterGroupStatus::CacheParameterGroupStatus(const XmlNode& xmlNode) : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_cacheNodeIdsToRebootHasBeenSet(false)
{
  *this = xmlNode;
}

CacheParameterGroupStatus& CacheParameterGroupStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheParameterGroupNameNode = resultNode.FirstChild("CacheParameterGroupName");
    if(!cacheParameterGroupNameNode.IsNull())
    {
      m_cacheParameterGroupName = cacheParameterGroupNameNode.GetText();
      m_cacheParameterGroupNameHasBeenSet = true;
    }
    XmlNode parameterApplyStatusNode = resultNode.FirstChild("ParameterApplyStatus");
    if(!parameterApplyStatusNode.IsNull())
    {
      m_parameterApplyStatus = parameterApplyStatusNode.GetText();
      m_parameterApplyStatusHasBeenSet = true;
    }
    XmlNode cacheNodeIdsToRebootNode = resultNode.FirstChild("CacheNodeIdsToReboot");
    if(!cacheNodeIdsToRebootNode.IsNull())
    {
      XmlNode cacheNodeIdsToRebootMember = cacheNodeIdsToRebootNode.FirstChild("CacheNodeId");
      while(!cacheNodeIdsToRebootMember.IsNull())
      {
        m_cacheNodeIdsToReboot.push_back(cacheNodeIdsToRebootMember.GetText());
        cacheNodeIdsToRebootMember = cacheNodeIdsToRebootMember.NextNode("CacheNodeId");
      }

      m_cacheNodeIdsToRebootHasBeenSet = true;
    }
  }

  return *this;
}

void CacheParameterGroupStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }

  if(m_cacheNodeIdsToRebootHasBeenSet)
  {
      unsigned cacheNodeIdsToRebootIdx = 1;
      for(auto& item : m_cacheNodeIdsToReboot)
      {
        oStream << location << index << locationValue << ".CacheNodeId." << cacheNodeIdsToRebootIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void CacheParameterGroupStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }
  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }
  if(m_cacheNodeIdsToRebootHasBeenSet)
  {
      unsigned cacheNodeIdsToRebootIdx = 1;
      for(auto& item : m_cacheNodeIdsToReboot)
      {
        oStream << location << ".CacheNodeId." << cacheNodeIdsToRebootIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
