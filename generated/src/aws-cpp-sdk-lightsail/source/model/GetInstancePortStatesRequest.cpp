/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetInstancePortStatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstancePortStatesRequest::GetInstancePortStatesRequest() : 
    m_instanceNameHasBeenSet(false)
{
}

Aws::String GetInstancePortStatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInstancePortStatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetInstancePortStates"));
  return headers;

}




