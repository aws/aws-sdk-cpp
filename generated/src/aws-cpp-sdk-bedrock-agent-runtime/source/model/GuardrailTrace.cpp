/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailTrace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

GuardrailTrace::GuardrailTrace(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTrace& GuardrailTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");
    m_traceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputAssessments"))
  {
    Aws::Utils::Array<JsonView> inputAssessmentsJsonList = jsonValue.GetArray("inputAssessments");
    for(unsigned inputAssessmentsIndex = 0; inputAssessmentsIndex < inputAssessmentsJsonList.GetLength(); ++inputAssessmentsIndex)
    {
      m_inputAssessments.push_back(inputAssessmentsJsonList[inputAssessmentsIndex].AsObject());
    }
    m_inputAssessmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputAssessments"))
  {
    Aws::Utils::Array<JsonView> outputAssessmentsJsonList = jsonValue.GetArray("outputAssessments");
    for(unsigned outputAssessmentsIndex = 0; outputAssessmentsIndex < outputAssessmentsJsonList.GetLength(); ++outputAssessmentsIndex)
    {
      m_outputAssessments.push_back(outputAssessmentsJsonList[outputAssessmentsIndex].AsObject());
    }
    m_outputAssessmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTrace::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailActionMapper::GetNameForGuardrailAction(m_action));
  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  if(m_inputAssessmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputAssessmentsJsonList(m_inputAssessments.size());
   for(unsigned inputAssessmentsIndex = 0; inputAssessmentsIndex < inputAssessmentsJsonList.GetLength(); ++inputAssessmentsIndex)
   {
     inputAssessmentsJsonList[inputAssessmentsIndex].AsObject(m_inputAssessments[inputAssessmentsIndex].Jsonize());
   }
   payload.WithArray("inputAssessments", std::move(inputAssessmentsJsonList));

  }

  if(m_outputAssessmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputAssessmentsJsonList(m_outputAssessments.size());
   for(unsigned outputAssessmentsIndex = 0; outputAssessmentsIndex < outputAssessmentsJsonList.GetLength(); ++outputAssessmentsIndex)
   {
     outputAssessmentsJsonList[outputAssessmentsIndex].AsObject(m_outputAssessments[outputAssessmentsIndex].Jsonize());
   }
   payload.WithArray("outputAssessments", std::move(outputAssessmentsJsonList));

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
