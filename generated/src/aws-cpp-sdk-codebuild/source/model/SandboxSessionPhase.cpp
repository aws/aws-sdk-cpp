/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/SandboxSessionPhase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

SandboxSessionPhase::SandboxSessionPhase(JsonView jsonValue)
{
  *this = jsonValue;
}

SandboxSessionPhase& SandboxSessionPhase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("phaseType"))
  {
    m_phaseType = jsonValue.GetString("phaseType");
    m_phaseTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phaseStatus"))
  {
    m_phaseStatus = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("phaseStatus"));
    m_phaseStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("durationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInt64("durationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contexts"))
  {
    Aws::Utils::Array<JsonView> contextsJsonList = jsonValue.GetArray("contexts");
    for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
    {
      m_contexts.push_back(contextsJsonList[contextsIndex].AsObject());
    }
    m_contextsHasBeenSet = true;
  }
  return *this;
}

JsonValue SandboxSessionPhase::Jsonize() const
{
  JsonValue payload;

  if(m_phaseTypeHasBeenSet)
  {
   payload.WithString("phaseType", m_phaseType);

  }

  if(m_phaseStatusHasBeenSet)
  {
   payload.WithString("phaseStatus", StatusTypeMapper::GetNameForStatusType(m_phaseStatus));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInt64("durationInSeconds", m_durationInSeconds);

  }

  if(m_contextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contextsJsonList(m_contexts.size());
   for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
   {
     contextsJsonList[contextsIndex].AsObject(m_contexts[contextsIndex].Jsonize());
   }
   payload.WithArray("contexts", std::move(contextsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
