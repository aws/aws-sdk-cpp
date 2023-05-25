/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/CreateDataViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataViewRequest::CreateDataViewRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_datasetIdHasBeenSet(false),
    m_autoUpdate(false),
    m_autoUpdateHasBeenSet(false),
    m_sortColumnsHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_asOfTimestamp(0),
    m_asOfTimestampHasBeenSet(false),
    m_destinationTypeParamsHasBeenSet(false)
{
}

Aws::String CreateDataViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_autoUpdateHasBeenSet)
  {
   payload.WithBool("autoUpdate", m_autoUpdate);

  }

  if(m_sortColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortColumnsJsonList(m_sortColumns.size());
   for(unsigned sortColumnsIndex = 0; sortColumnsIndex < sortColumnsJsonList.GetLength(); ++sortColumnsIndex)
   {
     sortColumnsJsonList[sortColumnsIndex].AsString(m_sortColumns[sortColumnsIndex]);
   }
   payload.WithArray("sortColumns", std::move(sortColumnsJsonList));

  }

  if(m_partitionColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionColumnsJsonList(m_partitionColumns.size());
   for(unsigned partitionColumnsIndex = 0; partitionColumnsIndex < partitionColumnsJsonList.GetLength(); ++partitionColumnsIndex)
   {
     partitionColumnsJsonList[partitionColumnsIndex].AsString(m_partitionColumns[partitionColumnsIndex]);
   }
   payload.WithArray("partitionColumns", std::move(partitionColumnsJsonList));

  }

  if(m_asOfTimestampHasBeenSet)
  {
   payload.WithInt64("asOfTimestamp", m_asOfTimestamp);

  }

  if(m_destinationTypeParamsHasBeenSet)
  {
   payload.WithObject("destinationTypeParams", m_destinationTypeParams.Jsonize());

  }

  return payload.View().WriteReadable();
}




