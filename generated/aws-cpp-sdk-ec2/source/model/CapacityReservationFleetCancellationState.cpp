/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationFleetCancellationState.h>
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

CapacityReservationFleetCancellationState::CapacityReservationFleetCancellationState() : 
    m_currentFleetState(CapacityReservationFleetState::NOT_SET),
    m_currentFleetStateHasBeenSet(false),
    m_previousFleetState(CapacityReservationFleetState::NOT_SET),
    m_previousFleetStateHasBeenSet(false),
    m_capacityReservationFleetIdHasBeenSet(false)
{
}

CapacityReservationFleetCancellationState::CapacityReservationFleetCancellationState(const XmlNode& xmlNode) : 
    m_currentFleetState(CapacityReservationFleetState::NOT_SET),
    m_currentFleetStateHasBeenSet(false),
    m_previousFleetState(CapacityReservationFleetState::NOT_SET),
    m_previousFleetStateHasBeenSet(false),
    m_capacityReservationFleetIdHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservationFleetCancellationState& CapacityReservationFleetCancellationState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode currentFleetStateNode = resultNode.FirstChild("currentFleetState");
    if(!currentFleetStateNode.IsNull())
    {
      m_currentFleetState = CapacityReservationFleetStateMapper::GetCapacityReservationFleetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentFleetStateNode.GetText()).c_str()).c_str());
      m_currentFleetStateHasBeenSet = true;
    }
    XmlNode previousFleetStateNode = resultNode.FirstChild("previousFleetState");
    if(!previousFleetStateNode.IsNull())
    {
      m_previousFleetState = CapacityReservationFleetStateMapper::GetCapacityReservationFleetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(previousFleetStateNode.GetText()).c_str()).c_str());
      m_previousFleetStateHasBeenSet = true;
    }
    XmlNode capacityReservationFleetIdNode = resultNode.FirstChild("capacityReservationFleetId");
    if(!capacityReservationFleetIdNode.IsNull())
    {
      m_capacityReservationFleetId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationFleetIdNode.GetText());
      m_capacityReservationFleetIdHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationFleetCancellationState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_currentFleetStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentFleetState=" << CapacityReservationFleetStateMapper::GetNameForCapacityReservationFleetState(m_currentFleetState) << "&";
  }

  if(m_previousFleetStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreviousFleetState=" << CapacityReservationFleetStateMapper::GetNameForCapacityReservationFleetState(m_previousFleetState) << "&";
  }

  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }

}

void CapacityReservationFleetCancellationState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_currentFleetStateHasBeenSet)
  {
      oStream << location << ".CurrentFleetState=" << CapacityReservationFleetStateMapper::GetNameForCapacityReservationFleetState(m_currentFleetState) << "&";
  }
  if(m_previousFleetStateHasBeenSet)
  {
      oStream << location << ".PreviousFleetState=" << CapacityReservationFleetStateMapper::GetNameForCapacityReservationFleetState(m_previousFleetState) << "&";
  }
  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
