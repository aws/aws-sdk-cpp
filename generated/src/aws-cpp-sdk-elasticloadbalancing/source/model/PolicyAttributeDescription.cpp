/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/PolicyAttributeDescription.h>
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

PolicyAttributeDescription::PolicyAttributeDescription() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

PolicyAttributeDescription::PolicyAttributeDescription(const XmlNode& xmlNode) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyAttributeDescription& PolicyAttributeDescription::operator =(const XmlNode& xmlNode)
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
    XmlNode attributeValueNode = resultNode.FirstChild("AttributeValue");
    if(!attributeValueNode.IsNull())
    {
      m_attributeValue = Aws::Utils::Xml::DecodeEscapedXmlText(attributeValueNode.GetText());
      m_attributeValueHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyAttributeDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }

}

void PolicyAttributeDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_attributeValueHasBeenSet)
  {
      oStream << location << ".AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
