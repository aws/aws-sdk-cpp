/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeMetricCollectionTypesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeMetricCollectionTypesRequest::DescribeMetricCollectionTypesRequest()
{
}

Aws::String DescribeMetricCollectionTypesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeMetricCollectionTypes&";
  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeMetricCollectionTypesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
