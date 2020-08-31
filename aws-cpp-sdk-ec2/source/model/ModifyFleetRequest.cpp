/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyFleetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyFleetRequest::ModifyFleetRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_excessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_launchTemplateConfigsHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_targetCapacitySpecificationHasBeenSet(false)
{
}

Aws::String ModifyFleetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyFleet&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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
      item.OutputToStream(ss, "LaunchTemplateConfig.", launchTemplateConfigsCount, "");
      launchTemplateConfigsCount++;
    }
  }

  if(m_fleetIdHasBeenSet)
  {
    ss << "FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }

  if(m_targetCapacitySpecificationHasBeenSet)
  {
    m_targetCapacitySpecification.OutputToStream(ss, "TargetCapacitySpecification");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyFleetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
