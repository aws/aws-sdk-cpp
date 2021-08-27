/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_optInStatus(AvailabilityZoneOptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_zoneTypeHasBeenSet(false),
    m_parentZoneNameHasBeenSet(false),
    m_parentZoneIdHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(const XmlNode& xmlNode) : 
    m_state(AvailabilityZoneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_optInStatus(AvailabilityZoneOptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_zoneTypeHasBeenSet(false),
    m_parentZoneNameHasBeenSet(false),
    m_parentZoneIdHasBeenSet(false)
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
      m_state = AvailabilityZoneStateMapper::GetAvailabilityZoneStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode optInStatusNode = resultNode.FirstChild("optInStatus");
    if(!optInStatusNode.IsNull())
    {
      m_optInStatus = AvailabilityZoneOptInStatusMapper::GetAvailabilityZoneOptInStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(optInStatusNode.GetText()).c_str()).c_str());
      m_optInStatusHasBeenSet = true;
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
      m_regionName = Aws::Utils::Xml::DecodeEscapedXmlText(regionNameNode.GetText());
      m_regionNameHasBeenSet = true;
    }
    XmlNode zoneNameNode = resultNode.FirstChild("zoneName");
    if(!zoneNameNode.IsNull())
    {
      m_zoneName = Aws::Utils::Xml::DecodeEscapedXmlText(zoneNameNode.GetText());
      m_zoneNameHasBeenSet = true;
    }
    XmlNode zoneIdNode = resultNode.FirstChild("zoneId");
    if(!zoneIdNode.IsNull())
    {
      m_zoneId = Aws::Utils::Xml::DecodeEscapedXmlText(zoneIdNode.GetText());
      m_zoneIdHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
    XmlNode networkBorderGroupNode = resultNode.FirstChild("networkBorderGroup");
    if(!networkBorderGroupNode.IsNull())
    {
      m_networkBorderGroup = Aws::Utils::Xml::DecodeEscapedXmlText(networkBorderGroupNode.GetText());
      m_networkBorderGroupHasBeenSet = true;
    }
    XmlNode zoneTypeNode = resultNode.FirstChild("zoneType");
    if(!zoneTypeNode.IsNull())
    {
      m_zoneType = Aws::Utils::Xml::DecodeEscapedXmlText(zoneTypeNode.GetText());
      m_zoneTypeHasBeenSet = true;
    }
    XmlNode parentZoneNameNode = resultNode.FirstChild("parentZoneName");
    if(!parentZoneNameNode.IsNull())
    {
      m_parentZoneName = Aws::Utils::Xml::DecodeEscapedXmlText(parentZoneNameNode.GetText());
      m_parentZoneNameHasBeenSet = true;
    }
    XmlNode parentZoneIdNode = resultNode.FirstChild("parentZoneId");
    if(!parentZoneIdNode.IsNull())
    {
      m_parentZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(parentZoneIdNode.GetText());
      m_parentZoneIdHasBeenSet = true;
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

  if(m_optInStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptInStatus=" << AvailabilityZoneOptInStatusMapper::GetNameForAvailabilityZoneOptInStatus(m_optInStatus) << "&";
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

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_networkBorderGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

  if(m_zoneTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZoneType=" << StringUtils::URLEncode(m_zoneType.c_str()) << "&";
  }

  if(m_parentZoneNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParentZoneName=" << StringUtils::URLEncode(m_parentZoneName.c_str()) << "&";
  }

  if(m_parentZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParentZoneId=" << StringUtils::URLEncode(m_parentZoneId.c_str()) << "&";
  }

}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AvailabilityZoneStateMapper::GetNameForAvailabilityZoneState(m_state) << "&";
  }
  if(m_optInStatusHasBeenSet)
  {
      oStream << location << ".OptInStatus=" << AvailabilityZoneOptInStatusMapper::GetNameForAvailabilityZoneOptInStatus(m_optInStatus) << "&";
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
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_networkBorderGroupHasBeenSet)
  {
      oStream << location << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }
  if(m_zoneTypeHasBeenSet)
  {
      oStream << location << ".ZoneType=" << StringUtils::URLEncode(m_zoneType.c_str()) << "&";
  }
  if(m_parentZoneNameHasBeenSet)
  {
      oStream << location << ".ParentZoneName=" << StringUtils::URLEncode(m_parentZoneName.c_str()) << "&";
  }
  if(m_parentZoneIdHasBeenSet)
  {
      oStream << location << ".ParentZoneId=" << StringUtils::URLEncode(m_parentZoneId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
