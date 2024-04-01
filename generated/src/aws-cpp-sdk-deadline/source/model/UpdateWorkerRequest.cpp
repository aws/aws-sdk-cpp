/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateWorkerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkerRequest::UpdateWorkerRequest() : 
    m_capabilitiesHasBeenSet(false),
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_status(UpdatedWorkerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

Aws::String UpdateWorkerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("capabilities", m_capabilities.Jsonize());

  }

  if(m_hostPropertiesHasBeenSet)
  {
   payload.WithObject("hostProperties", m_hostProperties.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UpdatedWorkerStatusMapper::GetNameForUpdatedWorkerStatus(m_status));
  }

  return payload.View().WriteReadable();
}




