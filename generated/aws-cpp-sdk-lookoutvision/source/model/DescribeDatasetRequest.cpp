/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DescribeDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetRequest::DescribeDatasetRequest() : 
    m_projectNameHasBeenSet(false),
    m_datasetTypeHasBeenSet(false)
{
}

Aws::String DescribeDatasetRequest::SerializePayload() const
{
  return {};
}




