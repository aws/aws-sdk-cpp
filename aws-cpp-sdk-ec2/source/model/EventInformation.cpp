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

#include <aws/ec2/model/EventInformation.h>
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

EventInformation::EventInformation() : 
    m_eventDescriptionHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

EventInformation::EventInformation(const XmlNode& xmlNode) : 
    m_eventDescriptionHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
  *this = xmlNode;
}

EventInformation& EventInformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eventDescriptionNode = resultNode.FirstChild("eventDescription");
    if(!eventDescriptionNode.IsNull())
    {
      m_eventDescription = eventDescriptionNode.GetText();
      m_eventDescriptionHasBeenSet = true;
    }
    XmlNode eventSubTypeNode = resultNode.FirstChild("eventSubType");
    if(!eventSubTypeNode.IsNull())
    {
      m_eventSubType = eventSubTypeNode.GetText();
      m_eventSubTypeHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
  }

  return *this;
}

void EventInformation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_eventDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventDescription=" << StringUtils::URLEncode(m_eventDescription.c_str()) << "&";
  }

  if(m_eventSubTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventSubType=" << StringUtils::URLEncode(m_eventSubType.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

}

void EventInformation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_eventDescriptionHasBeenSet)
  {
      oStream << location << ".EventDescription=" << StringUtils::URLEncode(m_eventDescription.c_str()) << "&";
  }
  if(m_eventSubTypeHasBeenSet)
  {
      oStream << location << ".EventSubType=" << StringUtils::URLEncode(m_eventSubType.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
