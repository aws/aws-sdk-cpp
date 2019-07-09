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

#include <aws/ec2/model/InstanceStatus.h>
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

InstanceStatus::InstanceStatus() : 
    m_availabilityZoneHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_systemStatusHasBeenSet(false)
{
}

InstanceStatus::InstanceStatus(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_systemStatusHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatus& InstanceStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceStateNode = resultNode.FirstChild("instanceState");
    if(!instanceStateNode.IsNull())
    {
      m_instanceState = instanceStateNode;
      m_instanceStateHasBeenSet = true;
    }
    XmlNode instanceStatusNode = resultNode.FirstChild("instanceStatus");
    if(!instanceStatusNode.IsNull())
    {
      m_instanceStatus = instanceStatusNode;
      m_instanceStatusHasBeenSet = true;
    }
    XmlNode systemStatusNode = resultNode.FirstChild("systemStatus");
    if(!systemStatusNode.IsNull())
    {
      m_systemStatus = systemStatusNode;
      m_systemStatusHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
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

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceStateHasBeenSet)
  {
      Aws::StringStream instanceStateLocationAndMemberSs;
      instanceStateLocationAndMemberSs << location << index << locationValue << ".InstanceState";
      m_instanceState.OutputToStream(oStream, instanceStateLocationAndMemberSs.str().c_str());
  }

  if(m_instanceStatusHasBeenSet)
  {
      Aws::StringStream instanceStatusLocationAndMemberSs;
      instanceStatusLocationAndMemberSs << location << index << locationValue << ".InstanceStatus";
      m_instanceStatus.OutputToStream(oStream, instanceStatusLocationAndMemberSs.str().c_str());
  }

  if(m_systemStatusHasBeenSet)
  {
      Aws::StringStream systemStatusLocationAndMemberSs;
      systemStatusLocationAndMemberSs << location << index << locationValue << ".SystemStatus";
      m_systemStatus.OutputToStream(oStream, systemStatusLocationAndMemberSs.str().c_str());
  }

}

void InstanceStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
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
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceStateHasBeenSet)
  {
      Aws::String instanceStateLocationAndMember(location);
      instanceStateLocationAndMember += ".InstanceState";
      m_instanceState.OutputToStream(oStream, instanceStateLocationAndMember.c_str());
  }
  if(m_instanceStatusHasBeenSet)
  {
      Aws::String instanceStatusLocationAndMember(location);
      instanceStatusLocationAndMember += ".InstanceStatus";
      m_instanceStatus.OutputToStream(oStream, instanceStatusLocationAndMember.c_str());
  }
  if(m_systemStatusHasBeenSet)
  {
      Aws::String systemStatusLocationAndMember(location);
      systemStatusLocationAndMember += ".SystemStatus";
      m_systemStatus.OutputToStream(oStream, systemStatusLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
