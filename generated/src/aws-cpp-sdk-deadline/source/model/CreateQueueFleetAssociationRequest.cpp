/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CreateQueueFleetAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQueueFleetAssociationRequest::CreateQueueFleetAssociationRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_queueIdHasBeenSet(false)
{
}

Aws::String CreateQueueFleetAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  return payload.View().WriteReadable();
}




