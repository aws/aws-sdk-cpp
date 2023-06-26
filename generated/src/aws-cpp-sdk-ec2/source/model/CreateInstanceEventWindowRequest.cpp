/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateInstanceEventWindowRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateInstanceEventWindowRequest::CreateInstanceEventWindowRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeRangesHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreateInstanceEventWindowRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateInstanceEventWindow&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_timeRangesHasBeenSet)
  {
    unsigned timeRangesCount = 1;
    for(auto& item : m_timeRanges)
    {
      item.OutputToStream(ss, "TimeRange.", timeRangesCount, "");
      timeRangesCount++;
    }
  }

  if(m_cronExpressionHasBeenSet)
  {
    ss << "CronExpression=" << StringUtils::URLEncode(m_cronExpression.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateInstanceEventWindowRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
