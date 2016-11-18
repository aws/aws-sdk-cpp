/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/MovingAddressStatus.h>
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

MovingAddressStatus::MovingAddressStatus() : 
    m_publicIpHasBeenSet(false),
    m_moveStatus(MoveStatus::NOT_SET),
    m_moveStatusHasBeenSet(false)
{
}

MovingAddressStatus::MovingAddressStatus(const XmlNode& xmlNode) : 
    m_publicIpHasBeenSet(false),
    m_moveStatus(MoveStatus::NOT_SET),
    m_moveStatusHasBeenSet(false)
{
  *this = xmlNode;
}

MovingAddressStatus& MovingAddressStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = StringUtils::Trim(publicIpNode.GetText().c_str());
      m_publicIpHasBeenSet = true;
    }
    XmlNode moveStatusNode = resultNode.FirstChild("moveStatus");
    if(!moveStatusNode.IsNull())
    {
      m_moveStatus = MoveStatusMapper::GetMoveStatusForName(StringUtils::Trim(moveStatusNode.GetText().c_str()).c_str());
      m_moveStatusHasBeenSet = true;
    }
  }

  return *this;
}

void MovingAddressStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_moveStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".MoveStatus=" << MoveStatusMapper::GetNameForMoveStatus(m_moveStatus) << "&";
  }

}

void MovingAddressStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
  if(m_moveStatusHasBeenSet)
  {
      oStream << location << ".MoveStatus=" << MoveStatusMapper::GetNameForMoveStatus(m_moveStatus) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
