/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/UpdateIPSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIPSetRequest::UpdateIPSetRequest() : 
    m_iPSetIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false),
    m_updatesHasBeenSet(false)
{
}

Aws::String UpdateIPSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iPSetIdHasBeenSet)
  {
   payload.WithString("IPSetId", m_iPSetId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  if(m_updatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIPSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.UpdateIPSet"));
  return headers;

}




