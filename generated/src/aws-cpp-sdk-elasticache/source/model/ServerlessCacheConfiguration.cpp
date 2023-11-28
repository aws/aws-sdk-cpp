/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ServerlessCacheConfiguration.h>
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

ServerlessCacheConfiguration::ServerlessCacheConfiguration() : 
    m_serverlessCacheNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false)
{
}

ServerlessCacheConfiguration::ServerlessCacheConfiguration(const XmlNode& xmlNode) : 
    m_serverlessCacheNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false)
{
  *this = xmlNode;
}

ServerlessCacheConfiguration& ServerlessCacheConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serverlessCacheNameNode = resultNode.FirstChild("ServerlessCacheName");
    if(!serverlessCacheNameNode.IsNull())
    {
      m_serverlessCacheName = Aws::Utils::Xml::DecodeEscapedXmlText(serverlessCacheNameNode.GetText());
      m_serverlessCacheNameHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
      m_majorEngineVersionHasBeenSet = true;
    }
  }

  return *this;
}

void ServerlessCacheConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serverlessCacheNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

}

void ServerlessCacheConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serverlessCacheNameHasBeenSet)
  {
      oStream << location << ".ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
