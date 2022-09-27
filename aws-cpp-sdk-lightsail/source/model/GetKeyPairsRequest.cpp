﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetKeyPairsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKeyPairsRequest::GetKeyPairsRequest() : 
    m_pageTokenHasBeenSet(false),
    m_includeDefaultKeyPair(false),
    m_includeDefaultKeyPairHasBeenSet(false)
{
}

Aws::String GetKeyPairsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  if(m_includeDefaultKeyPairHasBeenSet)
  {
   payload.WithBool("includeDefaultKeyPair", m_includeDefaultKeyPair);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetKeyPairsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetKeyPairs"));
  return headers;

}




