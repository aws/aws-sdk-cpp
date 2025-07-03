/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdatedSessionActionInfo.h>
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

UpdatedSessionActionInfo::UpdatedSessionActionInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdatedSessionActionInfo& UpdatedSessionActionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completedStatus"))
  {
    m_completedStatus = CompletedStatusMapper::GetCompletedStatusForName(jsonValue.GetString("completedStatus"));
    m_completedStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("processExitCode"))
  {
    m_processExitCode = jsonValue.GetInteger("processExitCode");
    m_processExitCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progressMessage"))
  {
    m_progressMessage = jsonValue.GetString("progressMessage");
    m_progressMessageHasBeenSet = true;
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
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progressPercent"))
  {
    m_progressPercent = jsonValue.GetDouble("progressPercent");
    m_progressPercentHasBeenSet = true;
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

JsonValue UpdatedSessionActionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_completedStatusHasBeenSet)
  {
   payload.WithString("completedStatus", CompletedStatusMapper::GetNameForCompletedStatus(m_completedStatus));
  }

  if(m_processExitCodeHasBeenSet)
  {
   payload.WithInteger("processExitCode", m_processExitCode);

  }

  if(m_progressMessageHasBeenSet)
  {
   payload.WithString("progressMessage", m_progressMessage);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithDouble("progressPercent", m_progressPercent);

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
