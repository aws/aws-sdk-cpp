﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateMemberDetectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMemberDetectorsRequest::UpdateMemberDetectorsRequest() : 
    m_detectorIdHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_dataSourcesHasBeenSet(false)
{
}

Aws::String UpdateMemberDetectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_dataSourcesHasBeenSet)
  {
   payload.WithObject("dataSources", m_dataSources.Jsonize());

  }

  return payload.View().WriteReadable();
}




