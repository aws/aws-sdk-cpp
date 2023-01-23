/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DescribeInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInstanceRequest::DescribeInstanceRequest() : 
    m_instanceIdHasBeenSet(false)
{
}

Aws::String DescribeInstanceRequest::SerializePayload() const
{
  return {};
}




