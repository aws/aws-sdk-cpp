/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetByteMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetByteMatchSetRequest::GetByteMatchSetRequest() : 
    m_byteMatchSetIdHasBeenSet(false)
{
}

Aws::String GetByteMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_byteMatchSetIdHasBeenSet)
  {
   payload.WithString("ByteMatchSetId", m_byteMatchSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetByteMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetByteMatchSet"));
  return headers;

}




