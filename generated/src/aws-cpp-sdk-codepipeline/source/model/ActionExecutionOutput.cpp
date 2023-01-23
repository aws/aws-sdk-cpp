/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionExecutionOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionExecutionOutput::ActionExecutionOutput() : 
    m_outputArtifactsHasBeenSet(false),
    m_executionResultHasBeenSet(false),
    m_outputVariablesHasBeenSet(false)
{
}

ActionExecutionOutput::ActionExecutionOutput(JsonView jsonValue) : 
    m_outputArtifactsHasBeenSet(false),
    m_executionResultHasBeenSet(false),
    m_outputVariablesHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionOutput& ActionExecutionOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputArtifacts"))
  {
    Aws::Utils::Array<JsonView> outputArtifactsJsonList = jsonValue.GetArray("outputArtifacts");
    for(unsigned outputArtifactsIndex = 0; outputArtifactsIndex < outputArtifactsJsonList.GetLength(); ++outputArtifactsIndex)
    {
      m_outputArtifacts.push_back(outputArtifactsJsonList[outputArtifactsIndex].AsObject());
    }
    m_outputArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionResult"))
  {
    m_executionResult = jsonValue.GetObject("executionResult");

    m_executionResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputVariables"))
  {
    Aws::Map<Aws::String, JsonView> outputVariablesJsonMap = jsonValue.GetObject("outputVariables").GetAllObjects();
    for(auto& outputVariablesItem : outputVariablesJsonMap)
    {
      m_outputVariables[outputVariablesItem.first] = outputVariablesItem.second.AsString();
    }
    m_outputVariablesHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputArtifactsJsonList(m_outputArtifacts.size());
   for(unsigned outputArtifactsIndex = 0; outputArtifactsIndex < outputArtifactsJsonList.GetLength(); ++outputArtifactsIndex)
   {
     outputArtifactsJsonList[outputArtifactsIndex].AsObject(m_outputArtifacts[outputArtifactsIndex].Jsonize());
   }
   payload.WithArray("outputArtifacts", std::move(outputArtifactsJsonList));

  }

  if(m_executionResultHasBeenSet)
  {
   payload.WithObject("executionResult", m_executionResult.Jsonize());

  }

  if(m_outputVariablesHasBeenSet)
  {
   JsonValue outputVariablesJsonMap;
   for(auto& outputVariablesItem : m_outputVariables)
   {
     outputVariablesJsonMap.WithString(outputVariablesItem.first, outputVariablesItem.second);
   }
   payload.WithObject("outputVariables", std::move(outputVariablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
