/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySpotFleetRequestRequest::ModifySpotFleetRequestRequest() : 
    m_excessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
    m_launchTemplateConfigsHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_onDemandTargetCapacity(0),
    m_onDemandTargetCapacityHasBeenSet(false)
{
}

Aws::String ModifySpotFleetRequestRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySpotFleetRequest&";
  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
    ss << "ExcessCapacityTerminationPolicy=" << ExcessCapacityTerminationPolicyMapper::GetNameForExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy) << "&";
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

  if(m_spotFleetRequestIdHasBeenSet)
  {
    ss << "SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

  if(m_targetCapacityHasBeenSet)
  {
    ss << "TargetCapacity=" << m_targetCapacity << "&";
  }

  if(m_onDemandTargetCapacityHasBeenSet)
  {
    ss << "OnDemandTargetCapacity=" << m_onDemandTargetCapacity << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySpotFleetRequestRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
