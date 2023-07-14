/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInstanceRequest::DeleteInstanceRequest() : 
    m_instanceNameHasBeenSet(false),
    m_forceDeleteAddOns(false),
    m_forceDeleteAddOnsHasBeenSet(false)
{
}

Aws::String DeleteInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_forceDeleteAddOnsHasBeenSet)
  {
   payload.WithBool("forceDeleteAddOns", m_forceDeleteAddOns);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteInstance"));
  return headers;

}




