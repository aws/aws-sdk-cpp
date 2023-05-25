/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeConversionTasksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeConversionTasksRequest::DescribeConversionTasksRequest() : 
    m_conversionTaskIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeConversionTasksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeConversionTasks&";
  if(m_conversionTaskIdsHasBeenSet)
  {
    unsigned conversionTaskIdsCount = 1;
    for(auto& item : m_conversionTaskIds)
    {
      ss << "ConversionTaskId." << conversionTaskIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      conversionTaskIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeConversionTasksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
