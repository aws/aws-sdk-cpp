/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/Item.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

Item::Item() : 
    m_nameHasBeenSet(false),
    m_alternateNameEncodingHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Item::Item(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_alternateNameEncodingHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = xmlNode;
}

Item& Item::operator =(const XmlNode& xmlNode)
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
    XmlNode alternateNameEncodingNode = resultNode.FirstChild("AlternateNameEncoding");
    if(!alternateNameEncodingNode.IsNull())
    {
      m_alternateNameEncoding = Aws::Utils::Xml::DecodeEscapedXmlText(alternateNameEncodingNode.GetText());
      m_alternateNameEncodingHasBeenSet = true;
    }
    XmlNode attributesNode = resultNode.FirstChild("Attribute");
    if(!attributesNode.IsNull())
    {
      XmlNode attributeMember = attributesNode;
      while(!attributeMember.IsNull())
      {
        m_attributes.push_back(attributeMember);
        attributeMember = attributeMember.NextNode("Attribute");
      }

      m_attributesHasBeenSet = true;
    }
  }

  return *this;
}

void Item::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_alternateNameEncodingHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlternateNameEncoding=" << StringUtils::URLEncode(m_alternateNameEncoding.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        Aws::StringStream attributesSs;
        attributesSs << location << index << locationValue << ".Attribute." << attributesIdx++;
        item.OutputToStream(oStream, attributesSs.str().c_str());
      }
  }

}

void Item::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_alternateNameEncodingHasBeenSet)
  {
      oStream << location << ".AlternateNameEncoding=" << StringUtils::URLEncode(m_alternateNameEncoding.c_str()) << "&";
  }
  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        Aws::StringStream attributesSs;
        attributesSs << location <<  ".Attribute." << attributesIdx++;
        item.OutputToStream(oStream, attributesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
