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
#include <aws/ec2/model/HistoryRecord.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

HistoryRecord::HistoryRecord() : 
    m_timestamp(0.0),
    m_timestampHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventInformationHasBeenSet(false)
{
}

HistoryRecord::HistoryRecord(const XmlNode& xmlNode) : 
    m_timestamp(0.0),
    m_timestampHasBeenSet(false),
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
      m_timestamp = StringUtils::ConvertToDouble(StringUtils::Trim(timestampNode.GetText().c_str()).c_str());
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
      oStream << location << index << locationValue << ".Timestamp=" << m_timestamp << "&";
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
      oStream << location << ".Timestamp=" << m_timestamp << "&";
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
