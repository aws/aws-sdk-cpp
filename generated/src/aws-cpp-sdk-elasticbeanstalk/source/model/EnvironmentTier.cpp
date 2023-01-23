/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

EnvironmentTier::EnvironmentTier() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

EnvironmentTier::EnvironmentTier(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = xmlNode;
}

EnvironmentTier& EnvironmentTier::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText());
      m_typeHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText());
      m_versionHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentTier::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if(m_versionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }

}

void EnvironmentTier::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
  if(m_versionHasBeenSet)
  {
      oStream << location << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
