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

#include <aws/ec2/model/Reservation.h>
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

Reservation::Reservation() : 
    m_groupsHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_requesterIdHasBeenSet(false),
    m_reservationIdHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

Reservation::Reservation(const XmlNode& xmlNode) : 
    m_groupsHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_requesterIdHasBeenSet(false),
    m_reservationIdHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

Reservation& Reservation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupsNode = resultNode.FirstChild("groupSet");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("item");
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember);
        groupsMember = groupsMember.NextNode("item");
      }

      m_groupsHasBeenSet = true;
    }
    XmlNode instancesNode = resultNode.FirstChild("instancesSet");
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
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode requesterIdNode = resultNode.FirstChild("requesterId");
    if(!requesterIdNode.IsNull())
    {
      m_requesterId = requesterIdNode.GetText();
      m_requesterIdHasBeenSet = true;
    }
    XmlNode reservationIdNode = resultNode.FirstChild("reservationId");
    if(!reservationIdNode.IsNull())
    {
      m_reservationId = reservationIdNode.GetText();
      m_reservationIdHasBeenSet = true;
    }
  }

  return *this;
}

void Reservation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        Aws::StringStream groupsSs;
        groupsSs << location << index << locationValue << ".GroupSet." << groupsIdx++;
        item.OutputToStream(oStream, groupsSs.str().c_str());
      }
  }

  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location << index << locationValue << ".InstancesSet." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_requesterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequesterId=" << StringUtils::URLEncode(m_requesterId.c_str()) << "&";
  }

  if(m_reservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservationId=" << StringUtils::URLEncode(m_reservationId.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void Reservation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        Aws::StringStream groupsSs;
        groupsSs << location <<  ".GroupSet." << groupsIdx++;
        item.OutputToStream(oStream, groupsSs.str().c_str());
      }
  }
  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location <<  ".InstancesSet." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_requesterIdHasBeenSet)
  {
      oStream << location << ".RequesterId=" << StringUtils::URLEncode(m_requesterId.c_str()) << "&";
  }
  if(m_reservationIdHasBeenSet)
  {
      oStream << location << ".ReservationId=" << StringUtils::URLEncode(m_reservationId.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
