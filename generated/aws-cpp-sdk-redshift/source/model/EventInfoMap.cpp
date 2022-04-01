/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/EventInfoMap.h>
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

EventInfoMap::EventInfoMap() : 
    m_eventIdHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_severityHasBeenSet(false)
{
}

EventInfoMap::EventInfoMap(const XmlNode& xmlNode) : 
    m_eventIdHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_severityHasBeenSet(false)
{
  *this = xmlNode;
}

EventInfoMap& EventInfoMap::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eventIdNode = resultNode.FirstChild("EventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = Aws::Utils::Xml::DecodeEscapedXmlText(eventIdNode.GetText());
      m_eventIdHasBeenSet = true;
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
    XmlNode eventDescriptionNode = resultNode.FirstChild("EventDescription");
    if(!eventDescriptionNode.IsNull())
    {
      m_eventDescription = Aws::Utils::Xml::DecodeEscapedXmlText(eventDescriptionNode.GetText());
      m_eventDescriptionHasBeenSet = true;
    }
    XmlNode severityNode = resultNode.FirstChild("Severity");
    if(!severityNode.IsNull())
    {
      m_severity = Aws::Utils::Xml::DecodeEscapedXmlText(severityNode.GetText());
      m_severityHasBeenSet = true;
    }
  }

  return *this;
}

void EventInfoMap::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_eventIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << index << locationValue << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_eventDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventDescription=" << StringUtils::URLEncode(m_eventDescription.c_str()) << "&";
  }

  if(m_severityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }

}

void EventInfoMap::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_eventIdHasBeenSet)
  {
      oStream << location << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }
  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_eventDescriptionHasBeenSet)
  {
      oStream << location << ".EventDescription=" << StringUtils::URLEncode(m_eventDescription.c_str()) << "&";
  }
  if(m_severityHasBeenSet)
  {
      oStream << location << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
