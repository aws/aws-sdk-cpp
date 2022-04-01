/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/DeleteXssMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteXssMatchSetRequest::DeleteXssMatchSetRequest() : 
    m_xssMatchSetIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String DeleteXssMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_xssMatchSetIdHasBeenSet)
  {
   payload.WithString("XssMatchSetId", m_xssMatchSetId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteXssMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.DeleteXssMatchSet"));
  return headers;

}




