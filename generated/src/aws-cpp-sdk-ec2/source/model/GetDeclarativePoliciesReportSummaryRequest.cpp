/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetDeclarativePoliciesReportSummaryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetDeclarativePoliciesReportSummaryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetDeclarativePoliciesReportSummary&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_reportIdHasBeenSet)
  {
    ss << "ReportId=" << StringUtils::URLEncode(m_reportId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetDeclarativePoliciesReportSummaryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
