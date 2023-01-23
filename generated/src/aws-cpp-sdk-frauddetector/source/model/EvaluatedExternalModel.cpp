/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EvaluatedExternalModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

EvaluatedExternalModel::EvaluatedExternalModel() : 
    m_modelEndpointHasBeenSet(false),
    m_useEventVariables(false),
    m_useEventVariablesHasBeenSet(false),
    m_inputVariablesHasBeenSet(false),
    m_outputVariablesHasBeenSet(false)
{
}

EvaluatedExternalModel::EvaluatedExternalModel(JsonView jsonValue) : 
    m_modelEndpointHasBeenSet(false),
    m_useEventVariables(false),
    m_useEventVariablesHasBeenSet(false),
    m_inputVariablesHasBeenSet(false),
    m_outputVariablesHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluatedExternalModel& EvaluatedExternalModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelEndpoint"))
  {
    m_modelEndpoint = jsonValue.GetString("modelEndpoint");

    m_modelEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useEventVariables"))
  {
    m_useEventVariables = jsonValue.GetBool("useEventVariables");

    m_useEventVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputVariables"))
  {
    Aws::Map<Aws::String, JsonView> inputVariablesJsonMap = jsonValue.GetObject("inputVariables").GetAllObjects();
    for(auto& inputVariablesItem : inputVariablesJsonMap)
    {
      m_inputVariables[inputVariablesItem.first] = inputVariablesItem.second.AsString();
    }
    m_inputVariablesHasBeenSet = true;
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

JsonValue EvaluatedExternalModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelEndpointHasBeenSet)
  {
   payload.WithString("modelEndpoint", m_modelEndpoint);

  }

  if(m_useEventVariablesHasBeenSet)
  {
   payload.WithBool("useEventVariables", m_useEventVariables);

  }

  if(m_inputVariablesHasBeenSet)
  {
   JsonValue inputVariablesJsonMap;
   for(auto& inputVariablesItem : m_inputVariables)
   {
     inputVariablesJsonMap.WithString(inputVariablesItem.first, inputVariablesItem.second);
   }
   payload.WithObject("inputVariables", std::move(inputVariablesJsonMap));

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
} // namespace FraudDetector
} // namespace Aws
