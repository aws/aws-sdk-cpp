/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeHumanLoopRequest::DescribeHumanLoopRequest() : 
    m_humanLoopNameHasBeenSet(false)
{
}

Aws::String DescribeHumanLoopRequest::SerializePayload() const
{
  return {};
}




