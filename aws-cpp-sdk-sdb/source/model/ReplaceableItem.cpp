/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sdb/model/ReplaceableItem.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReplaceableItem::ReplaceableItem()
{
}

ReplaceableItem::ReplaceableItem(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReplaceableItem& ReplaceableItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    m_name = StringUtils::Trim(nameNode.GetText().c_str());
    XmlNode attributeNode = resultNode.FirstChild("Attribute");
    while(!attributeNode.IsNull())
    {
      m_attributes.push_back(attributeNode);
      attributeNode = attributeNode.NextNode("Attribute");
    }

  }

  return *this;
}

void ReplaceableItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  for(auto& item : m_attributes)
  {
    Aws::StringStream attributesSs;
    attributesSs << location << index << locationValue << ".Attribute";
    item.OutputToStream(oStream, attributesSs.str().c_str());
  }
}

void ReplaceableItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  for(auto& item : m_attributes)
  {
    Aws::String locationAndListMember(location);
    locationAndListMember += ".Attribute";
    item.OutputToStream(oStream, locationAndListMember.c_str());
  }
}
