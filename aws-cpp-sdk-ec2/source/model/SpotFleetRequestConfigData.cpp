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
#include <aws/ec2/model/SpotFleetRequestConfigData.h>
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

SpotFleetRequestConfigData::SpotFleetRequestConfigData() : 
    m_clientTokenHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_iamFleetRoleHasBeenSet(false),
    m_launchSpecificationsHasBeenSet(false),
    m_excessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_allocationStrategy(AllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_fulfilledCapacity(0.0),
    m_fulfilledCapacityHasBeenSet(false),
    m_type(FleetType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SpotFleetRequestConfigData::SpotFleetRequestConfigData(const XmlNode& xmlNode) : 
    m_clientTokenHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_iamFleetRoleHasBeenSet(false),
    m_launchSpecificationsHasBeenSet(false),
    m_excessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_allocationStrategy(AllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_fulfilledCapacity(0.0),
    m_fulfilledCapacityHasBeenSet(false),
    m_type(FleetType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

SpotFleetRequestConfigData& SpotFleetRequestConfigData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = StringUtils::Trim(clientTokenNode.GetText().c_str());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode spotPriceNode = resultNode.FirstChild("spotPrice");
    if(!spotPriceNode.IsNull())
    {
      m_spotPrice = StringUtils::Trim(spotPriceNode.GetText().c_str());
      m_spotPriceHasBeenSet = true;
    }
    XmlNode targetCapacityNode = resultNode.FirstChild("targetCapacity");
    if(!targetCapacityNode.IsNull())
    {
      m_targetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(targetCapacityNode.GetText().c_str()).c_str());
      m_targetCapacityHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("validFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = DateTime(StringUtils::Trim(validFromNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_validFromHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("validUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(validUntilNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode terminateInstancesWithExpirationNode = resultNode.FirstChild("terminateInstancesWithExpiration");
    if(!terminateInstancesWithExpirationNode.IsNull())
    {
      m_terminateInstancesWithExpiration = StringUtils::ConvertToBool(StringUtils::Trim(terminateInstancesWithExpirationNode.GetText().c_str()).c_str());
      m_terminateInstancesWithExpirationHasBeenSet = true;
    }
    XmlNode iamFleetRoleNode = resultNode.FirstChild("iamFleetRole");
    if(!iamFleetRoleNode.IsNull())
    {
      m_iamFleetRole = StringUtils::Trim(iamFleetRoleNode.GetText().c_str());
      m_iamFleetRoleHasBeenSet = true;
    }
    XmlNode launchSpecificationsNode = resultNode.FirstChild("launchSpecifications");
    if(!launchSpecificationsNode.IsNull())
    {
      XmlNode launchSpecificationsMember = launchSpecificationsNode.FirstChild("item");
      while(!launchSpecificationsMember.IsNull())
      {
        m_launchSpecifications.push_back(launchSpecificationsMember);
        launchSpecificationsMember = launchSpecificationsMember.NextNode("item");
      }

      m_launchSpecificationsHasBeenSet = true;
    }
    XmlNode excessCapacityTerminationPolicyNode = resultNode.FirstChild("excessCapacityTerminationPolicy");
    if(!excessCapacityTerminationPolicyNode.IsNull())
    {
      m_excessCapacityTerminationPolicy = ExcessCapacityTerminationPolicyMapper::GetExcessCapacityTerminationPolicyForName(StringUtils::Trim(excessCapacityTerminationPolicyNode.GetText().c_str()).c_str());
      m_excessCapacityTerminationPolicyHasBeenSet = true;
    }
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = AllocationStrategyMapper::GetAllocationStrategyForName(StringUtils::Trim(allocationStrategyNode.GetText().c_str()).c_str());
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode fulfilledCapacityNode = resultNode.FirstChild("fulfilledCapacity");
    if(!fulfilledCapacityNode.IsNull())
    {
      m_fulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(fulfilledCapacityNode.GetText().c_str()).c_str());
      m_fulfilledCapacityHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = FleetTypeMapper::GetFleetTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void SpotFleetRequestConfigData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_spotPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_targetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetCapacity=" << m_targetCapacity << "&";
  }

  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << index << locationValue << ".TerminateInstancesWithExpiration=" << m_terminateInstancesWithExpiration << "&";
  }

  if(m_iamFleetRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamFleetRole=" << StringUtils::URLEncode(m_iamFleetRole.c_str()) << "&";
  }

  if(m_launchSpecificationsHasBeenSet)
  {
      unsigned launchSpecificationsIdx = 1;
      for(auto& item : m_launchSpecifications)
      {
        Aws::StringStream launchSpecificationsSs;
        launchSpecificationsSs << location << index << locationValue << ".LaunchSpecifications." << launchSpecificationsIdx++;
        item.OutputToStream(oStream, launchSpecificationsSs.str().c_str());
      }
  }

  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExcessCapacityTerminationPolicy=" << ExcessCapacityTerminationPolicyMapper::GetNameForExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
  }

  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationStrategy=" << AllocationStrategyMapper::GetNameForAllocationStrategy(m_allocationStrategy) << "&";
  }

  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << FleetTypeMapper::GetNameForFleetType(m_type) << "&";
  }

}

void SpotFleetRequestConfigData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_targetCapacityHasBeenSet)
  {
      oStream << location << ".TargetCapacity=" << m_targetCapacity << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << ".TerminateInstancesWithExpiration=" << m_terminateInstancesWithExpiration << "&";
  }
  if(m_iamFleetRoleHasBeenSet)
  {
      oStream << location << ".IamFleetRole=" << StringUtils::URLEncode(m_iamFleetRole.c_str()) << "&";
  }
  if(m_launchSpecificationsHasBeenSet)
  {
      unsigned launchSpecificationsIdx = 1;
      for(auto& item : m_launchSpecifications)
      {
        Aws::StringStream launchSpecificationsSs;
        launchSpecificationsSs << location <<  ".item." << launchSpecificationsIdx++;
        item.OutputToStream(oStream, launchSpecificationsSs.str().c_str());
      }
  }
  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
      oStream << location << ".ExcessCapacityTerminationPolicy=" << ExcessCapacityTerminationPolicyMapper::GetNameForExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
  }
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << AllocationStrategyMapper::GetNameForAllocationStrategy(m_allocationStrategy) << "&";
  }
  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << FleetTypeMapper::GetNameForFleetType(m_type) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
