/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_executionResultHasBeenSet(false)
{
}

ActionExecutionOutput::ActionExecutionOutput(JsonView jsonValue) : 
    m_outputArtifactsHasBeenSet(false),
    m_executionResultHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionOutput& ActionExecutionOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputArtifacts"))
  {
    Array<JsonView> outputArtifactsJsonList = jsonValue.GetArray("outputArtifacts");
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

  return *this;
}

JsonValue ActionExecutionOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputArtifactsHasBeenSet)
  {
   Array<JsonValue> outputArtifactsJsonList(m_outputArtifacts.size());
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

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
