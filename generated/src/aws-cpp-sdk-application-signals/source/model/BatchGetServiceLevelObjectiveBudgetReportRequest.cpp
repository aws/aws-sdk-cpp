/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchGetServiceLevelObjectiveBudgetReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetServiceLevelObjectiveBudgetReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_sloIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sloIdsJsonList(m_sloIds.size());
   for(unsigned sloIdsIndex = 0; sloIdsIndex < sloIdsJsonList.GetLength(); ++sloIdsIndex)
   {
     sloIdsJsonList[sloIdsIndex].AsString(m_sloIds[sloIdsIndex]);
   }
   payload.WithArray("SloIds", std::move(sloIdsJsonList));

  }

  return payload.View().WriteReadable();
}




