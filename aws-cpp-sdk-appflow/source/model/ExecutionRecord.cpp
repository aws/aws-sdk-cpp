/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ExecutionRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ExecutionRecord::ExecutionRecord() : 
    m_executionIdHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_executionResultHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_dataPullStartTimeHasBeenSet(false),
    m_dataPullEndTimeHasBeenSet(false),
    m_metadataCatalogDetailsHasBeenSet(false)
{
}

ExecutionRecord::ExecutionRecord(JsonView jsonValue) : 
    m_executionIdHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_executionResultHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_dataPullStartTimeHasBeenSet(false),
    m_dataPullEndTimeHasBeenSet(false),
    m_metadataCatalogDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionRecord& ExecutionRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("executionStatus"));

    m_executionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionResult"))
  {
    m_executionResult = jsonValue.GetObject("executionResult");

    m_executionResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataPullStartTime"))
  {
    m_dataPullStartTime = jsonValue.GetDouble("dataPullStartTime");

    m_dataPullStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataPullEndTime"))
  {
    m_dataPullEndTime = jsonValue.GetDouble("dataPullEndTime");

    m_dataPullEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadataCatalogDetails"))
  {
    Aws::Utils::Array<JsonView> metadataCatalogDetailsJsonList = jsonValue.GetArray("metadataCatalogDetails");
    for(unsigned metadataCatalogDetailsIndex = 0; metadataCatalogDetailsIndex < metadataCatalogDetailsJsonList.GetLength(); ++metadataCatalogDetailsIndex)
    {
      m_metadataCatalogDetails.push_back(metadataCatalogDetailsJsonList[metadataCatalogDetailsIndex].AsObject());
    }
    m_metadataCatalogDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionRecord::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithString("executionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  if(m_executionResultHasBeenSet)
  {
   payload.WithObject("executionResult", m_executionResult.Jsonize());

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_dataPullStartTimeHasBeenSet)
  {
   payload.WithDouble("dataPullStartTime", m_dataPullStartTime.SecondsWithMSPrecision());
  }

  if(m_dataPullEndTimeHasBeenSet)
  {
   payload.WithDouble("dataPullEndTime", m_dataPullEndTime.SecondsWithMSPrecision());
  }

  if(m_metadataCatalogDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataCatalogDetailsJsonList(m_metadataCatalogDetails.size());
   for(unsigned metadataCatalogDetailsIndex = 0; metadataCatalogDetailsIndex < metadataCatalogDetailsJsonList.GetLength(); ++metadataCatalogDetailsIndex)
   {
     metadataCatalogDetailsJsonList[metadataCatalogDetailsIndex].AsObject(m_metadataCatalogDetails[metadataCatalogDetailsIndex].Jsonize());
   }
   payload.WithArray("metadataCatalogDetails", std::move(metadataCatalogDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
