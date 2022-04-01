/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAdjustmentTypesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeAdjustmentTypesRequest::DescribeAdjustmentTypesRequest()
{
}

Aws::String DescribeAdjustmentTypesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAdjustmentTypes&";
  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribeAdjustmentTypesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
