/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/DeleteByteMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteByteMatchSetRequest::DeleteByteMatchSetRequest() : 
    m_byteMatchSetIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String DeleteByteMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_byteMatchSetIdHasBeenSet)
  {
   payload.WithString("ByteMatchSetId", m_byteMatchSetId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteByteMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.DeleteByteMatchSet"));
  return headers;

}




