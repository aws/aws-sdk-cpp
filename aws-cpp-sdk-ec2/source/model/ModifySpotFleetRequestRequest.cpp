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

#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySpotFleetRequestRequest::ModifySpotFleetRequestRequest() : 
    m_excessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy::NOT_SET),
    m_excessCapacityTerminationPolicyHasBeenSet(false),
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
