/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BatchUpdateAutomatedDiscoveryAccountsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateAutomatedDiscoveryAccountsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
   }
   payload.WithArray("accounts", std::move(accountsJsonList));

  }

  return payload.View().WriteReadable();
}




