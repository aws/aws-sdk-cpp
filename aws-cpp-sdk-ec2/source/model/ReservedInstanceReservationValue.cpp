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

#include <aws/ec2/model/ReservedInstanceReservationValue.h>
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

ReservedInstanceReservationValue::ReservedInstanceReservationValue() : 
    m_reservationValueHasBeenSet(false),
    m_reservedInstanceIdHasBeenSet(false)
{
}

ReservedInstanceReservationValue::ReservedInstanceReservationValue(const XmlNode& xmlNode) : 
    m_reservationValueHasBeenSet(false),
    m_reservedInstanceIdHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstanceReservationValue& ReservedInstanceReservationValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservationValueNode = resultNode.FirstChild("reservationValue");
    if(!reservationValueNode.IsNull())
    {
      m_reservationValue = reservationValueNode;
      m_reservationValueHasBeenSet = true;
    }
    XmlNode reservedInstanceIdNode = resultNode.FirstChild("reservedInstanceId");
    if(!reservedInstanceIdNode.IsNull())
    {
      m_reservedInstanceId = reservedInstanceIdNode.GetText();
      m_reservedInstanceIdHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstanceReservationValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservationValueHasBeenSet)
  {
      Aws::StringStream reservationValueLocationAndMemberSs;
      reservationValueLocationAndMemberSs << location << index << locationValue << ".ReservationValue";
      m_reservationValue.OutputToStream(oStream, reservationValueLocationAndMemberSs.str().c_str());
  }

  if(m_reservedInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstanceId=" << StringUtils::URLEncode(m_reservedInstanceId.c_str()) << "&";
  }

}

void ReservedInstanceReservationValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservationValueHasBeenSet)
  {
      Aws::String reservationValueLocationAndMember(location);
      reservationValueLocationAndMember += ".ReservationValue";
      m_reservationValue.OutputToStream(oStream, reservationValueLocationAndMember.c_str());
  }
  if(m_reservedInstanceIdHasBeenSet)
  {
      oStream << location << ".ReservedInstanceId=" << StringUtils::URLEncode(m_reservedInstanceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
