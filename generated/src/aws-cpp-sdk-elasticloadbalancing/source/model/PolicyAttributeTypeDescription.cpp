﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/PolicyAttributeTypeDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

PolicyAttributeTypeDescription::PolicyAttributeTypeDescription() : 
    m_attributeNameHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_cardinalityHasBeenSet(false)
{
}

PolicyAttributeTypeDescription::PolicyAttributeTypeDescription(const XmlNode& xmlNode) : 
    m_attributeNameHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_cardinalityHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyAttributeTypeDescription& PolicyAttributeTypeDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("AttributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = Aws::Utils::Xml::DecodeEscapedXmlText(attributeNameNode.GetText());
      m_attributeNameHasBeenSet = true;
    }
    XmlNode attributeTypeNode = resultNode.FirstChild("AttributeType");
    if(!attributeTypeNode.IsNull())
    {
      m_attributeType = Aws::Utils::Xml::DecodeEscapedXmlText(attributeTypeNode.GetText());
      m_attributeTypeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode cardinalityNode = resultNode.FirstChild("Cardinality");
    if(!cardinalityNode.IsNull())
    {
      m_cardinality = Aws::Utils::Xml::DecodeEscapedXmlText(cardinalityNode.GetText());
      m_cardinalityHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyAttributeTypeDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeType=" << StringUtils::URLEncode(m_attributeType.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_cardinalityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cardinality=" << StringUtils::URLEncode(m_cardinality.c_str()) << "&";
  }

}

void PolicyAttributeTypeDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_attributeTypeHasBeenSet)
  {
      oStream << location << ".AttributeType=" << StringUtils::URLEncode(m_attributeType.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_cardinalityHasBeenSet)
  {
      oStream << location << ".Cardinality=" << StringUtils::URLEncode(m_cardinality.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
