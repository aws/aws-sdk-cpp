/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/Script.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

Script::Script() : 
    m_stagesHasBeenSet(false),
    m_executionHandlerService(ExecutionHandlerServiceValues::NOT_SET),
    m_executionHandlerServiceHasBeenSet(false),
    m_executionHandlerHasBeenSet(false),
    m_executeOperationOnScriptFailure(false),
    m_executeOperationOnScriptFailureHasBeenSet(false),
    m_executionTimeout(0),
    m_executionTimeoutHasBeenSet(false),
    m_maximumRetryCount(0),
    m_maximumRetryCountHasBeenSet(false)
{
}

Script::Script(JsonView jsonValue) : 
    m_stagesHasBeenSet(false),
    m_executionHandlerService(ExecutionHandlerServiceValues::NOT_SET),
    m_executionHandlerServiceHasBeenSet(false),
    m_executionHandlerHasBeenSet(false),
    m_executeOperationOnScriptFailure(false),
    m_executeOperationOnScriptFailureHasBeenSet(false),
    m_executionTimeout(0),
    m_executionTimeoutHasBeenSet(false),
    m_maximumRetryCount(0),
    m_maximumRetryCountHasBeenSet(false)
{
  *this = jsonValue;
}

Script& Script::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Stages"))
  {
    Aws::Utils::Array<JsonView> stagesJsonList = jsonValue.GetArray("Stages");
    for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
    {
      m_stages.push_back(StageValuesMapper::GetStageValuesForName(stagesJsonList[stagesIndex].AsString()));
    }
    m_stagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionHandlerService"))
  {
    m_executionHandlerService = ExecutionHandlerServiceValuesMapper::GetExecutionHandlerServiceValuesForName(jsonValue.GetString("ExecutionHandlerService"));

    m_executionHandlerServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionHandler"))
  {
    m_executionHandler = jsonValue.GetString("ExecutionHandler");

    m_executionHandlerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecuteOperationOnScriptFailure"))
  {
    m_executeOperationOnScriptFailure = jsonValue.GetBool("ExecuteOperationOnScriptFailure");

    m_executeOperationOnScriptFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionTimeout"))
  {
    m_executionTimeout = jsonValue.GetInteger("ExecutionTimeout");

    m_executionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRetryCount"))
  {
    m_maximumRetryCount = jsonValue.GetInteger("MaximumRetryCount");

    m_maximumRetryCountHasBeenSet = true;
  }

  return *this;
}

JsonValue Script::Jsonize() const
{
  JsonValue payload;

  if(m_stagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stagesJsonList(m_stages.size());
   for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
   {
     stagesJsonList[stagesIndex].AsString(StageValuesMapper::GetNameForStageValues(m_stages[stagesIndex]));
   }
   payload.WithArray("Stages", std::move(stagesJsonList));

  }

  if(m_executionHandlerServiceHasBeenSet)
  {
   payload.WithString("ExecutionHandlerService", ExecutionHandlerServiceValuesMapper::GetNameForExecutionHandlerServiceValues(m_executionHandlerService));
  }

  if(m_executionHandlerHasBeenSet)
  {
   payload.WithString("ExecutionHandler", m_executionHandler);

  }

  if(m_executeOperationOnScriptFailureHasBeenSet)
  {
   payload.WithBool("ExecuteOperationOnScriptFailure", m_executeOperationOnScriptFailure);

  }

  if(m_executionTimeoutHasBeenSet)
  {
   payload.WithInteger("ExecutionTimeout", m_executionTimeout);

  }

  if(m_maximumRetryCountHasBeenSet)
  {
   payload.WithInteger("MaximumRetryCount", m_maximumRetryCount);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
