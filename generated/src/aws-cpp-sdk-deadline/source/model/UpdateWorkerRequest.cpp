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

Aws::String UpdateWorkerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UpdatedWorkerStatusMapper::GetNameForUpdatedWorkerStatus(m_status));
  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("capabilities", m_capabilities.Jsonize());

  }

  if(m_hostPropertiesHasBeenSet)
  {
   payload.WithObject("hostProperties", m_hostProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




