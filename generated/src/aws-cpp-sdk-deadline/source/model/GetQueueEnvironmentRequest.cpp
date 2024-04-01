/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetQueueEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueueEnvironmentRequest::GetQueueEnvironmentRequest() : 
    m_farmIdHasBeenSet(false),
    m_queueEnvironmentIdHasBeenSet(false),
    m_queueIdHasBeenSet(false)
{
}

Aws::String GetQueueEnvironmentRequest::SerializePayload() const
{
  return {};
}




