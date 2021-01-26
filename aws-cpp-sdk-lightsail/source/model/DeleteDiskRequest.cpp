/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteDiskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDiskRequest::DeleteDiskRequest() : 
    m_diskNameHasBeenSet(false),
    m_forceDeleteAddOns(false),
    m_forceDeleteAddOnsHasBeenSet(false)
{
}

Aws::String DeleteDiskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_diskNameHasBeenSet)
  {
   payload.WithString("diskName", m_diskName);

  }

  if(m_forceDeleteAddOnsHasBeenSet)
  {
   payload.WithBool("forceDeleteAddOns", m_forceDeleteAddOns);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDiskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteDisk"));
  return headers;

}




