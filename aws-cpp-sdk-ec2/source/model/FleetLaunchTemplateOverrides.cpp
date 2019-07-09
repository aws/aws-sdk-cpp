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

#include <aws/ec2/model/FleetLaunchTemplateOverrides.h>
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

FleetLaunchTemplateOverrides::FleetLaunchTemplateOverrides() : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_weightedCapacity(0.0),
    m_weightedCapacityHasBeenSet(false),
    m_priority(0.0),
    m_priorityHasBeenSet(false),
    m_placementHasBeenSet(false)
{
}

FleetLaunchTemplateOverrides::FleetLaunchTemplateOverrides(const XmlNode& xmlNode) : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_weightedCapacity(0.0),
    m_weightedCapacityHasBeenSet(false),
    m_priority(0.0),
    m_priorityHasBeenSet(false),
    m_placementHasBeenSet(false)
{
  *this = xmlNode;
}

FleetLaunchTemplateOverrides& FleetLaunchTemplateOverrides::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(instanceTypeNode.GetText().c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode maxPriceNode = resultNode.FirstChild("maxPrice");
    if(!maxPriceNode.IsNull())
    {
      m_maxPrice = maxPriceNode.GetText();
      m_maxPriceHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = subnetIdNode.GetText();
      m_subnetIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode weightedCapacityNode = resultNode.FirstChild("weightedCapacity");
    if(!weightedCapacityNode.IsNull())
    {
      m_weightedCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(weightedCapacityNode.GetText().c_str()).c_str());
      m_weightedCapacityHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToDouble(StringUtils::Trim(priorityNode.GetText().c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
    XmlNode placementNode = resultNode.FirstChild("placement");
    if(!placementNode.IsNull())
    {
      m_placement = placementNode;
      m_placementHasBeenSet = true;
    }
  }

  return *this;
}

void FleetLaunchTemplateOverrides::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_maxPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxPrice=" << StringUtils::URLEncode(m_maxPrice.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_weightedCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity) << "&";
  }

  if(m_priorityHasBeenSet)
  {
        oStream << location << index << locationValue << ".Priority=" << StringUtils::URLEncode(m_priority) << "&";
  }

  if(m_placementHasBeenSet)
  {
      Aws::StringStream placementLocationAndMemberSs;
      placementLocationAndMemberSs << location << index << locationValue << ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMemberSs.str().c_str());
  }

}

void FleetLaunchTemplateOverrides::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_maxPriceHasBeenSet)
  {
      oStream << location << ".MaxPrice=" << StringUtils::URLEncode(m_maxPrice.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_weightedCapacityHasBeenSet)
  {
        oStream << location << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity) << "&";
  }
  if(m_priorityHasBeenSet)
  {
        oStream << location << ".Priority=" << StringUtils::URLEncode(m_priority) << "&";
  }
  if(m_placementHasBeenSet)
  {
      Aws::String placementLocationAndMember(location);
      placementLocationAndMember += ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
