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

#include <aws/redshift/model/Event.h>
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

Event::Event() : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

Event::Event(const XmlNode& xmlNode) : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
  *this = xmlNode;
}

Event& Event::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceIdentifierNode = resultNode.FirstChild("SourceIdentifier");
    if(!sourceIdentifierNode.IsNull())
    {
      m_sourceIdentifier = sourceIdentifierNode.GetText();
      m_sourceIdentifierHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = SourceTypeMapper::GetSourceTypeForName(StringUtils::Trim(sourceTypeNode.GetText().c_str()).c_str());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = messageNode.GetText();
      m_messageHasBeenSet = true;
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
    XmlNode severityNode = resultNode.FirstChild("Severity");
    if(!severityNode.IsNull())
    {
      m_severity = severityNode.GetText();
      m_severityHasBeenSet = true;
    }
    XmlNode dateNode = resultNode.FirstChild("Date");
    if(!dateNode.IsNull())
    {
      m_date = DateTime(StringUtils::Trim(dateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_dateHasBeenSet = true;
    }
    XmlNode eventIdNode = resultNode.FirstChild("EventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = eventIdNode.GetText();
      m_eventIdHasBeenSet = true;
    }
  }

  return *this;
}

void Event::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << SourceTypeMapper::GetNameForSourceType(m_sourceType) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << index << locationValue << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_severityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }

  if(m_dateHasBeenSet)
  {
      oStream << location << index << locationValue << ".Date=" << StringUtils::URLEncode(m_date.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_eventIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }

}

void Event::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceIdentifierHasBeenSet)
  {
      oStream << location << ".SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << SourceTypeMapper::GetNameForSourceType(m_sourceType) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_severityHasBeenSet)
  {
      oStream << location << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }
  if(m_dateHasBeenSet)
  {
      oStream << location << ".Date=" << StringUtils::URLEncode(m_date.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_eventIdHasBeenSet)
  {
      oStream << location << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
