/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/SearchFilter.h>
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

SearchFilter::SearchFilter() : 
    m_attributeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

SearchFilter::SearchFilter(const XmlNode& xmlNode) : 
    m_attributeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

SearchFilter& SearchFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNode = resultNode.FirstChild("Attribute");
    if(!attributeNode.IsNull())
    {
      m_attribute = Aws::Utils::Xml::DecodeEscapedXmlText(attributeNode.GetText());
      m_attributeHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("Operator");
    if(!operatorNode.IsNull())
    {
      m_operator = Aws::Utils::Xml::DecodeEscapedXmlText(operatorNode.GetText());
      m_operatorHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void SearchFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Attribute=" << StringUtils::URLEncode(m_attribute.c_str()) << "&";
  }

  if(m_operatorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Operator=" << StringUtils::URLEncode(m_operator.c_str()) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void SearchFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << ".Attribute=" << StringUtils::URLEncode(m_attribute.c_str()) << "&";
  }
  if(m_operatorHasBeenSet)
  {
      oStream << location << ".Operator=" << StringUtils::URLEncode(m_operator.c_str()) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
