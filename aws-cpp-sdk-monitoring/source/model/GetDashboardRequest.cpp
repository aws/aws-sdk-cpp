/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetDashboardRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetDashboardRequest::GetDashboardRequest() : 
    m_dashboardNameHasBeenSet(false)
{
}

Aws::String GetDashboardRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetDashboard&";
  if(m_dashboardNameHasBeenSet)
  {
    ss << "DashboardName=" << StringUtils::URLEncode(m_dashboardName.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetDashboardRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
