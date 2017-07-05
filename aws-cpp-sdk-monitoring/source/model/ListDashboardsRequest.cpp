/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/monitoring/model/ListDashboardsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

ListDashboardsRequest::ListDashboardsRequest() : 
    m_dashboardNamePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDashboardsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListDashboards&";
  if(m_dashboardNamePrefixHasBeenSet)
  {
    ss << "DashboardNamePrefix=" << StringUtils::URLEncode(m_dashboardNamePrefix.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  ListDashboardsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
