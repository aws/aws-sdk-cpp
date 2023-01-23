﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeNotificationConfigurationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest() : 
    m_autoScalingGroupNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeNotificationConfigurationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNotificationConfigurations&";
  if(m_autoScalingGroupNamesHasBeenSet)
  {
    unsigned autoScalingGroupNamesCount = 1;
    for(auto& item : m_autoScalingGroupNames)
    {
      ss << "AutoScalingGroupNames.member." << autoScalingGroupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      autoScalingGroupNamesCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeNotificationConfigurationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
