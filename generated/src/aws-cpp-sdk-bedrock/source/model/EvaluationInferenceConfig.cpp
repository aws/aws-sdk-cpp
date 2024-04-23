/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationInferenceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationInferenceConfig::EvaluationInferenceConfig() : 
    m_modelsHasBeenSet(false)
{
}

EvaluationInferenceConfig::EvaluationInferenceConfig(JsonView jsonValue) : 
    m_modelsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationInferenceConfig& EvaluationInferenceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationInferenceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelsJsonList(m_models.size());
   for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
   {
     modelsJsonList[modelsIndex].AsObject(m_models[modelsIndex].Jsonize());
   }
   payload.WithArray("models", std::move(modelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
