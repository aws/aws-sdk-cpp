﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AllocateStaticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AllocateStaticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_staticIpNameHasBeenSet)
  {
   payload.WithString("staticIpName", m_staticIpName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AllocateStaticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.AllocateStaticIp"));
  return headers;

}




