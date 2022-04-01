/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeScalingProcessTypesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeScalingProcessTypesRequest::DescribeScalingProcessTypesRequest()
{
}

Aws::String DescribeScalingProcessTypesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScalingProcessTypes&";
  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeScalingProcessTypesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
