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

#include <aws/neptune/model/EventCategoriesMap.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

EventCategoriesMap::EventCategoriesMap() : 
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
}

EventCategoriesMap::EventCategoriesMap(const XmlNode& xmlNode) : 
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false)
{
  *this = xmlNode;
}

EventCategoriesMap& EventCategoriesMap::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = sourceTypeNode.GetText();
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode eventCategoriesNode = resultNode.FirstChild("EventCategories");
    if(!eventCategoriesNode.IsNull())
    {
      XmlNode eventCategoriesMember = eventCategoriesNode.FirstChild("EventCategory");
      while(!eventCategoriesMember.IsNull())
      {
        m_eventCategories.push_back(eventCategoriesMember.GetText());
        eventCategoriesMember = eventCategoriesMember.NextNode("EventCategory");
      }

      m_eventCategoriesHasBeenSet = true;
    }
  }

  return *this;
}

void EventCategoriesMap::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << index << locationValue << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void EventCategoriesMap::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
