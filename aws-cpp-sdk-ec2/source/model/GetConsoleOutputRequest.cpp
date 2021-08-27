/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetConsoleOutputRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetConsoleOutputRequest::GetConsoleOutputRequest() : 
    m_instanceIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_latest(false),
    m_latestHasBeenSet(false)
{
}

Aws::String GetConsoleOutputRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetConsoleOutput&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_latestHasBeenSet)
  {
    ss << "Latest=" << std::boolalpha << m_latest << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetConsoleOutputRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
