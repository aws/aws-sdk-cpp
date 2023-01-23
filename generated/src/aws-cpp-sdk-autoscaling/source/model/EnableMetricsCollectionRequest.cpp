/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/EnableMetricsCollectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

EnableMetricsCollectionRequest::EnableMetricsCollectionRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
}

Aws::String EnableMetricsCollectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableMetricsCollection&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_metricsHasBeenSet)
  {
    unsigned metricsCount = 1;
    for(auto& item : m_metrics)
    {
      ss << "Metrics.member." << metricsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      metricsCount++;
    }
  }

  if(m_granularityHasBeenSet)
  {
    ss << "Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  EnableMetricsCollectionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
