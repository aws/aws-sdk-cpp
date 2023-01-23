/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceEventWindowRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceEventWindowRequest::ModifyInstanceEventWindowRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceEventWindowIdHasBeenSet(false),
    m_timeRangesHasBeenSet(false),
    m_cronExpressionHasBeenSet(false)
{
}

Aws::String ModifyInstanceEventWindowRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceEventWindow&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_instanceEventWindowIdHasBeenSet)
  {
    ss << "InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceEventWindowRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
