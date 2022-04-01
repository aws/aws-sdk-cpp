/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAccountLimitsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeAccountLimitsRequest::DescribeAccountLimitsRequest()
{
}

Aws::String DescribeAccountLimitsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAccountLimits&";
  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeAccountLimitsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
