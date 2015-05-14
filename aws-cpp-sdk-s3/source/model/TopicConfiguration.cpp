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
#include <aws/s3/model/TopicConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

TopicConfiguration::TopicConfiguration() : 
    m_idHasBeenSet(false)
{
}

TopicConfiguration::TopicConfiguration(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false)
{
  *this = xmlNode;
}

TopicConfiguration& TopicConfiguration::operator =(const XmlNode& xmlNode)
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
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    m_topicArn = StringUtils::Trim(topicArnNode.GetText().c_str());
    XmlNode eventNode = resultNode.FirstChild("Event");
    while(!eventNode.IsNull())
    {
      m_events.push_back(EventMapper::GetEventForName(StringUtils::Trim(eventNode.GetText().c_str())));
      eventNode = eventNode.NextNode("Event");
    }

  }

  return *this;
}

void TopicConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Event");
   idNode.SetText(m_id);
  }

  XmlNode topicArnNode = parentNode.CreateChildElement("TopicArn");
  topicArnNode.SetText(m_topicArn);
  for(const auto& item : m_events)
  {
    XmlNode eventsNode = parentNode.CreateChildElement("Event");
    eventsNode.SetText(EventMapper::GetNameForEvent(item));
  }
}
