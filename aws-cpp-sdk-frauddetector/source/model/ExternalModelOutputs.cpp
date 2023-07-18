/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ExternalModelOutputs.h>
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

ExternalModelOutputs::ExternalModelOutputs() : 
    m_externalModelHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

ExternalModelOutputs::ExternalModelOutputs(JsonView jsonValue) : 
    m_externalModelHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalModelOutputs& ExternalModelOutputs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("externalModel"))
  {
    m_externalModel = jsonValue.GetObject("externalModel");

    m_externalModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Map<Aws::String, JsonView> outputsJsonMap = jsonValue.GetObject("outputs").GetAllObjects();
    for(auto& outputsItem : outputsJsonMap)
    {
      m_outputs[outputsItem.first] = outputsItem.second.AsString();
    }
    m_outputsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalModelOutputs::Jsonize() const
{
  JsonValue payload;

  if(m_externalModelHasBeenSet)
  {
   payload.WithObject("externalModel", m_externalModel.Jsonize());

  }

  if(m_outputsHasBeenSet)
  {
   JsonValue outputsJsonMap;
   for(auto& outputsItem : m_outputs)
   {
     outputsJsonMap.WithString(outputsItem.first, outputsItem.second);
   }
   payload.WithObject("outputs", std::move(outputsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
