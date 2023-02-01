/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/DeleteDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDestinationRequest::DeleteDestinationRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DeleteDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload.View().WriteReadable();
}




