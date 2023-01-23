/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TypeVersionSummary.h>
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

TypeVersionSummary::TypeVersionSummary() : 
    m_type(RegistryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_timeCreatedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publicVersionNumberHasBeenSet(false)
{
}

TypeVersionSummary::TypeVersionSummary(const XmlNode& xmlNode) : 
    m_type(RegistryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_timeCreatedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publicVersionNumberHasBeenSet(false)
{
  *this = xmlNode;
}

TypeVersionSummary& TypeVersionSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RegistryTypeMapper::GetRegistryTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
    XmlNode versionIdNode = resultNode.FirstChild("VersionId");
    if(!versionIdNode.IsNull())
    {
      m_versionId = Aws::Utils::Xml::DecodeEscapedXmlText(versionIdNode.GetText());
      m_versionIdHasBeenSet = true;
    }
    XmlNode isDefaultVersionNode = resultNode.FirstChild("IsDefaultVersion");
    if(!isDefaultVersionNode.IsNull())
    {
      m_isDefaultVersion = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultVersionNode.GetText()).c_str()).c_str());
      m_isDefaultVersionHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode timeCreatedNode = resultNode.FirstChild("TimeCreated");
    if(!timeCreatedNode.IsNull())
    {
      m_timeCreated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeCreatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timeCreatedHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode publicVersionNumberNode = resultNode.FirstChild("PublicVersionNumber");
    if(!publicVersionNumberNode.IsNull())
    {
      m_publicVersionNumber = Aws::Utils::Xml::DecodeEscapedXmlText(publicVersionNumberNode.GetText());
      m_publicVersionNumberHasBeenSet = true;
    }
  }

  return *this;
}

void TypeVersionSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << RegistryTypeMapper::GetNameForRegistryType(m_type) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_versionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionId=" << StringUtils::URLEncode(m_versionId.c_str()) << "&";
  }

  if(m_isDefaultVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefaultVersion=" << std::boolalpha << m_isDefaultVersion << "&";
  }

  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_timeCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".TimeCreated=" << StringUtils::URLEncode(m_timeCreated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_publicVersionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicVersionNumber=" << StringUtils::URLEncode(m_publicVersionNumber.c_str()) << "&";
  }

}

void TypeVersionSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << RegistryTypeMapper::GetNameForRegistryType(m_type) << "&";
  }
  if(m_typeNameHasBeenSet)
  {
      oStream << location << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }
  if(m_versionIdHasBeenSet)
  {
      oStream << location << ".VersionId=" << StringUtils::URLEncode(m_versionId.c_str()) << "&";
  }
  if(m_isDefaultVersionHasBeenSet)
  {
      oStream << location << ".IsDefaultVersion=" << std::boolalpha << m_isDefaultVersion << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_timeCreatedHasBeenSet)
  {
      oStream << location << ".TimeCreated=" << StringUtils::URLEncode(m_timeCreated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_publicVersionNumberHasBeenSet)
  {
      oStream << location << ".PublicVersionNumber=" << StringUtils::URLEncode(m_publicVersionNumber.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
