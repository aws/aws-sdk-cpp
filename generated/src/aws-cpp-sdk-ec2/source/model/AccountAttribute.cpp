﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AccountAttribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

AccountAttribute::AccountAttribute(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AccountAttribute& AccountAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("attributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = Aws::Utils::Xml::DecodeEscapedXmlText(attributeNameNode.GetText());
      m_attributeNameHasBeenSet = true;
    }
    XmlNode attributeValuesNode = resultNode.FirstChild("attributeValueSet");
    if(!attributeValuesNode.IsNull())
    {
      XmlNode attributeValuesMember = attributeValuesNode.FirstChild("item");
      m_attributeValuesHasBeenSet = !attributeValuesMember.IsNull();
      while(!attributeValuesMember.IsNull())
      {
        m_attributeValues.push_back(attributeValuesMember);
        attributeValuesMember = attributeValuesMember.NextNode("item");
      }

      m_attributeValuesHasBeenSet = true;
    }
  }

  return *this;
}

void AccountAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValuesHasBeenSet)
  {
      unsigned attributeValuesIdx = 1;
      for(auto& item : m_attributeValues)
      {
        Aws::StringStream attributeValuesSs;
        attributeValuesSs << location << index << locationValue << ".AttributeValueSet." << attributeValuesIdx++;
        item.OutputToStream(oStream, attributeValuesSs.str().c_str());
      }
  }

}

void AccountAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_attributeValuesHasBeenSet)
  {
      unsigned attributeValuesIdx = 1;
      for(auto& item : m_attributeValues)
      {
        Aws::StringStream attributeValuesSs;
        attributeValuesSs << location << ".AttributeValueSet." << attributeValuesIdx++;
        item.OutputToStream(oStream, attributeValuesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
