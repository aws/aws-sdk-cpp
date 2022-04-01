﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/DeleteNamedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNamedQueryRequest::DeleteNamedQueryRequest() : 
    m_namedQueryId(Aws::Utils::UUID::RandomUUID()),
    m_namedQueryIdHasBeenSet(true)
{
}

Aws::String DeleteNamedQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namedQueryIdHasBeenSet)
  {
   payload.WithString("NamedQueryId", m_namedQueryId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteNamedQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.DeleteNamedQuery"));
  return headers;

}




