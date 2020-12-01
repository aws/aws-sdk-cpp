/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeAnomalyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAnomalyRequest::DescribeAnomalyRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribeAnomalyRequest::SerializePayload() const
{
  return {};
}




