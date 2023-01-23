/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/DescribePlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePlacementRequest::DescribePlacementRequest() : 
    m_placementNameHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

Aws::String DescribePlacementRequest::SerializePayload() const
{
  return {};
}




