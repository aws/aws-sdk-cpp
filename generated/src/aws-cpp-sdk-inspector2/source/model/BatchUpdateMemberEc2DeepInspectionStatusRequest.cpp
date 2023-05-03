/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/BatchUpdateMemberEc2DeepInspectionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateMemberEc2DeepInspectionStatusRequest::BatchUpdateMemberEc2DeepInspectionStatusRequest() : 
    m_accountIdsHasBeenSet(false)
{
}

Aws::String BatchUpdateMemberEc2DeepInspectionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsObject(m_accountIds[accountIdsIndex].Jsonize());
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  return payload.View().WriteReadable();
}




