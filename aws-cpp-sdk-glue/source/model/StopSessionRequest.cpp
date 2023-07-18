/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StopSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopSessionRequest::StopSessionRequest() : 
    m_idHasBeenSet(false),
    m_requestOriginHasBeenSet(false)
{
}

Aws::String StopSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_requestOriginHasBeenSet)
  {
   payload.WithString("RequestOrigin", m_requestOrigin);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StopSession"));
  return headers;

}




