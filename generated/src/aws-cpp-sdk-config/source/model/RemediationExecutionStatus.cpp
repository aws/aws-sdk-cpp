/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationExecutionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RemediationExecutionStatus::RemediationExecutionStatus() : 
    m_resourceKeyHasBeenSet(false),
    m_state(RemediationExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stepDetailsHasBeenSet(false),
    m_invocationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

RemediationExecutionStatus::RemediationExecutionStatus(JsonView jsonValue) : 
    m_resourceKeyHasBeenSet(false),
    m_state(RemediationExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stepDetailsHasBeenSet(false),
    m_invocationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RemediationExecutionStatus& RemediationExecutionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceKey"))
  {
    m_resourceKey = jsonValue.GetObject("ResourceKey");

    m_resourceKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RemediationExecutionStateMapper::GetRemediationExecutionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepDetails"))
  {
    Aws::Utils::Array<JsonView> stepDetailsJsonList = jsonValue.GetArray("StepDetails");
    for(unsigned stepDetailsIndex = 0; stepDetailsIndex < stepDetailsJsonList.GetLength(); ++stepDetailsIndex)
    {
      m_stepDetails.push_back(stepDetailsJsonList[stepDetailsIndex].AsObject());
    }
    m_stepDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationTime"))
  {
    m_invocationTime = jsonValue.GetDouble("InvocationTime");

    m_invocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RemediationExecutionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_resourceKeyHasBeenSet)
  {
   payload.WithObject("ResourceKey", m_resourceKey.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", RemediationExecutionStateMapper::GetNameForRemediationExecutionState(m_state));
  }

  if(m_stepDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepDetailsJsonList(m_stepDetails.size());
   for(unsigned stepDetailsIndex = 0; stepDetailsIndex < stepDetailsJsonList.GetLength(); ++stepDetailsIndex)
   {
     stepDetailsJsonList[stepDetailsIndex].AsObject(m_stepDetails[stepDetailsIndex].Jsonize());
   }
   payload.WithArray("StepDetails", std::move(stepDetailsJsonList));

  }

  if(m_invocationTimeHasBeenSet)
  {
   payload.WithDouble("InvocationTime", m_invocationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
