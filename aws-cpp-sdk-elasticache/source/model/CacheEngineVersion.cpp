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

#include <aws/elasticache/model/CacheEngineVersion.h>
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

CacheEngineVersion::CacheEngineVersion() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_cacheEngineDescriptionHasBeenSet(false),
    m_cacheEngineVersionDescriptionHasBeenSet(false)
{
}

CacheEngineVersion::CacheEngineVersion(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_cacheEngineDescriptionHasBeenSet(false),
    m_cacheEngineVersionDescriptionHasBeenSet(false)
{
  *this = xmlNode;
}

CacheEngineVersion& CacheEngineVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode cacheParameterGroupFamilyNode = resultNode.FirstChild("CacheParameterGroupFamily");
    if(!cacheParameterGroupFamilyNode.IsNull())
    {
      m_cacheParameterGroupFamily = cacheParameterGroupFamilyNode.GetText();
      m_cacheParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode cacheEngineDescriptionNode = resultNode.FirstChild("CacheEngineDescription");
    if(!cacheEngineDescriptionNode.IsNull())
    {
      m_cacheEngineDescription = cacheEngineDescriptionNode.GetText();
      m_cacheEngineDescriptionHasBeenSet = true;
    }
    XmlNode cacheEngineVersionDescriptionNode = resultNode.FirstChild("CacheEngineVersionDescription");
    if(!cacheEngineVersionDescriptionNode.IsNull())
    {
      m_cacheEngineVersionDescription = cacheEngineVersionDescriptionNode.GetText();
      m_cacheEngineVersionDescriptionHasBeenSet = true;
    }
  }

  return *this;
}

void CacheEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }

  if(m_cacheEngineDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheEngineDescription=" << StringUtils::URLEncode(m_cacheEngineDescription.c_str()) << "&";
  }

  if(m_cacheEngineVersionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheEngineVersionDescription=" << StringUtils::URLEncode(m_cacheEngineVersionDescription.c_str()) << "&";
  }

}

void CacheEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }
  if(m_cacheEngineDescriptionHasBeenSet)
  {
      oStream << location << ".CacheEngineDescription=" << StringUtils::URLEncode(m_cacheEngineDescription.c_str()) << "&";
  }
  if(m_cacheEngineVersionDescriptionHasBeenSet)
  {
      oStream << location << ".CacheEngineVersionDescription=" << StringUtils::URLEncode(m_cacheEngineVersionDescription.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
