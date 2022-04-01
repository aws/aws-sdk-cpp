/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/GetAlternateContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAlternateContactRequest::GetAlternateContactRequest() : 
    m_accountIdHasBeenSet(false),
    m_alternateContactType(AlternateContactType::NOT_SET),
    m_alternateContactTypeHasBeenSet(false)
{
}

Aws::String GetAlternateContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_alternateContactTypeHasBeenSet)
  {
   payload.WithString("AlternateContactType", AlternateContactTypeMapper::GetNameForAlternateContactType(m_alternateContactType));
  }

  return payload.View().WriteReadable();
}




