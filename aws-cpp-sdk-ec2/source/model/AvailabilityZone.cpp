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

#include <aws/ec2/model/AvailabilityZone.h>
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

AvailabilityZone::AvailabilityZone() : 
    m_state(AvailabilityZoneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(const XmlNode& xmlNode) : 
    m_state(AvailabilityZoneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
  *this = xmlNode;
}

AvailabilityZone& AvailabilityZone::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("zoneState");
    if(!stateNode.IsNull())
    {
      m_state = AvailabilityZoneStateMapper::GetAvailabilityZoneStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode messagesNode = resultNode.FirstChild("messageSet");
    if(!messagesNode.IsNull())
    {
      XmlNode messagesMember = messagesNode.FirstChild("item");
      while(!messagesMember.IsNull())
      {
        m_messages.push_back(messagesMember);
        messagesMember = messagesMember.NextNode("item");
      }

      m_messagesHasBeenSet = true;
    }
    XmlNode regionNameNode = resultNode.FirstChild("regionName");
    if(!regionNameNode.IsNull())
    {
      m_regionName = regionNameNode.GetText();
      m_regionNameHasBeenSet = true;
    }
    XmlNode zoneNameNode = resultNode.FirstChild("zoneName");
    if(!zoneNameNode.IsNull())
    {
      m_zoneName = zoneNameNode.GetText();
      m_zoneNameHasBeenSet = true;
    }
    XmlNode zoneIdNode = resultNode.FirstChild("zoneId");
    if(!zoneIdNode.IsNull())
    {
      m_zoneId = zoneIdNode.GetText();
      m_zoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << AvailabilityZoneStateMapper::GetNameForAvailabilityZoneState(m_state) << "&";
  }

  if(m_messagesHasBeenSet)
  {
      unsigned messagesIdx = 1;
      for(auto& item : m_messages)
      {
        Aws::StringStream messagesSs;
        messagesSs << location << index << locationValue << ".MessageSet." << messagesIdx++;
        item.OutputToStream(oStream, messagesSs.str().c_str());
      }
  }

  if(m_regionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }

  if(m_zoneNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZoneName=" << StringUtils::URLEncode(m_zoneName.c_str()) << "&";
  }

  if(m_zoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZoneId=" << StringUtils::URLEncode(m_zoneId.c_str()) << "&";
  }

}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AvailabilityZoneStateMapper::GetNameForAvailabilityZoneState(m_state) << "&";
  }
  if(m_messagesHasBeenSet)
  {
      unsigned messagesIdx = 1;
      for(auto& item : m_messages)
      {
        Aws::StringStream messagesSs;
        messagesSs << location <<  ".MessageSet." << messagesIdx++;
        item.OutputToStream(oStream, messagesSs.str().c_str());
      }
  }
  if(m_regionNameHasBeenSet)
  {
      oStream << location << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }
  if(m_zoneNameHasBeenSet)
  {
      oStream << location << ".ZoneName=" << StringUtils::URLEncode(m_zoneName.c_str()) << "&";
  }
  if(m_zoneIdHasBeenSet)
  {
      oStream << location << ".ZoneId=" << StringUtils::URLEncode(m_zoneId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
