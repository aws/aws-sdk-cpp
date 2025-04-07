/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailTraceAssessment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailTraceAssessment::GuardrailTraceAssessment(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTraceAssessment& GuardrailTraceAssessment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelOutput"))
  {
    Aws::Utils::Array<JsonView> modelOutputJsonList = jsonValue.GetArray("modelOutput");
    for(unsigned modelOutputIndex = 0; modelOutputIndex < modelOutputJsonList.GetLength(); ++modelOutputIndex)
    {
      m_modelOutput.push_back(modelOutputJsonList[modelOutputIndex].AsString());
    }
    m_modelOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputAssessment"))
  {
    Aws::Map<Aws::String, JsonView> inputAssessmentJsonMap = jsonValue.GetObject("inputAssessment").GetAllObjects();
    for(auto& inputAssessmentItem : inputAssessmentJsonMap)
    {
      m_inputAssessment[inputAssessmentItem.first] = inputAssessmentItem.second.AsObject();
    }
    m_inputAssessmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputAssessments"))
  {
    Aws::Map<Aws::String, JsonView> outputAssessmentsJsonMap = jsonValue.GetObject("outputAssessments").GetAllObjects();
    for(auto& outputAssessmentsItem : outputAssessmentsJsonMap)
    {
      Aws::Utils::Array<JsonView> guardrailAssessmentListJsonList = outputAssessmentsItem.second.AsArray();
      Aws::Vector<GuardrailAssessment> guardrailAssessmentListList;
      guardrailAssessmentListList.reserve((size_t)guardrailAssessmentListJsonList.GetLength());
      for(unsigned guardrailAssessmentListIndex = 0; guardrailAssessmentListIndex < guardrailAssessmentListJsonList.GetLength(); ++guardrailAssessmentListIndex)
      {
        guardrailAssessmentListList.push_back(guardrailAssessmentListJsonList[guardrailAssessmentListIndex].AsObject());
      }
      m_outputAssessments[outputAssessmentsItem.first] = std::move(guardrailAssessmentListList);
    }
    m_outputAssessmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionReason"))
  {
    m_actionReason = jsonValue.GetString("actionReason");
    m_actionReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTraceAssessment::Jsonize() const
{
  JsonValue payload;

  if(m_modelOutputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelOutputJsonList(m_modelOutput.size());
   for(unsigned modelOutputIndex = 0; modelOutputIndex < modelOutputJsonList.GetLength(); ++modelOutputIndex)
   {
     modelOutputJsonList[modelOutputIndex].AsString(m_modelOutput[modelOutputIndex]);
   }
   payload.WithArray("modelOutput", std::move(modelOutputJsonList));

  }

  if(m_inputAssessmentHasBeenSet)
  {
   JsonValue inputAssessmentJsonMap;
   for(auto& inputAssessmentItem : m_inputAssessment)
   {
     inputAssessmentJsonMap.WithObject(inputAssessmentItem.first, inputAssessmentItem.second.Jsonize());
   }
   payload.WithObject("inputAssessment", std::move(inputAssessmentJsonMap));

  }

  if(m_outputAssessmentsHasBeenSet)
  {
   JsonValue outputAssessmentsJsonMap;
   for(auto& outputAssessmentsItem : m_outputAssessments)
   {
     Aws::Utils::Array<JsonValue> guardrailAssessmentListJsonList(outputAssessmentsItem.second.size());
     for(unsigned guardrailAssessmentListIndex = 0; guardrailAssessmentListIndex < guardrailAssessmentListJsonList.GetLength(); ++guardrailAssessmentListIndex)
     {
       guardrailAssessmentListJsonList[guardrailAssessmentListIndex].AsObject(outputAssessmentsItem.second[guardrailAssessmentListIndex].Jsonize());
     }
     outputAssessmentsJsonMap.WithArray(outputAssessmentsItem.first, std::move(guardrailAssessmentListJsonList));
   }
   payload.WithObject("outputAssessments", std::move(outputAssessmentsJsonMap));

  }

  if(m_actionReasonHasBeenSet)
  {
   payload.WithString("actionReason", m_actionReason);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
