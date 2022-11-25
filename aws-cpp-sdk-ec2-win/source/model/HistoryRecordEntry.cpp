/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HistoryRecordEntry.h>
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

HistoryRecordEntry::HistoryRecordEntry() : 
    m_eventInformationHasBeenSet(false),
    m_eventType(FleetEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

HistoryRecordEntry::HistoryRecordEntry(const XmlNode& xmlNode) : 
    m_eventInformationHasBeenSet(false),
    m_eventType(FleetEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = xmlNode;
}

HistoryRecordEntry& HistoryRecordEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eventInformationNode = resultNode.FirstChild("eventInformation");
    if(!eventInformationNode.IsNull())
    {
      m_eventInformation = eventInformationNode;
      m_eventInformationHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("eventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = FleetEventTypeMapper::GetFleetEventTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(eventTypeNode.GetText()).c_str()).c_str());
      m_eventTypeHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
  }

  return *this;
}

void HistoryRecordEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_eventInformationHasBeenSet)
  {
      Aws::StringStream eventInformationLocationAndMemberSs;
      eventInformationLocationAndMemberSs << location << index << locationValue << ".EventInformation";
      m_eventInformation.OutputToStream(oStream, eventInformationLocationAndMemberSs.str().c_str());
  }

  if(m_eventTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventType=" << FleetEventTypeMapper::GetNameForFleetEventType(m_eventType) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void HistoryRecordEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_eventInformationHasBeenSet)
  {
      Aws::String eventInformationLocationAndMember(location);
      eventInformationLocationAndMember += ".EventInformation";
      m_eventInformation.OutputToStream(oStream, eventInformationLocationAndMember.c_str());
  }
  if(m_eventTypeHasBeenSet)
  {
      oStream << location << ".EventType=" << FleetEventTypeMapper::GetNameForFleetEventType(m_eventType) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
