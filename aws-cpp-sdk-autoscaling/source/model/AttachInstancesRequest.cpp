/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AttachInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

AttachInstancesRequest::AttachInstancesRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false)
{
}

Aws::String AttachInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachInstances&";
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

  ss << "Version=2011-01-01";
  return ss.str();
}


void  AttachInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
