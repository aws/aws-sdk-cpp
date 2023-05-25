/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ScheduledInstancesPlacement.h>
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

ScheduledInstancesPlacement::ScheduledInstancesPlacement() : 
    m_availabilityZoneHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

ScheduledInstancesPlacement::ScheduledInstancesPlacement(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstancesPlacement& ScheduledInstancesPlacement::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("GroupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstancesPlacement::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

}

void ScheduledInstancesPlacement::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
