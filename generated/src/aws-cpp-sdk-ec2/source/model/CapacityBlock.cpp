/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlock.h>
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

CapacityBlock::CapacityBlock(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityBlock& CapacityBlock::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityBlockIdNode = resultNode.FirstChild("capacityBlockId");
    if(!capacityBlockIdNode.IsNull())
    {
      m_capacityBlockId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockIdNode.GetText());
      m_capacityBlockIdHasBeenSet = true;
    }
    XmlNode ultraserverTypeNode = resultNode.FirstChild("ultraserverType");
    if(!ultraserverTypeNode.IsNull())
    {
      m_ultraserverType = Aws::Utils::Xml::DecodeEscapedXmlText(ultraserverTypeNode.GetText());
      m_ultraserverTypeHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode capacityReservationIdsNode = resultNode.FirstChild("capacityReservationIdSet");
    if(!capacityReservationIdsNode.IsNull())
    {
      XmlNode capacityReservationIdsMember = capacityReservationIdsNode.FirstChild("item");
      m_capacityReservationIdsHasBeenSet = !capacityReservationIdsMember.IsNull();
      while(!capacityReservationIdsMember.IsNull())
      {
        m_capacityReservationIds.push_back(capacityReservationIdsMember.GetText());
        capacityReservationIdsMember = capacityReservationIdsMember.NextNode("item");
      }

      m_capacityReservationIdsHasBeenSet = true;
    }
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CapacityBlockResourceStateMapper::GetCapacityBlockResourceStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityBlock::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityBlockIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }

  if(m_ultraserverTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UltraserverType=" << StringUtils::URLEncode(m_ultraserverType.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_capacityReservationIdsHasBeenSet)
  {
      unsigned capacityReservationIdsIdx = 1;
      for(auto& item : m_capacityReservationIds)
      {
        oStream << location << index << locationValue << ".CapacityReservationIdSet." << capacityReservationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(CapacityBlockResourceStateMapper::GetNameForCapacityBlockResourceState(m_state)) << "&";
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

}

void CapacityBlock::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityBlockIdHasBeenSet)
  {
      oStream << location << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }
  if(m_ultraserverTypeHasBeenSet)
  {
      oStream << location << ".UltraserverType=" << StringUtils::URLEncode(m_ultraserverType.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if(m_capacityReservationIdsHasBeenSet)
  {
      unsigned capacityReservationIdsIdx = 1;
      for(auto& item : m_capacityReservationIds)
      {
        oStream << location << ".CapacityReservationIdSet." << capacityReservationIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(CapacityBlockResourceStateMapper::GetNameForCapacityBlockResourceState(m_state)) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
