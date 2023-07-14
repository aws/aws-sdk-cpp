/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FailedCapacityReservationFleetCancellationResponse.h>
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

FailedCapacityReservationFleetCancellationResponse::FailedCapacityReservationFleetCancellationResponse() : 
    m_capacityReservationFleetIdHasBeenSet(false),
    m_cancelCapacityReservationFleetErrorHasBeenSet(false)
{
}

FailedCapacityReservationFleetCancellationResponse::FailedCapacityReservationFleetCancellationResponse(const XmlNode& xmlNode) : 
    m_capacityReservationFleetIdHasBeenSet(false),
    m_cancelCapacityReservationFleetErrorHasBeenSet(false)
{
  *this = xmlNode;
}

FailedCapacityReservationFleetCancellationResponse& FailedCapacityReservationFleetCancellationResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationFleetIdNode = resultNode.FirstChild("capacityReservationFleetId");
    if(!capacityReservationFleetIdNode.IsNull())
    {
      m_capacityReservationFleetId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationFleetIdNode.GetText());
      m_capacityReservationFleetIdHasBeenSet = true;
    }
    XmlNode cancelCapacityReservationFleetErrorNode = resultNode.FirstChild("cancelCapacityReservationFleetError");
    if(!cancelCapacityReservationFleetErrorNode.IsNull())
    {
      m_cancelCapacityReservationFleetError = cancelCapacityReservationFleetErrorNode;
      m_cancelCapacityReservationFleetErrorHasBeenSet = true;
    }
  }

  return *this;
}

void FailedCapacityReservationFleetCancellationResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }

  if(m_cancelCapacityReservationFleetErrorHasBeenSet)
  {
      Aws::StringStream cancelCapacityReservationFleetErrorLocationAndMemberSs;
      cancelCapacityReservationFleetErrorLocationAndMemberSs << location << index << locationValue << ".CancelCapacityReservationFleetError";
      m_cancelCapacityReservationFleetError.OutputToStream(oStream, cancelCapacityReservationFleetErrorLocationAndMemberSs.str().c_str());
  }

}

void FailedCapacityReservationFleetCancellationResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }
  if(m_cancelCapacityReservationFleetErrorHasBeenSet)
  {
      Aws::String cancelCapacityReservationFleetErrorLocationAndMember(location);
      cancelCapacityReservationFleetErrorLocationAndMember += ".CancelCapacityReservationFleetError";
      m_cancelCapacityReservationFleetError.OutputToStream(oStream, cancelCapacityReservationFleetErrorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
