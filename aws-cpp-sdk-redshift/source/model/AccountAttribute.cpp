/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/redshift/model/AccountAttribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

AccountAttribute::AccountAttribute() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
}

AccountAttribute::AccountAttribute(const XmlNode& xmlNode) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
  *this = xmlNode;
}

AccountAttribute& AccountAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("AttributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = attributeNameNode.GetText();
      m_attributeNameHasBeenSet = true;
    }
    XmlNode attributeValuesNode = resultNode.FirstChild("AttributeValues");
    if(!attributeValuesNode.IsNull())
    {
      XmlNode attributeValuesMember = attributeValuesNode.FirstChild("AttributeValueTarget");
      while(!attributeValuesMember.IsNull())
      {
        m_attributeValues.push_back(attributeValuesMember);
        attributeValuesMember = attributeValuesMember.NextNode("AttributeValueTarget");
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
        attributeValuesSs << location << index << locationValue << ".AttributeValueTarget." << attributeValuesIdx++;
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
        attributeValuesSs << location <<  ".AttributeValueTarget." << attributeValuesIdx++;
        item.OutputToStream(oStream, attributeValuesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
