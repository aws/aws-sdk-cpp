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

#include <aws/ec2/model/VolumeStatusItem.h>
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

VolumeStatusItem::VolumeStatusItem() : 
    m_actionsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_volumeStatusHasBeenSet(false)
{
}

VolumeStatusItem::VolumeStatusItem(const XmlNode& xmlNode) : 
    m_actionsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_volumeStatusHasBeenSet(false)
{
  *this = xmlNode;
}

VolumeStatusItem& VolumeStatusItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionsNode = resultNode.FirstChild("actionsSet");
    if(!actionsNode.IsNull())
    {
      XmlNode actionsMember = actionsNode.FirstChild("item");
      while(!actionsMember.IsNull())
      {
        m_actions.push_back(actionsMember);
        actionsMember = actionsMember.NextNode("item");
      }

      m_actionsHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode eventsNode = resultNode.FirstChild("eventsSet");
    if(!eventsNode.IsNull())
    {
      XmlNode eventsMember = eventsNode.FirstChild("item");
      while(!eventsMember.IsNull())
      {
        m_events.push_back(eventsMember);
        eventsMember = eventsMember.NextNode("item");
      }

      m_eventsHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = volumeIdNode.GetText();
      m_volumeIdHasBeenSet = true;
    }
    XmlNode volumeStatusNode = resultNode.FirstChild("volumeStatus");
    if(!volumeStatusNode.IsNull())
    {
      m_volumeStatus = volumeStatusNode;
      m_volumeStatusHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeStatusItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionsHasBeenSet)
  {
      unsigned actionsIdx = 1;
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location << index << locationValue << ".ActionsSet." << actionsIdx++;
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_eventsHasBeenSet)
  {
      unsigned eventsIdx = 1;
      for(auto& item : m_events)
      {
        Aws::StringStream eventsSs;
        eventsSs << location << index << locationValue << ".EventsSet." << eventsIdx++;
        item.OutputToStream(oStream, eventsSs.str().c_str());
      }
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_volumeStatusHasBeenSet)
  {
      Aws::StringStream volumeStatusLocationAndMemberSs;
      volumeStatusLocationAndMemberSs << location << index << locationValue << ".VolumeStatus";
      m_volumeStatus.OutputToStream(oStream, volumeStatusLocationAndMemberSs.str().c_str());
  }

}

void VolumeStatusItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionsHasBeenSet)
  {
      unsigned actionsIdx = 1;
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location <<  ".ActionsSet." << actionsIdx++;
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_eventsHasBeenSet)
  {
      unsigned eventsIdx = 1;
      for(auto& item : m_events)
      {
        Aws::StringStream eventsSs;
        eventsSs << location <<  ".EventsSet." << eventsIdx++;
        item.OutputToStream(oStream, eventsSs.str().c_str());
      }
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if(m_volumeStatusHasBeenSet)
  {
      Aws::String volumeStatusLocationAndMember(location);
      volumeStatusLocationAndMember += ".VolumeStatus";
      m_volumeStatus.OutputToStream(oStream, volumeStatusLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
