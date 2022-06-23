/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteNetworkInsightsAccessScopeRequest::DeleteNetworkInsightsAccessScopeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_networkInsightsAccessScopeIdHasBeenSet(false)
{
}

Aws::String DeleteNetworkInsightsAccessScopeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteNetworkInsightsAccessScope&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
    ss << "NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteNetworkInsightsAccessScopeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
