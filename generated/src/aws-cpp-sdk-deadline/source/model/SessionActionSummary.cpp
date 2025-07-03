/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

SessionActionSummary::SessionActionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionActionSummary& SessionActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionActionId"))
  {
    m_sessionActionId = jsonValue.GetString("sessionActionId");
    m_sessionActionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SessionActionStatusMapper::GetSessionActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workerUpdatedAt"))
  {
    m_workerUpdatedAt = jsonValue.GetString("workerUpdatedAt");
    m_workerUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progressPercent"))
  {
    m_progressPercent = jsonValue.GetDouble("progressPercent");
    m_progressPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("manifests"))
  {
    Aws::Utils::Array<JsonView> manifestsJsonList = jsonValue.GetArray("manifests");
    for(unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex)
    {
      m_manifests.push_back(manifestsJsonList[manifestsIndex].AsObject());
    }
    m_manifestsHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sessionActionIdHasBeenSet)
  {
   payload.WithString("sessionActionId", m_sessionActionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SessionActionStatusMapper::GetNameForSessionActionStatus(m_status));
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_workerUpdatedAtHasBeenSet)
  {
   payload.WithString("workerUpdatedAt", m_workerUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithDouble("progressPercent", m_progressPercent);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_manifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> manifestsJsonList(m_manifests.size());
   for(unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex)
   {
     manifestsJsonList[manifestsIndex].AsObject(m_manifests[manifestsIndex].Jsonize());
   }
   payload.WithArray("manifests", std::move(manifestsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
