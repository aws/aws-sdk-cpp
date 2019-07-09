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

#include <aws/sdb/model/DeletableItem.h>
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

DeletableItem::DeletableItem() : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

DeletableItem::DeletableItem(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = xmlNode;
}

DeletableItem& DeletableItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("ItemName");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
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

void DeletableItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
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

void DeletableItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
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
