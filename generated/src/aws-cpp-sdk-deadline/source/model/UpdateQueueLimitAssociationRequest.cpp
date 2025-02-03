/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateQueueLimitAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueLimitAssociationRequest::UpdateQueueLimitAssociationRequest() : 
    m_farmIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_limitIdHasBeenSet(false),
    m_status(UpdateQueueLimitAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateQueueLimitAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UpdateQueueLimitAssociationStatusMapper::GetNameForUpdateQueueLimitAssociationStatus(m_status));
  }

  return payload.View().WriteReadable();
}




