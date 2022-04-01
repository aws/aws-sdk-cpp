/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DescribeInstanceAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInstanceAttributeRequest::DescribeInstanceAttributeRequest() : 
    m_instanceIdHasBeenSet(false),
    m_attributeType(InstanceAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false)
{
}

Aws::String DescribeInstanceAttributeRequest::SerializePayload() const
{
  return {};
}




