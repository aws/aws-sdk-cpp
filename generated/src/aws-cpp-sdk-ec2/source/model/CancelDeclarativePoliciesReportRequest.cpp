﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelDeclarativePoliciesReportRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelDeclarativePoliciesReportRequest::CancelDeclarativePoliciesReportRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_reportIdHasBeenSet(false)
{
}

Aws::String CancelDeclarativePoliciesReportRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelDeclarativePoliciesReport&";
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


void  CancelDeclarativePoliciesReportRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
