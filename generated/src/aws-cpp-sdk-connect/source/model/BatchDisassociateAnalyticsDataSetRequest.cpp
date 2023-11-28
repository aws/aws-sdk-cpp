/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BatchDisassociateAnalyticsDataSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisassociateAnalyticsDataSetRequest::BatchDisassociateAnalyticsDataSetRequest() : 
    m_instanceIdHasBeenSet(false),
    m_dataSetIdsHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false)
{
}

Aws::String BatchDisassociateAnalyticsDataSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetIdsJsonList(m_dataSetIds.size());
   for(unsigned dataSetIdsIndex = 0; dataSetIdsIndex < dataSetIdsJsonList.GetLength(); ++dataSetIdsIndex)
   {
     dataSetIdsJsonList[dataSetIdsIndex].AsString(m_dataSetIds[dataSetIdsIndex]);
   }
   payload.WithArray("DataSetIds", std::move(dataSetIdsJsonList));

  }

  if(m_targetAccountIdHasBeenSet)
  {
   payload.WithString("TargetAccountId", m_targetAccountId);

  }

  return payload.View().WriteReadable();
}




