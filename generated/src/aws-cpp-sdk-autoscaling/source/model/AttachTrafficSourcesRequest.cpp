/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AttachTrafficSourcesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String AttachTrafficSourcesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachTrafficSources&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_trafficSourcesHasBeenSet)
  {
    if (m_trafficSources.empty())
    {
      ss << "TrafficSources=&";
    }
    else
    {
      unsigned trafficSourcesCount = 1;
      for(auto& item : m_trafficSources)
      {
        item.OutputToStream(ss, "TrafficSources.member.", trafficSourcesCount, "");
        trafficSourcesCount++;
      }
    }
  }

  if(m_skipZonalShiftValidationHasBeenSet)
  {
    ss << "SkipZonalShiftValidation=" << std::boolalpha << m_skipZonalShiftValidation << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  AttachTrafficSourcesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
