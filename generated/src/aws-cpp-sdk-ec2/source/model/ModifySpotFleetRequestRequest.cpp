/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifySpotFleetRequestRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySpotFleetRequest&";
  if(m_launchTemplateConfigsHasBeenSet)
  {
    unsigned launchTemplateConfigsCount = 1;
    for(auto& item : m_launchTemplateConfigs)
    {
      item.OutputToStream(ss, "LaunchTemplateConfig.", launchTemplateConfigsCount, "");
      launchTemplateConfigsCount++;
    }
  }

  if(m_onDemandTargetCapacityHasBeenSet)
  {
    ss << "OnDemandTargetCapacity=" << m_onDemandTargetCapacity << "&";
  }

  if(m_contextHasBeenSet)
  {
    ss << "Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }

  if(m_spotFleetRequestIdHasBeenSet)
  {
    ss << "SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

  if(m_targetCapacityHasBeenSet)
  {
    ss << "TargetCapacity=" << m_targetCapacity << "&";
  }

  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
    ss << "ExcessCapacityTerminationPolicy=" << StringUtils::URLEncode(ExcessCapacityTerminationPolicyMapper::GetNameForExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySpotFleetRequestRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
