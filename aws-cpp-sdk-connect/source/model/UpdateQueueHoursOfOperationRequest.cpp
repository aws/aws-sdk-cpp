/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateQueueHoursOfOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueHoursOfOperationRequest::UpdateQueueHoursOfOperationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false)
{
}

Aws::String UpdateQueueHoursOfOperationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hoursOfOperationIdHasBeenSet)
  {
   payload.WithString("HoursOfOperationId", m_hoursOfOperationId);

  }

  return payload.View().WriteReadable();
}




