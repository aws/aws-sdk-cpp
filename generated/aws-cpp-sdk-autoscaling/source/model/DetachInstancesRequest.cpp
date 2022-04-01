/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DetachInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DetachInstancesRequest::DetachInstancesRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_shouldDecrementDesiredCapacity(false),
    m_shouldDecrementDesiredCapacityHasBeenSet(false)
{
}

Aws::String DetachInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetachInstances&";
  if(m_instanceIdsHasBeenSet)
  {
    unsigned instanceIdsCount = 1;
    for(auto& item : m_instanceIds)
    {
      ss << "InstanceIds.member." << instanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_shouldDecrementDesiredCapacityHasBeenSet)
  {
    ss << "ShouldDecrementDesiredCapacity=" << std::boolalpha << m_shouldDecrementDesiredCapacity << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DetachInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
