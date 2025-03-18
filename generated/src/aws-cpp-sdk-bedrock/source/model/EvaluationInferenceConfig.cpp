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

EvaluationInferenceConfig::EvaluationInferenceConfig(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ragConfigs"))
  {
    Aws::Utils::Array<JsonView> ragConfigsJsonList = jsonValue.GetArray("ragConfigs");
    for(unsigned ragConfigsIndex = 0; ragConfigsIndex < ragConfigsJsonList.GetLength(); ++ragConfigsIndex)
    {
      m_ragConfigs.push_back(ragConfigsJsonList[ragConfigsIndex].AsObject());
    }
    m_ragConfigsHasBeenSet = true;
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

  if(m_ragConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ragConfigsJsonList(m_ragConfigs.size());
   for(unsigned ragConfigsIndex = 0; ragConfigsIndex < ragConfigsJsonList.GetLength(); ++ragConfigsIndex)
   {
     ragConfigsJsonList[ragConfigsIndex].AsObject(m_ragConfigs[ragConfigsIndex].Jsonize());
   }
   payload.WithArray("ragConfigs", std::move(ragConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
