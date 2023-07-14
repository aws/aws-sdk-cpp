/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHumanLoopRequest::DeleteHumanLoopRequest() : 
    m_humanLoopNameHasBeenSet(false)
{
}

Aws::String DeleteHumanLoopRequest::SerializePayload() const
{
  return {};
}




