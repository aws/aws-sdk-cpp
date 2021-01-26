/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DescribeTrackerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrackerRequest::DescribeTrackerRequest() : 
    m_trackerNameHasBeenSet(false)
{
}

Aws::String DescribeTrackerRequest::SerializePayload() const
{
  return {};
}




