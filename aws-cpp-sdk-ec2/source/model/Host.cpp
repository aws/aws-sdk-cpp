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
#include <aws/ec2/model/Host.h>
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

Host::Host() : 
    m_hostIdHasBeenSet(false),
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_hostReservationIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_state(AllocationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_availableCapacityHasBeenSet(false)
{
}

Host::Host(const XmlNode& xmlNode) : 
    m_hostIdHasBeenSet(false),
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_hostReservationIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_state(AllocationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_availableCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

Host& Host::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hostIdNode = resultNode.FirstChild("hostId");
    if(!hostIdNode.IsNull())
    {
      m_hostId = StringUtils::Trim(hostIdNode.GetText().c_str());
      m_hostIdHasBeenSet = true;
    }
    XmlNode autoPlacementNode = resultNode.FirstChild("autoPlacement");
    if(!autoPlacementNode.IsNull())
    {
      m_autoPlacement = AutoPlacementMapper::GetAutoPlacementForName(StringUtils::Trim(autoPlacementNode.GetText().c_str()).c_str());
      m_autoPlacementHasBeenSet = true;
    }
    XmlNode hostReservationIdNode = resultNode.FirstChild("hostReservationId");
    if(!hostReservationIdNode.IsNull())
    {
      m_hostReservationId = StringUtils::Trim(hostReservationIdNode.GetText().c_str());
      m_hostReservationIdHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = StringUtils::Trim(clientTokenNode.GetText().c_str());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode hostPropertiesNode = resultNode.FirstChild("hostProperties");
    if(!hostPropertiesNode.IsNull())
    {
      m_hostProperties = hostPropertiesNode;
      m_hostPropertiesHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = AllocationStateMapper::GetAllocationStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode instancesNode = resultNode.FirstChild("instances");
    if(!instancesNode.IsNull())
    {
      XmlNode instancesMember = instancesNode.FirstChild("item");
      while(!instancesMember.IsNull())
      {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("item");
      }

      m_instancesHasBeenSet = true;
    }
    XmlNode availableCapacityNode = resultNode.FirstChild("availableCapacity");
    if(!availableCapacityNode.IsNull())
    {
      m_availableCapacity = availableCapacityNode;
      m_availableCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void Host::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  if(m_autoPlacementHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
  }

  if(m_hostReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostReservationId=" << StringUtils::URLEncode(m_hostReservationId.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_hostPropertiesHasBeenSet)
  {
      Aws::StringStream hostPropertiesLocationAndMemberSs;
      hostPropertiesLocationAndMemberSs << location << index << locationValue << ".HostProperties";
      m_hostProperties.OutputToStream(oStream, hostPropertiesLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << AllocationStateMapper::GetNameForAllocationState(m_state) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location << index << locationValue << ".Instances." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }

  if(m_availableCapacityHasBeenSet)
  {
      Aws::StringStream availableCapacityLocationAndMemberSs;
      availableCapacityLocationAndMemberSs << location << index << locationValue << ".AvailableCapacity";
      m_availableCapacity.OutputToStream(oStream, availableCapacityLocationAndMemberSs.str().c_str());
  }

}

void Host::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hostIdHasBeenSet)
  {
      oStream << location << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }
  if(m_autoPlacementHasBeenSet)
  {
      oStream << location << ".AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
  }
  if(m_hostReservationIdHasBeenSet)
  {
      oStream << location << ".HostReservationId=" << StringUtils::URLEncode(m_hostReservationId.c_str()) << "&";
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_hostPropertiesHasBeenSet)
  {
      Aws::String hostPropertiesLocationAndMember(location);
      hostPropertiesLocationAndMember += ".HostProperties";
      m_hostProperties.OutputToStream(oStream, hostPropertiesLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AllocationStateMapper::GetNameForAllocationState(m_state) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location <<  ".Item." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }
  if(m_availableCapacityHasBeenSet)
  {
      Aws::String availableCapacityLocationAndMember(location);
      availableCapacityLocationAndMember += ".AvailableCapacity";
      m_availableCapacity.OutputToStream(oStream, availableCapacityLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
