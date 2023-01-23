/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/AssociateMemberAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateMemberAccountRequest::AssociateMemberAccountRequest() : 
    m_memberAccountIdHasBeenSet(false)
{
}

Aws::String AssociateMemberAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdHasBeenSet)
  {
   payload.WithString("memberAccountId", m_memberAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateMemberAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MacieService.AssociateMemberAccount"));
  return headers;

}




