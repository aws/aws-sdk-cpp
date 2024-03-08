/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/GetCisScanReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCisScanReportRequest::GetCisScanReportRequest() : 
    m_scanArnHasBeenSet(false),
    m_targetAccountsHasBeenSet(false)
{
}

Aws::String GetCisScanReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanArnHasBeenSet)
  {
   payload.WithString("scanArn", m_scanArn);

  }

  if(m_targetAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetAccountsJsonList(m_targetAccounts.size());
   for(unsigned targetAccountsIndex = 0; targetAccountsIndex < targetAccountsJsonList.GetLength(); ++targetAccountsIndex)
   {
     targetAccountsJsonList[targetAccountsIndex].AsString(m_targetAccounts[targetAccountsIndex]);
   }
   payload.WithArray("targetAccounts", std::move(targetAccountsJsonList));

  }

  return payload.View().WriteReadable();
}




