/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTaskRequest::GetTaskRequest() : 
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String GetTaskRequest::SerializePayload() const
{
  return {};
}




