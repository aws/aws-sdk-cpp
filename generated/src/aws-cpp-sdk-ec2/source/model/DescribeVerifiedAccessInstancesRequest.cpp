﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVerifiedAccessInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeVerifiedAccessInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVerifiedAccessInstances&";
  if(m_verifiedAccessInstanceIdsHasBeenSet)
  {
    unsigned verifiedAccessInstanceIdsCount = 1;
    for(auto& item : m_verifiedAccessInstanceIds)
    {
      ss << "VerifiedAccessInstanceId." << verifiedAccessInstanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      verifiedAccessInstanceIdsCount++;
    }
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVerifiedAccessInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
