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

#include <aws/elasticache/model/CacheParameterGroup.h>
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

CacheParameterGroup::CacheParameterGroup() : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CacheParameterGroup::CacheParameterGroup(const XmlNode& xmlNode) : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

CacheParameterGroup& CacheParameterGroup::operator =(const XmlNode& xmlNode)
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
    XmlNode cacheParameterGroupFamilyNode = resultNode.FirstChild("CacheParameterGroupFamily");
    if(!cacheParameterGroupFamilyNode.IsNull())
    {
      m_cacheParameterGroupFamily = cacheParameterGroupFamilyNode.GetText();
      m_cacheParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void CacheParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void CacheParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }
  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
