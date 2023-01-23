/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DescribeUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeUserRequest::DescribeUserRequest() : 
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String DescribeUserRequest::SerializePayload() const
{
  return {};
}




