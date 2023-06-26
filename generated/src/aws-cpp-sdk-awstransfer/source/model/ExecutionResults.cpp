/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ExecutionResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ExecutionResults::ExecutionResults() : 
    m_stepsHasBeenSet(false),
    m_onExceptionStepsHasBeenSet(false)
{
}

ExecutionResults::ExecutionResults(JsonView jsonValue) : 
    m_stepsHasBeenSet(false),
    m_onExceptionStepsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionResults& ExecutionResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnExceptionSteps"))
  {
    Aws::Utils::Array<JsonView> onExceptionStepsJsonList = jsonValue.GetArray("OnExceptionSteps");
    for(unsigned onExceptionStepsIndex = 0; onExceptionStepsIndex < onExceptionStepsJsonList.GetLength(); ++onExceptionStepsIndex)
    {
      m_onExceptionSteps.push_back(onExceptionStepsJsonList[onExceptionStepsIndex].AsObject());
    }
    m_onExceptionStepsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionResults::Jsonize() const
{
  JsonValue payload;

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_onExceptionStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> onExceptionStepsJsonList(m_onExceptionSteps.size());
   for(unsigned onExceptionStepsIndex = 0; onExceptionStepsIndex < onExceptionStepsJsonList.GetLength(); ++onExceptionStepsIndex)
   {
     onExceptionStepsJsonList[onExceptionStepsIndex].AsObject(m_onExceptionSteps[onExceptionStepsIndex].Jsonize());
   }
   payload.WithArray("OnExceptionSteps", std::move(onExceptionStepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
