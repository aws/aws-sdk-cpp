/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteFlowLogsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteFlowLogsRequest::DeleteFlowLogsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_flowLogIdsHasBeenSet(false)
{
}

Aws::String DeleteFlowLogsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteFlowLogs&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_flowLogIdsHasBeenSet)
  {
    unsigned flowLogIdsCount = 1;
    for(auto& item : m_flowLogIds)
    {
      ss << "FlowLogId." << flowLogIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      flowLogIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteFlowLogsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
