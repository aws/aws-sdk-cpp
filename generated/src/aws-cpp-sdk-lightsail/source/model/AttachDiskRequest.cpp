/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AttachDiskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachDiskRequest::AttachDiskRequest() : 
    m_diskNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_diskPathHasBeenSet(false),
    m_autoMounting(false),
    m_autoMountingHasBeenSet(false)
{
}

Aws::String AttachDiskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_diskNameHasBeenSet)
  {
   payload.WithString("diskName", m_diskName);

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_diskPathHasBeenSet)
  {
   payload.WithString("diskPath", m_diskPath);

  }

  if(m_autoMountingHasBeenSet)
  {
   payload.WithBool("autoMounting", m_autoMounting);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachDiskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.AttachDisk"));
  return headers;

}




