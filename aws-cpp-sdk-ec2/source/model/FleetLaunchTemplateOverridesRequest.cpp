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

#include <aws/ec2/model/FleetLaunchTemplateOverridesRequest.h>
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

FleetLaunchTemplateOverridesRequest::FleetLaunchTemplateOverridesRequest() : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_weightedCapacity(0.0),
    m_weightedCapacityHasBeenSet(false)
{
}

FleetLaunchTemplateOverridesRequest::FleetLaunchTemplateOverridesRequest(const XmlNode& xmlNode) : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_weightedCapacity(0.0),
    m_weightedCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

FleetLaunchTemplateOverridesRequest& FleetLaunchTemplateOverridesRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(instanceTypeNode.GetText().c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode maxPriceNode = resultNode.FirstChild("MaxPrice");
    if(!maxPriceNode.IsNull())
    {
      m_maxPrice = StringUtils::Trim(maxPriceNode.GetText().c_str());
      m_maxPriceHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = StringUtils::Trim(subnetIdNode.GetText().c_str());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode weightedCapacityNode = resultNode.FirstChild("WeightedCapacity");
    if(!weightedCapacityNode.IsNull())
    {
      m_weightedCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(weightedCapacityNode.GetText().c_str()).c_str());
      m_weightedCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void FleetLaunchTemplateOverridesRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

}

void FleetLaunchTemplateOverridesRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
