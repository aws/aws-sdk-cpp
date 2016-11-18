/*
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
#include <aws/ec2/model/HistoryRecord.h>
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

HistoryRecord::HistoryRecord() : 
    m_timestampHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_eventInformationHasBeenSet(false)
{
}

HistoryRecord::HistoryRecord(const XmlNode& xmlNode) : 
    m_timestampHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_eventInformationHasBeenSet(false)
{
  *this = xmlNode;
}

HistoryRecord& HistoryRecord::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(timestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("eventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = EventTypeMapper::GetEventTypeForName(StringUtils::Trim(eventTypeNode.GetText().c_str()).c_str());
      m_eventTypeHasBeenSet = true;
    }
    XmlNode eventInformationNode = resultNode.FirstChild("eventInformation");
    if(!eventInformationNode.IsNull())
    {
      m_eventInformation = eventInformationNode;
      m_eventInformationHasBeenSet = true;
    }
  }

  return *this;
}

void HistoryRecord::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_eventTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventType=" << EventTypeMapper::GetNameForEventType(m_eventType) << "&";
  }

  if(m_eventInformationHasBeenSet)
  {
      Aws::StringStream eventInformationLocationAndMemberSs;
      eventInformationLocationAndMemberSs << location << index << locationValue << ".EventInformation";
      m_eventInformation.OutputToStream(oStream, eventInformationLocationAndMemberSs.str().c_str());
  }

}

void HistoryRecord::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_eventTypeHasBeenSet)
  {
      oStream << location << ".EventType=" << EventTypeMapper::GetNameForEventType(m_eventType) << "&";
  }
  if(m_eventInformationHasBeenSet)
  {
      Aws::String eventInformationLocationAndMember(location);
      eventInformationLocationAndMember += ".EventInformation";
      m_eventInformation.OutputToStream(oStream, eventInformationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
