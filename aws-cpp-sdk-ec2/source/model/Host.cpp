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
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availableCapacityHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_hostReservationIdHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_state(AllocationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_allocationTimeHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hostRecovery(HostRecovery::NOT_SET),
    m_hostRecoveryHasBeenSet(false)
{
}

Host::Host(const XmlNode& xmlNode) : 
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availableCapacityHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_hostReservationIdHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_state(AllocationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_allocationTimeHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hostRecovery(HostRecovery::NOT_SET),
    m_hostRecoveryHasBeenSet(false)
{
  *this = xmlNode;
}

Host& Host::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoPlacementNode = resultNode.FirstChild("autoPlacement");
    if(!autoPlacementNode.IsNull())
    {
      m_autoPlacement = AutoPlacementMapper::GetAutoPlacementForName(StringUtils::Trim(autoPlacementNode.GetText().c_str()).c_str());
      m_autoPlacementHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availableCapacityNode = resultNode.FirstChild("availableCapacity");
    if(!availableCapacityNode.IsNull())
    {
      m_availableCapacity = availableCapacityNode;
      m_availableCapacityHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = clientTokenNode.GetText();
      m_clientTokenHasBeenSet = true;
    }
    XmlNode hostIdNode = resultNode.FirstChild("hostId");
    if(!hostIdNode.IsNull())
    {
      m_hostId = hostIdNode.GetText();
      m_hostIdHasBeenSet = true;
    }
    XmlNode hostPropertiesNode = resultNode.FirstChild("hostProperties");
    if(!hostPropertiesNode.IsNull())
    {
      m_hostProperties = hostPropertiesNode;
      m_hostPropertiesHasBeenSet = true;
    }
    XmlNode hostReservationIdNode = resultNode.FirstChild("hostReservationId");
    if(!hostReservationIdNode.IsNull())
    {
      m_hostReservationId = hostReservationIdNode.GetText();
      m_hostReservationIdHasBeenSet = true;
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
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = AllocationStateMapper::GetAllocationStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode allocationTimeNode = resultNode.FirstChild("allocationTime");
    if(!allocationTimeNode.IsNull())
    {
      m_allocationTime = DateTime(StringUtils::Trim(allocationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_allocationTimeHasBeenSet = true;
    }
    XmlNode releaseTimeNode = resultNode.FirstChild("releaseTime");
    if(!releaseTimeNode.IsNull())
    {
      m_releaseTime = DateTime(StringUtils::Trim(releaseTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_releaseTimeHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode hostRecoveryNode = resultNode.FirstChild("hostRecovery");
    if(!hostRecoveryNode.IsNull())
    {
      m_hostRecovery = HostRecoveryMapper::GetHostRecoveryForName(StringUtils::Trim(hostRecoveryNode.GetText().c_str()).c_str());
      m_hostRecoveryHasBeenSet = true;
    }
  }

  return *this;
}

void Host::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoPlacementHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availableCapacityHasBeenSet)
  {
      Aws::StringStream availableCapacityLocationAndMemberSs;
      availableCapacityLocationAndMemberSs << location << index << locationValue << ".AvailableCapacity";
      m_availableCapacity.OutputToStream(oStream, availableCapacityLocationAndMemberSs.str().c_str());
  }

  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_hostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  if(m_hostPropertiesHasBeenSet)
  {
      Aws::StringStream hostPropertiesLocationAndMemberSs;
      hostPropertiesLocationAndMemberSs << location << index << locationValue << ".HostProperties";
      m_hostProperties.OutputToStream(oStream, hostPropertiesLocationAndMemberSs.str().c_str());
  }

  if(m_hostReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostReservationId=" << StringUtils::URLEncode(m_hostReservationId.c_str()) << "&";
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

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << AllocationStateMapper::GetNameForAllocationState(m_state) << "&";
  }

  if(m_allocationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationTime=" << StringUtils::URLEncode(m_allocationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_releaseTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReleaseTime=" << StringUtils::URLEncode(m_releaseTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_hostRecoveryHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostRecovery=" << HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery) << "&";
  }

}

void Host::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoPlacementHasBeenSet)
  {
      oStream << location << ".AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_availableCapacityHasBeenSet)
  {
      Aws::String availableCapacityLocationAndMember(location);
      availableCapacityLocationAndMember += ".AvailableCapacity";
      m_availableCapacity.OutputToStream(oStream, availableCapacityLocationAndMember.c_str());
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_hostIdHasBeenSet)
  {
      oStream << location << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }
  if(m_hostPropertiesHasBeenSet)
  {
      Aws::String hostPropertiesLocationAndMember(location);
      hostPropertiesLocationAndMember += ".HostProperties";
      m_hostProperties.OutputToStream(oStream, hostPropertiesLocationAndMember.c_str());
  }
  if(m_hostReservationIdHasBeenSet)
  {
      oStream << location << ".HostReservationId=" << StringUtils::URLEncode(m_hostReservationId.c_str()) << "&";
  }
  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location <<  ".Instances." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AllocationStateMapper::GetNameForAllocationState(m_state) << "&";
  }
  if(m_allocationTimeHasBeenSet)
  {
      oStream << location << ".AllocationTime=" << StringUtils::URLEncode(m_allocationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_releaseTimeHasBeenSet)
  {
      oStream << location << ".ReleaseTime=" << StringUtils::URLEncode(m_releaseTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_hostRecoveryHasBeenSet)
  {
      oStream << location << ".HostRecovery=" << HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
