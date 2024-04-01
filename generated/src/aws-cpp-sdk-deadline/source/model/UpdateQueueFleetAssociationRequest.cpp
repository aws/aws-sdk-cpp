/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateQueueFleetAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueFleetAssociationRequest::UpdateQueueFleetAssociationRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_status(UpdateQueueFleetAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateQueueFleetAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UpdateQueueFleetAssociationStatusMapper::GetNameForUpdateQueueFleetAssociationStatus(m_status));
  }

  return payload.View().WriteReadable();
}




