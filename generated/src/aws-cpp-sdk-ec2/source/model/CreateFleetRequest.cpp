/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateFleetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateFleetRequest::CreateFleetRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_spotOptionsHasBeenSet(false),
    m_onDemandOptionsHasBeenSet(false),
    m_excessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_launchTemplateConfigsHasBeenSet(false),
    m_targetCapacitySpecificationHasBeenSet(false),
    m_terminateInstancesWithExpiration(false),
    m_terminateInstancesWithExpirationHasBeenSet(false),
    m_type(FleetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_replaceUnhealthyInstances(false),
    m_replaceUnhealthyInstancesHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

Aws::String CreateFleetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateFleet&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_spotOptionsHasBeenSet)
  {
    m_spotOptions.OutputToStream(ss, "SpotOptions");
  }

  if(m_onDemandOptionsHasBeenSet)
  {
    m_onDemandOptions.OutputToStream(ss, "OnDemandOptions");
  }

  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
    ss << "ExcessCapacityTerminationPolicy=" << FleetExcessCapacityTerminationPolicyMapper::GetNameForFleetExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
  }

  if(m_launchTemplateConfigsHasBeenSet)
  {
    unsigned launchTemplateConfigsCount = 1;
    for(auto& item : m_launchTemplateConfigs)
    {
      item.OutputToStream(ss, "LaunchTemplateConfigs.", launchTemplateConfigsCount, "");
      launchTemplateConfigsCount++;
    }
  }

  if(m_targetCapacitySpecificationHasBeenSet)
  {
    m_targetCapacitySpecification.OutputToStream(ss, "TargetCapacitySpecification");
  }

  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
    ss << "TerminateInstancesWithExpiration=" << std::boolalpha << m_terminateInstancesWithExpiration << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << FleetTypeMapper::GetNameForFleetType(m_type) << "&";
  }

  if(m_validFromHasBeenSet)
  {
    ss << "ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
    ss << "ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_replaceUnhealthyInstancesHasBeenSet)
  {
    ss << "ReplaceUnhealthyInstances=" << std::boolalpha << m_replaceUnhealthyInstances << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_contextHasBeenSet)
  {
    ss << "Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateFleetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
