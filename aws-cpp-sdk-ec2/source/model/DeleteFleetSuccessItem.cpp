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

#include <aws/ec2/model/DeleteFleetSuccessItem.h>
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

DeleteFleetSuccessItem::DeleteFleetSuccessItem() : 
    m_currentFleetState(FleetStateCode::NOT_SET),
    m_currentFleetStateHasBeenSet(false),
    m_previousFleetState(FleetStateCode::NOT_SET),
    m_previousFleetStateHasBeenSet(false),
    m_fleetIdHasBeenSet(false)
{
}

DeleteFleetSuccessItem::DeleteFleetSuccessItem(const XmlNode& xmlNode) : 
    m_currentFleetState(FleetStateCode::NOT_SET),
    m_currentFleetStateHasBeenSet(false),
    m_previousFleetState(FleetStateCode::NOT_SET),
    m_previousFleetStateHasBeenSet(false),
    m_fleetIdHasBeenSet(false)
{
  *this = xmlNode;
}

DeleteFleetSuccessItem& DeleteFleetSuccessItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode currentFleetStateNode = resultNode.FirstChild("currentFleetState");
    if(!currentFleetStateNode.IsNull())
    {
      m_currentFleetState = FleetStateCodeMapper::GetFleetStateCodeForName(StringUtils::Trim(currentFleetStateNode.GetText().c_str()).c_str());
      m_currentFleetStateHasBeenSet = true;
    }
    XmlNode previousFleetStateNode = resultNode.FirstChild("previousFleetState");
    if(!previousFleetStateNode.IsNull())
    {
      m_previousFleetState = FleetStateCodeMapper::GetFleetStateCodeForName(StringUtils::Trim(previousFleetStateNode.GetText().c_str()).c_str());
      m_previousFleetStateHasBeenSet = true;
    }
    XmlNode fleetIdNode = resultNode.FirstChild("fleetId");
    if(!fleetIdNode.IsNull())
    {
      m_fleetId = fleetIdNode.GetText();
      m_fleetIdHasBeenSet = true;
    }
  }

  return *this;
}

void DeleteFleetSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_currentFleetStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentFleetState=" << FleetStateCodeMapper::GetNameForFleetStateCode(m_currentFleetState) << "&";
  }

  if(m_previousFleetStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreviousFleetState=" << FleetStateCodeMapper::GetNameForFleetStateCode(m_previousFleetState) << "&";
  }

  if(m_fleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }

}

void DeleteFleetSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_currentFleetStateHasBeenSet)
  {
      oStream << location << ".CurrentFleetState=" << FleetStateCodeMapper::GetNameForFleetStateCode(m_currentFleetState) << "&";
  }
  if(m_previousFleetStateHasBeenSet)
  {
      oStream << location << ".PreviousFleetState=" << FleetStateCodeMapper::GetNameForFleetStateCode(m_previousFleetState) << "&";
  }
  if(m_fleetIdHasBeenSet)
  {
      oStream << location << ".FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
