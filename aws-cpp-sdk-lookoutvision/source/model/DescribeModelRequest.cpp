﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DescribeModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeModelRequest::DescribeModelRequest() : 
    m_projectNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

Aws::String DescribeModelRequest::SerializePayload() const
{
  return {};
}




