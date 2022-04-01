/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode cacheParameterGroupFamilyNode = resultNode.FirstChild("CacheParameterGroupFamily");
    if(!cacheParameterGroupFamilyNode.IsNull())
    {
      m_cacheParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(cacheParameterGroupFamilyNode.GetText());
      m_cacheParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode cacheEngineDescriptionNode = resultNode.FirstChild("CacheEngineDescription");
    if(!cacheEngineDescriptionNode.IsNull())
    {
      m_cacheEngineDescription = Aws::Utils::Xml::DecodeEscapedXmlText(cacheEngineDescriptionNode.GetText());
      m_cacheEngineDescriptionHasBeenSet = true;
    }
    XmlNode cacheEngineVersionDescriptionNode = resultNode.FirstChild("CacheEngineVersionDescription");
    if(!cacheEngineVersionDescriptionNode.IsNull())
    {
      m_cacheEngineVersionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(cacheEngineVersionDescriptionNode.GetText());
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
