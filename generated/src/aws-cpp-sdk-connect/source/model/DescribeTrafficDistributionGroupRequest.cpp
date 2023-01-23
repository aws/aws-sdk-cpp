/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DescribeTrafficDistributionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrafficDistributionGroupRequest::DescribeTrafficDistributionGroupRequest() : 
    m_trafficDistributionGroupIdHasBeenSet(false)
{
}

Aws::String DescribeTrafficDistributionGroupRequest::SerializePayload() const
{
  return {};
}




