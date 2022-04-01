/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/EventDestination.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

EventDestination::EventDestination() : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_cloudWatchDestinationHasBeenSet(false),
    m_sNSDestinationHasBeenSet(false)
{
}

EventDestination::EventDestination(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_cloudWatchDestinationHasBeenSet(false),
    m_sNSDestinationHasBeenSet(false)
{
  *this = xmlNode;
}

EventDestination& EventDestination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode matchingEventTypesNode = resultNode.FirstChild("MatchingEventTypes");
    if(!matchingEventTypesNode.IsNull())
    {
      XmlNode matchingEventTypesMember = matchingEventTypesNode.FirstChild("member");
      while(!matchingEventTypesMember.IsNull())
      {
        m_matchingEventTypes.push_back(EventTypeMapper::GetEventTypeForName(StringUtils::Trim(matchingEventTypesMember.GetText().c_str())));
        matchingEventTypesMember = matchingEventTypesMember.NextNode("member");
      }

      m_matchingEventTypesHasBeenSet = true;
    }
    XmlNode kinesisFirehoseDestinationNode = resultNode.FirstChild("KinesisFirehoseDestination");
    if(!kinesisFirehoseDestinationNode.IsNull())
    {
      m_kinesisFirehoseDestination = kinesisFirehoseDestinationNode;
      m_kinesisFirehoseDestinationHasBeenSet = true;
    }
    XmlNode cloudWatchDestinationNode = resultNode.FirstChild("CloudWatchDestination");
    if(!cloudWatchDestinationNode.IsNull())
    {
      m_cloudWatchDestination = cloudWatchDestinationNode;
      m_cloudWatchDestinationHasBeenSet = true;
    }
    XmlNode sNSDestinationNode = resultNode.FirstChild("SNSDestination");
    if(!sNSDestinationNode.IsNull())
    {
      m_sNSDestination = sNSDestinationNode;
      m_sNSDestinationHasBeenSet = true;
    }
  }

  return *this;
}

void EventDestination::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_matchingEventTypesHasBeenSet)
  {
      unsigned matchingEventTypesIdx = 1;
      for(auto& item : m_matchingEventTypes)
      {
        oStream << location << index << locationValue << ".MatchingEventTypes.member." << matchingEventTypesIdx++ << "=" << EventTypeMapper::GetNameForEventType(item) << "&";
      }
  }

  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
      Aws::StringStream kinesisFirehoseDestinationLocationAndMemberSs;
      kinesisFirehoseDestinationLocationAndMemberSs << location << index << locationValue << ".KinesisFirehoseDestination";
      m_kinesisFirehoseDestination.OutputToStream(oStream, kinesisFirehoseDestinationLocationAndMemberSs.str().c_str());
  }

  if(m_cloudWatchDestinationHasBeenSet)
  {
      Aws::StringStream cloudWatchDestinationLocationAndMemberSs;
      cloudWatchDestinationLocationAndMemberSs << location << index << locationValue << ".CloudWatchDestination";
      m_cloudWatchDestination.OutputToStream(oStream, cloudWatchDestinationLocationAndMemberSs.str().c_str());
  }

  if(m_sNSDestinationHasBeenSet)
  {
      Aws::StringStream sNSDestinationLocationAndMemberSs;
      sNSDestinationLocationAndMemberSs << location << index << locationValue << ".SNSDestination";
      m_sNSDestination.OutputToStream(oStream, sNSDestinationLocationAndMemberSs.str().c_str());
  }

}

void EventDestination::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_matchingEventTypesHasBeenSet)
  {
      unsigned matchingEventTypesIdx = 1;
      for(auto& item : m_matchingEventTypes)
      {
        oStream << location << ".MatchingEventTypes.member." << matchingEventTypesIdx++ << "=" << EventTypeMapper::GetNameForEventType(item) << "&";
      }
  }
  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
      Aws::String kinesisFirehoseDestinationLocationAndMember(location);
      kinesisFirehoseDestinationLocationAndMember += ".KinesisFirehoseDestination";
      m_kinesisFirehoseDestination.OutputToStream(oStream, kinesisFirehoseDestinationLocationAndMember.c_str());
  }
  if(m_cloudWatchDestinationHasBeenSet)
  {
      Aws::String cloudWatchDestinationLocationAndMember(location);
      cloudWatchDestinationLocationAndMember += ".CloudWatchDestination";
      m_cloudWatchDestination.OutputToStream(oStream, cloudWatchDestinationLocationAndMember.c_str());
  }
  if(m_sNSDestinationHasBeenSet)
  {
      Aws::String sNSDestinationLocationAndMember(location);
      sNSDestinationLocationAndMember += ".SNSDestination";
      m_sNSDestination.OutputToStream(oStream, sNSDestinationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
