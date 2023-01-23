/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/EnterStandbyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

EnterStandbyRequest::EnterStandbyRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_shouldDecrementDesiredCapacity(false),
    m_shouldDecrementDesiredCapacityHasBeenSet(false)
{
}

Aws::String EnterStandbyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnterStandby&";
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


void  EnterStandbyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
