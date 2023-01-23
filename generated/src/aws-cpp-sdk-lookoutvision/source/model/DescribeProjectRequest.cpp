/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DescribeProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProjectRequest::DescribeProjectRequest() : 
    m_projectNameHasBeenSet(false)
{
}

Aws::String DescribeProjectRequest::SerializePayload() const
{
  return {};
}




