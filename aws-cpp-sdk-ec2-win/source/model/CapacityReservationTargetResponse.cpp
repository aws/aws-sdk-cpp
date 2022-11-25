/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationTargetResponse.h>
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

CapacityReservationTargetResponse::CapacityReservationTargetResponse() : 
    m_capacityReservationIdHasBeenSet(false),
    m_capacityReservationResourceGroupArnHasBeenSet(false)
{
}

CapacityReservationTargetResponse::CapacityReservationTargetResponse(const XmlNode& xmlNode) : 
    m_capacityReservationIdHasBeenSet(false),
    m_capacityReservationResourceGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservationTargetResponse& CapacityReservationTargetResponse::operator =(const XmlNode& xmlNode)
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
    XmlNode capacityReservationResourceGroupArnNode = resultNode.FirstChild("capacityReservationResourceGroupArn");
    if(!capacityReservationResourceGroupArnNode.IsNull())
    {
      m_capacityReservationResourceGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationResourceGroupArnNode.GetText());
      m_capacityReservationResourceGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationTargetResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_capacityReservationResourceGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationResourceGroupArn=" << StringUtils::URLEncode(m_capacityReservationResourceGroupArn.c_str()) << "&";
  }

}

void CapacityReservationTargetResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if(m_capacityReservationResourceGroupArnHasBeenSet)
  {
      oStream << location << ".CapacityReservationResourceGroupArn=" << StringUtils::URLEncode(m_capacityReservationResourceGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
