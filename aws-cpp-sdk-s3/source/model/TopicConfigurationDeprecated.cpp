﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/TopicConfigurationDeprecated.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

TopicConfigurationDeprecated::TopicConfigurationDeprecated() : 
    m_idHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_topicHasBeenSet(false)
{
}

TopicConfigurationDeprecated::TopicConfigurationDeprecated(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_topicHasBeenSet(false)
{
  *this = xmlNode;
}

TopicConfigurationDeprecated& TopicConfigurationDeprecated::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = StringUtils::Trim(idNode.GetText().c_str());
      m_idHasBeenSet = true;
    }
    XmlNode eventsNode = resultNode.FirstChild("Event");
    if(!eventsNode.IsNull())
    {
      XmlNode eventMember = eventsNode;
      while(!eventMember.IsNull())
      {
        m_events.push_back(EventMapper::GetEventForName(StringUtils::Trim(eventMember.GetText().c_str())));
        eventMember = eventMember.NextNode("Event");
      }

      m_eventsHasBeenSet = true;
    }
    XmlNode topicNode = resultNode.FirstChild("Topic");
    if(!topicNode.IsNull())
    {
      m_topic = StringUtils::Trim(topicNode.GetText().c_str());
      m_topicHasBeenSet = true;
    }
  }

  return *this;
}

void TopicConfigurationDeprecated::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_eventsHasBeenSet)
  {
   for(const auto& item : m_events)
   {
     XmlNode eventsNode = parentNode.CreateChildElement("Event");
     eventsNode.SetText(EventMapper::GetNameForEvent(item));
   }
  }

  if(m_topicHasBeenSet)
  {
   XmlNode topicNode = parentNode.CreateChildElement("Event");
   topicNode.SetText(m_topic);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
