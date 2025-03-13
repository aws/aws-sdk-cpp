/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluatorModelConfig.h>
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

EvaluatorModelConfig::EvaluatorModelConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluatorModelConfig& EvaluatorModelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockEvaluatorModels"))
  {
    Aws::Utils::Array<JsonView> bedrockEvaluatorModelsJsonList = jsonValue.GetArray("bedrockEvaluatorModels");
    for(unsigned bedrockEvaluatorModelsIndex = 0; bedrockEvaluatorModelsIndex < bedrockEvaluatorModelsJsonList.GetLength(); ++bedrockEvaluatorModelsIndex)
    {
      m_bedrockEvaluatorModels.push_back(bedrockEvaluatorModelsJsonList[bedrockEvaluatorModelsIndex].AsObject());
    }
    m_bedrockEvaluatorModelsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorModelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockEvaluatorModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bedrockEvaluatorModelsJsonList(m_bedrockEvaluatorModels.size());
   for(unsigned bedrockEvaluatorModelsIndex = 0; bedrockEvaluatorModelsIndex < bedrockEvaluatorModelsJsonList.GetLength(); ++bedrockEvaluatorModelsIndex)
   {
     bedrockEvaluatorModelsJsonList[bedrockEvaluatorModelsIndex].AsObject(m_bedrockEvaluatorModels[bedrockEvaluatorModelsIndex].Jsonize());
   }
   payload.WithArray("bedrockEvaluatorModels", std::move(bedrockEvaluatorModelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
