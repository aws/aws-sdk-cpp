/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDatalakeStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDatalakeStatusRequest::GetDatalakeStatusRequest() : 
    m_accountSetHasBeenSet(false),
    m_maxAccountResults(0),
    m_maxAccountResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetDatalakeStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountSetJsonList(m_accountSet.size());
   for(unsigned accountSetIndex = 0; accountSetIndex < accountSetJsonList.GetLength(); ++accountSetIndex)
   {
     accountSetJsonList[accountSetIndex].AsString(m_accountSet[accountSetIndex]);
   }
   payload.WithArray("accountSet", std::move(accountSetJsonList));

  }

  if(m_maxAccountResultsHasBeenSet)
  {
   payload.WithInteger("maxAccountResults", m_maxAccountResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




