/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationGroup.h>
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

CapacityReservationGroup::CapacityReservationGroup() : 
    m_groupArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
}

CapacityReservationGroup::CapacityReservationGroup(const XmlNode& xmlNode) : 
    m_groupArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservationGroup& CapacityReservationGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupArnNode = resultNode.FirstChild("groupArn");
    if(!groupArnNode.IsNull())
    {
      m_groupArn = Aws::Utils::Xml::DecodeEscapedXmlText(groupArnNode.GetText());
      m_groupArnHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupArn=" << StringUtils::URLEncode(m_groupArn.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

}

void CapacityReservationGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupArnHasBeenSet)
  {
      oStream << location << ".GroupArn=" << StringUtils::URLEncode(m_groupArn.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
