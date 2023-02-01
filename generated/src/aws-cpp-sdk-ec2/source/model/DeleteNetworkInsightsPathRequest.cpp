/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkInsightsPathRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteNetworkInsightsPathRequest::DeleteNetworkInsightsPathRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_networkInsightsPathIdHasBeenSet(false)
{
}

Aws::String DeleteNetworkInsightsPathRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteNetworkInsightsPath&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkInsightsPathIdHasBeenSet)
  {
    ss << "NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteNetworkInsightsPathRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
