/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/DisassociateMemberAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateMemberAccountRequest::DisassociateMemberAccountRequest() : 
    m_memberAccountIdHasBeenSet(false)
{
}

Aws::String DisassociateMemberAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdHasBeenSet)
  {
   payload.WithString("memberAccountId", m_memberAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateMemberAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MacieService.DisassociateMemberAccount"));
  return headers;

}




