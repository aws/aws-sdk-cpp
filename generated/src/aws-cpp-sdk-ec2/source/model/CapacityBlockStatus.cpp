/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlockStatus.h>
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

CapacityBlockStatus::CapacityBlockStatus(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityBlockStatus& CapacityBlockStatus::operator =(const XmlNode& xmlNode)
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
    XmlNode interconnectStatusNode = resultNode.FirstChild("interconnectStatus");
    if(!interconnectStatusNode.IsNull())
    {
      m_interconnectStatus = CapacityBlockInterconnectStatusMapper::GetCapacityBlockInterconnectStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interconnectStatusNode.GetText()).c_str()));
      m_interconnectStatusHasBeenSet = true;
    }
    XmlNode totalCapacityNode = resultNode.FirstChild("totalCapacity");
    if(!totalCapacityNode.IsNull())
    {
      m_totalCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalCapacityNode.GetText()).c_str()).c_str());
      m_totalCapacityHasBeenSet = true;
    }
    XmlNode totalAvailableCapacityNode = resultNode.FirstChild("totalAvailableCapacity");
    if(!totalAvailableCapacityNode.IsNull())
    {
      m_totalAvailableCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalAvailableCapacityNode.GetText()).c_str()).c_str());
      m_totalAvailableCapacityHasBeenSet = true;
    }
    XmlNode totalUnavailableCapacityNode = resultNode.FirstChild("totalUnavailableCapacity");
    if(!totalUnavailableCapacityNode.IsNull())
    {
      m_totalUnavailableCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalUnavailableCapacityNode.GetText()).c_str()).c_str());
      m_totalUnavailableCapacityHasBeenSet = true;
    }
    XmlNode capacityReservationStatusesNode = resultNode.FirstChild("capacityReservationStatusSet");
    if(!capacityReservationStatusesNode.IsNull())
    {
      XmlNode capacityReservationStatusesMember = capacityReservationStatusesNode.FirstChild("item");
      m_capacityReservationStatusesHasBeenSet = !capacityReservationStatusesMember.IsNull();
      while(!capacityReservationStatusesMember.IsNull())
      {
        m_capacityReservationStatuses.push_back(capacityReservationStatusesMember);
        capacityReservationStatusesMember = capacityReservationStatusesMember.NextNode("item");
      }

      m_capacityReservationStatusesHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityBlockStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityBlockIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }

  if(m_interconnectStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".InterconnectStatus=" << StringUtils::URLEncode(CapacityBlockInterconnectStatusMapper::GetNameForCapacityBlockInterconnectStatus(m_interconnectStatus)) << "&";
  }

  if(m_totalCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalCapacity=" << m_totalCapacity << "&";
  }

  if(m_totalAvailableCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalAvailableCapacity=" << m_totalAvailableCapacity << "&";
  }

  if(m_totalUnavailableCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalUnavailableCapacity=" << m_totalUnavailableCapacity << "&";
  }

  if(m_capacityReservationStatusesHasBeenSet)
  {
      unsigned capacityReservationStatusesIdx = 1;
      for(auto& item : m_capacityReservationStatuses)
      {
        Aws::StringStream capacityReservationStatusesSs;
        capacityReservationStatusesSs << location << index << locationValue << ".CapacityReservationStatusSet." << capacityReservationStatusesIdx++;
        item.OutputToStream(oStream, capacityReservationStatusesSs.str().c_str());
      }
  }

}

void CapacityBlockStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityBlockIdHasBeenSet)
  {
      oStream << location << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }
  if(m_interconnectStatusHasBeenSet)
  {
      oStream << location << ".InterconnectStatus=" << StringUtils::URLEncode(CapacityBlockInterconnectStatusMapper::GetNameForCapacityBlockInterconnectStatus(m_interconnectStatus)) << "&";
  }
  if(m_totalCapacityHasBeenSet)
  {
      oStream << location << ".TotalCapacity=" << m_totalCapacity << "&";
  }
  if(m_totalAvailableCapacityHasBeenSet)
  {
      oStream << location << ".TotalAvailableCapacity=" << m_totalAvailableCapacity << "&";
  }
  if(m_totalUnavailableCapacityHasBeenSet)
  {
      oStream << location << ".TotalUnavailableCapacity=" << m_totalUnavailableCapacity << "&";
  }
  if(m_capacityReservationStatusesHasBeenSet)
  {
      unsigned capacityReservationStatusesIdx = 1;
      for(auto& item : m_capacityReservationStatuses)
      {
        Aws::StringStream capacityReservationStatusesSs;
        capacityReservationStatusesSs << location << ".CapacityReservationStatusSet." << capacityReservationStatusesIdx++;
        item.OutputToStream(oStream, capacityReservationStatusesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
