/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationBillingRequest.h>
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

CapacityReservationBillingRequest::CapacityReservationBillingRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityReservationBillingRequest& CapacityReservationBillingRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationIdNode = resultNode.FirstChild("capacityReservationId");
    if(!capacityReservationIdNode.IsNull())
    {
      m_capacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationIdNode.GetText());
      m_capacityReservationIdHasBeenSet = true;
    }
    XmlNode requestedByNode = resultNode.FirstChild("requestedBy");
    if(!requestedByNode.IsNull())
    {
      m_requestedBy = Aws::Utils::Xml::DecodeEscapedXmlText(requestedByNode.GetText());
      m_requestedByHasBeenSet = true;
    }
    XmlNode unusedReservationBillingOwnerIdNode = resultNode.FirstChild("unusedReservationBillingOwnerId");
    if(!unusedReservationBillingOwnerIdNode.IsNull())
    {
      m_unusedReservationBillingOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(unusedReservationBillingOwnerIdNode.GetText());
      m_unusedReservationBillingOwnerIdHasBeenSet = true;
    }
    XmlNode lastUpdateTimeNode = resultNode.FirstChild("lastUpdateTime");
    if(!lastUpdateTimeNode.IsNull())
    {
      m_lastUpdateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdateTimeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = CapacityReservationBillingRequestStatusMapper::GetCapacityReservationBillingRequestStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode capacityReservationInfoNode = resultNode.FirstChild("capacityReservationInfo");
    if(!capacityReservationInfoNode.IsNull())
    {
      m_capacityReservationInfo = capacityReservationInfoNode;
      m_capacityReservationInfoHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationBillingRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_requestedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestedBy=" << StringUtils::URLEncode(m_requestedBy.c_str()) << "&";
  }

  if(m_unusedReservationBillingOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UnusedReservationBillingOwnerId=" << StringUtils::URLEncode(m_unusedReservationBillingOwnerId.c_str()) << "&";
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdateTime=" << StringUtils::URLEncode(m_lastUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(CapacityReservationBillingRequestStatusMapper::GetNameForCapacityReservationBillingRequestStatus(m_status)) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_capacityReservationInfoHasBeenSet)
  {
      Aws::StringStream capacityReservationInfoLocationAndMemberSs;
      capacityReservationInfoLocationAndMemberSs << location << index << locationValue << ".CapacityReservationInfo";
      m_capacityReservationInfo.OutputToStream(oStream, capacityReservationInfoLocationAndMemberSs.str().c_str());
  }

}

void CapacityReservationBillingRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if(m_requestedByHasBeenSet)
  {
      oStream << location << ".RequestedBy=" << StringUtils::URLEncode(m_requestedBy.c_str()) << "&";
  }
  if(m_unusedReservationBillingOwnerIdHasBeenSet)
  {
      oStream << location << ".UnusedReservationBillingOwnerId=" << StringUtils::URLEncode(m_unusedReservationBillingOwnerId.c_str()) << "&";
  }
  if(m_lastUpdateTimeHasBeenSet)
  {
      oStream << location << ".LastUpdateTime=" << StringUtils::URLEncode(m_lastUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(CapacityReservationBillingRequestStatusMapper::GetNameForCapacityReservationBillingRequestStatus(m_status)) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_capacityReservationInfoHasBeenSet)
  {
      Aws::String capacityReservationInfoLocationAndMember(location);
      capacityReservationInfoLocationAndMember += ".CapacityReservationInfo";
      m_capacityReservationInfo.OutputToStream(oStream, capacityReservationInfoLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
