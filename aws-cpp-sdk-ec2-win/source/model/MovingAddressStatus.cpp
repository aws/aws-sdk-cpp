/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_moveStatus(MoveStatus::NOT_SET),
    m_moveStatusHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
}

MovingAddressStatus::MovingAddressStatus(const XmlNode& xmlNode) : 
    m_moveStatus(MoveStatus::NOT_SET),
    m_moveStatusHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
  *this = xmlNode;
}

MovingAddressStatus& MovingAddressStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode moveStatusNode = resultNode.FirstChild("moveStatus");
    if(!moveStatusNode.IsNull())
    {
      m_moveStatus = MoveStatusMapper::GetMoveStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(moveStatusNode.GetText()).c_str()).c_str());
      m_moveStatusHasBeenSet = true;
    }
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpNode.GetText());
      m_publicIpHasBeenSet = true;
    }
  }

  return *this;
}

void MovingAddressStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_moveStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".MoveStatus=" << MoveStatusMapper::GetNameForMoveStatus(m_moveStatus) << "&";
  }

  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

}

void MovingAddressStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_moveStatusHasBeenSet)
  {
      oStream << location << ".MoveStatus=" << MoveStatusMapper::GetNameForMoveStatus(m_moveStatus) << "&";
  }
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
