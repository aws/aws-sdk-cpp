/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationStatus.h>
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

CapacityReservationStatus::CapacityReservationStatus(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityReservationStatus& CapacityReservationStatus::operator =(const XmlNode& xmlNode)
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
  }

  return *this;
}

void CapacityReservationStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
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

}

void CapacityReservationStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
