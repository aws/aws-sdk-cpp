/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DetachTrafficSourcesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DetachTrafficSourcesRequest::DetachTrafficSourcesRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_trafficSourcesHasBeenSet(false)
{
}

Aws::String DetachTrafficSourcesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetachTrafficSources&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_trafficSourcesHasBeenSet)
  {
    unsigned trafficSourcesCount = 1;
    for(auto& item : m_trafficSources)
    {
      item.OutputToStream(ss, "TrafficSources.member.", trafficSourcesCount, "");
      trafficSourcesCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DetachTrafficSourcesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
