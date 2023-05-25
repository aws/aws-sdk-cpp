/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetConsoleScreenshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetConsoleScreenshotRequest::GetConsoleScreenshotRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_wakeUp(false),
    m_wakeUpHasBeenSet(false)
{
}

Aws::String GetConsoleScreenshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetConsoleScreenshot&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_wakeUpHasBeenSet)
  {
    ss << "WakeUp=" << std::boolalpha << m_wakeUp << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetConsoleScreenshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
