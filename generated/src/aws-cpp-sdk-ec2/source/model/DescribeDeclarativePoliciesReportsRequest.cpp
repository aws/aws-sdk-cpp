﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeDeclarativePoliciesReportsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeDeclarativePoliciesReportsRequest::DescribeDeclarativePoliciesReportsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_reportIdsHasBeenSet(false)
{
}

Aws::String DescribeDeclarativePoliciesReportsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDeclarativePoliciesReports&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_reportIdsHasBeenSet)
  {
    unsigned reportIdsCount = 1;
    for(auto& item : m_reportIds)
    {
      ss << "ReportId." << reportIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reportIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeDeclarativePoliciesReportsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
