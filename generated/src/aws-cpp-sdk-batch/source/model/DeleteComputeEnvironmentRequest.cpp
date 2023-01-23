/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DeleteComputeEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteComputeEnvironmentRequest::DeleteComputeEnvironmentRequest() : 
    m_computeEnvironmentHasBeenSet(false)
{
}

Aws::String DeleteComputeEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeEnvironmentHasBeenSet)
  {
   payload.WithString("computeEnvironment", m_computeEnvironment);

  }

  return payload.View().WriteReadable();
}




