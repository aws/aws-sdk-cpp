/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TypeConfigurationIdentifier.h>
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

TypeConfigurationIdentifier::TypeConfigurationIdentifier() : 
    m_typeArnHasBeenSet(false),
    m_typeConfigurationAliasHasBeenSet(false),
    m_typeConfigurationArnHasBeenSet(false),
    m_type(ThirdPartyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false)
{
}

TypeConfigurationIdentifier::TypeConfigurationIdentifier(const XmlNode& xmlNode) : 
    m_typeArnHasBeenSet(false),
    m_typeConfigurationAliasHasBeenSet(false),
    m_typeConfigurationArnHasBeenSet(false),
    m_type(ThirdPartyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false)
{
  *this = xmlNode;
}

TypeConfigurationIdentifier& TypeConfigurationIdentifier::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if(!typeArnNode.IsNull())
    {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
      m_typeArnHasBeenSet = true;
    }
    XmlNode typeConfigurationAliasNode = resultNode.FirstChild("TypeConfigurationAlias");
    if(!typeConfigurationAliasNode.IsNull())
    {
      m_typeConfigurationAlias = Aws::Utils::Xml::DecodeEscapedXmlText(typeConfigurationAliasNode.GetText());
      m_typeConfigurationAliasHasBeenSet = true;
    }
    XmlNode typeConfigurationArnNode = resultNode.FirstChild("TypeConfigurationArn");
    if(!typeConfigurationArnNode.IsNull())
    {
      m_typeConfigurationArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeConfigurationArnNode.GetText());
      m_typeConfigurationArnHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = ThirdPartyTypeMapper::GetThirdPartyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
  }

  return *this;
}

void TypeConfigurationIdentifier::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_typeConfigurationAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeConfigurationAlias=" << StringUtils::URLEncode(m_typeConfigurationAlias.c_str()) << "&";
  }

  if(m_typeConfigurationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeConfigurationArn=" << StringUtils::URLEncode(m_typeConfigurationArn.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

}

void TypeConfigurationIdentifier::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeArnHasBeenSet)
  {
      oStream << location << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }
  if(m_typeConfigurationAliasHasBeenSet)
  {
      oStream << location << ".TypeConfigurationAlias=" << StringUtils::URLEncode(m_typeConfigurationAlias.c_str()) << "&";
  }
  if(m_typeConfigurationArnHasBeenSet)
  {
      oStream << location << ".TypeConfigurationArn=" << StringUtils::URLEncode(m_typeConfigurationArn.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type) << "&";
  }
  if(m_typeNameHasBeenSet)
  {
      oStream << location << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
