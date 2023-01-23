/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetQuantumTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQuantumTaskRequest::GetQuantumTaskRequest() : 
    m_quantumTaskArnHasBeenSet(false)
{
}

Aws::String GetQuantumTaskRequest::SerializePayload() const
{
  return {};
}




