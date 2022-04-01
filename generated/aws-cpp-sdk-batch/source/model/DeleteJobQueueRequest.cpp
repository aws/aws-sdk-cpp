/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DeleteJobQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteJobQueueRequest::DeleteJobQueueRequest() : 
    m_jobQueueHasBeenSet(false)
{
}

Aws::String DeleteJobQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobQueueHasBeenSet)
  {
   payload.WithString("jobQueue", m_jobQueue);

  }

  return payload.View().WriteReadable();
}




