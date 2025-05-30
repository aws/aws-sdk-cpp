﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/CreateInstanceProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateInstanceProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_packageCleanupHasBeenSet)
  {
   payload.WithBool("packageCleanup", m_packageCleanup);

  }

  if(m_excludeAppPackagesFromCleanupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeAppPackagesFromCleanupJsonList(m_excludeAppPackagesFromCleanup.size());
   for(unsigned excludeAppPackagesFromCleanupIndex = 0; excludeAppPackagesFromCleanupIndex < excludeAppPackagesFromCleanupJsonList.GetLength(); ++excludeAppPackagesFromCleanupIndex)
   {
     excludeAppPackagesFromCleanupJsonList[excludeAppPackagesFromCleanupIndex].AsString(m_excludeAppPackagesFromCleanup[excludeAppPackagesFromCleanupIndex]);
   }
   payload.WithArray("excludeAppPackagesFromCleanup", std::move(excludeAppPackagesFromCleanupJsonList));

  }

  if(m_rebootAfterUseHasBeenSet)
  {
   payload.WithBool("rebootAfterUse", m_rebootAfterUse);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateInstanceProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateInstanceProfile"));
  return headers;

}




