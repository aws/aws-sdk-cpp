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
#include <aws/rds/model/Event.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Event::Event() : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_date(0.0),
    m_dateHasBeenSet(false)
{
}

Event::Event(const XmlNode& xmlNode) : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_date(0.0),
    m_dateHasBeenSet(false)
{
  *this = xmlNode;
}

Event& Event::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceIdentifierNode = resultNode.FirstChild("SourceIdentifier");
    if(sourceIdentifierNode.IsNull())
    {
      sourceIdentifierNode = resultNode;
    }

    if(!sourceIdentifierNode.IsNull())
    {
      m_sourceIdentifier = StringUtils::Trim(sourceIdentifierNode.GetText().c_str());
      m_sourceIdentifierHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(sourceTypeNode.IsNull())
    {
      sourceTypeNode = resultNode;
    }

    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = StringUtils::Trim(sourceTypeNode.GetText().c_str());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(messageNode.IsNull())
    {
      messageNode = resultNode;
    }

    if(!messageNode.IsNull())
    {
      m_message = StringUtils::Trim(messageNode.GetText().c_str());
      m_messageHasBeenSet = true;
    }
    XmlNode eventCategoriesNode = resultNode.FirstChild("EventCategories");
    if(!eventCategoriesNode.IsNull())
    {
      XmlNode eventCategoriesMember = eventCategoriesNode.FirstChild("EventCategory");
      while(!eventCategoriesMember.IsNull())
      {
        m_eventCategories.push_back(StringUtils::Trim(eventCategoriesMember.GetText().c_str()));
        eventCategoriesMember = eventCategoriesMember.NextNode("EventCategory");
      }

      m_eventCategoriesHasBeenSet = true;
    }
    XmlNode dateNode = resultNode.FirstChild("Date");
    if(dateNode.IsNull())
    {
      dateNode = resultNode;
    }

    if(!dateNode.IsNull())
    {
      m_date = StringUtils::ConvertToDouble(StringUtils::Trim(dateNode.GetText().c_str()).c_str());
      m_dateHasBeenSet = true;
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
      oStream << location << index << locationValue << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_eventCategoriesHasBeenSet)
  {
      for(auto& item : m_eventCategories)
      {
        oStream << location << index << locationValue << ".EventCategory=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dateHasBeenSet)
  {
      oStream << location << index << locationValue << ".Date=" << m_date << "&";
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
      oStream << location << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_eventCategoriesHasBeenSet)
  {
      for(auto& item : m_eventCategories)
      {
        oStream << location << ".EventCategory=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dateHasBeenSet)
  {
      oStream << location << ".Date=" << m_date << "&";
  }
}
