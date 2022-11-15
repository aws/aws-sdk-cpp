/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TypeConfigurationDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

TypeConfigurationDetails::TypeConfigurationDetails() : 
    m_arnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_typeArnHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_isDefaultConfiguration(false),
    m_isDefaultConfigurationHasBeenSet(false)
{
}

TypeConfigurationDetails::TypeConfigurationDetails(const XmlNode& xmlNode) : 
    m_arnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_typeArnHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_isDefaultConfiguration(false),
    m_isDefaultConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

TypeConfigurationDetails& TypeConfigurationDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = Aws::Utils::Xml::DecodeEscapedXmlText(aliasNode.GetText());
      m_aliasHasBeenSet = true;
    }
    XmlNode configurationNode = resultNode.FirstChild("Configuration");
    if(!configurationNode.IsNull())
    {
      m_configuration = Aws::Utils::Xml::DecodeEscapedXmlText(configurationNode.GetText());
      m_configurationHasBeenSet = true;
    }
    XmlNode lastUpdatedNode = resultNode.FirstChild("LastUpdated");
    if(!lastUpdatedNode.IsNull())
    {
      m_lastUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedHasBeenSet = true;
    }
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if(!typeArnNode.IsNull())
    {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
      m_typeArnHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
    XmlNode isDefaultConfigurationNode = resultNode.FirstChild("IsDefaultConfiguration");
    if(!isDefaultConfigurationNode.IsNull())
    {
      m_isDefaultConfiguration = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultConfigurationNode.GetText()).c_str()).c_str());
      m_isDefaultConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void TypeConfigurationDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_aliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".Alias=" << StringUtils::URLEncode(m_alias.c_str()) << "&";
  }

  if(m_configurationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Configuration=" << StringUtils::URLEncode(m_configuration.c_str()) << "&";
  }

  if(m_lastUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdated=" << StringUtils::URLEncode(m_lastUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_typeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_isDefaultConfigurationHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefaultConfiguration=" << std::boolalpha << m_isDefaultConfiguration << "&";
  }

}

void TypeConfigurationDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_aliasHasBeenSet)
  {
      oStream << location << ".Alias=" << StringUtils::URLEncode(m_alias.c_str()) << "&";
  }
  if(m_configurationHasBeenSet)
  {
      oStream << location << ".Configuration=" << StringUtils::URLEncode(m_configuration.c_str()) << "&";
  }
  if(m_lastUpdatedHasBeenSet)
  {
      oStream << location << ".LastUpdated=" << StringUtils::URLEncode(m_lastUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_typeArnHasBeenSet)
  {
      oStream << location << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }
  if(m_typeNameHasBeenSet)
  {
      oStream << location << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }
  if(m_isDefaultConfigurationHasBeenSet)
  {
      oStream << location << ".IsDefaultConfiguration=" << std::boolalpha << m_isDefaultConfiguration << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
