/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateQueueStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueStatusRequest::UpdateQueueStatusRequest() : 
    m_instanceIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_status(QueueStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateQueueStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  return payload.View().WriteReadable();
}




