/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

IngestionJob::IngestionJob() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_ingestionJobIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(IngestionJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

IngestionJob::IngestionJob(JsonView jsonValue) : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_ingestionJobIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(IngestionJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionJob& IngestionJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionJobId"))
  {
    m_ingestionJobId = jsonValue.GetString("ingestionJobId");

    m_ingestionJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");

    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
    m_failureReasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionJob::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_ingestionJobIdHasBeenSet)
  {
   payload.WithString("ingestionJobId", m_ingestionJobId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IngestionJobStatusMapper::GetNameForIngestionJobStatus(m_status));
  }

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("statistics", m_statistics.Jsonize());

  }

  if(m_failureReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureReasonsJsonList(m_failureReasons.size());
   for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
   {
     failureReasonsJsonList[failureReasonsIndex].AsString(m_failureReasons[failureReasonsIndex]);
   }
   payload.WithArray("failureReasons", std::move(failureReasonsJsonList));

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
