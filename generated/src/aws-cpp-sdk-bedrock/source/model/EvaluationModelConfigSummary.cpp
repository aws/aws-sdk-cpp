/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationModelConfigSummary.h>
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

EvaluationModelConfigSummary::EvaluationModelConfigSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationModelConfigSummary& EvaluationModelConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockModelIdentifiers"))
  {
    Aws::Utils::Array<JsonView> bedrockModelIdentifiersJsonList = jsonValue.GetArray("bedrockModelIdentifiers");
    for(unsigned bedrockModelIdentifiersIndex = 0; bedrockModelIdentifiersIndex < bedrockModelIdentifiersJsonList.GetLength(); ++bedrockModelIdentifiersIndex)
    {
      m_bedrockModelIdentifiers.push_back(bedrockModelIdentifiersJsonList[bedrockModelIdentifiersIndex].AsString());
    }
    m_bedrockModelIdentifiersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("precomputedInferenceSourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> precomputedInferenceSourceIdentifiersJsonList = jsonValue.GetArray("precomputedInferenceSourceIdentifiers");
    for(unsigned precomputedInferenceSourceIdentifiersIndex = 0; precomputedInferenceSourceIdentifiersIndex < precomputedInferenceSourceIdentifiersJsonList.GetLength(); ++precomputedInferenceSourceIdentifiersIndex)
    {
      m_precomputedInferenceSourceIdentifiers.push_back(precomputedInferenceSourceIdentifiersJsonList[precomputedInferenceSourceIdentifiersIndex].AsString());
    }
    m_precomputedInferenceSourceIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationModelConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockModelIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bedrockModelIdentifiersJsonList(m_bedrockModelIdentifiers.size());
   for(unsigned bedrockModelIdentifiersIndex = 0; bedrockModelIdentifiersIndex < bedrockModelIdentifiersJsonList.GetLength(); ++bedrockModelIdentifiersIndex)
   {
     bedrockModelIdentifiersJsonList[bedrockModelIdentifiersIndex].AsString(m_bedrockModelIdentifiers[bedrockModelIdentifiersIndex]);
   }
   payload.WithArray("bedrockModelIdentifiers", std::move(bedrockModelIdentifiersJsonList));

  }

  if(m_precomputedInferenceSourceIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> precomputedInferenceSourceIdentifiersJsonList(m_precomputedInferenceSourceIdentifiers.size());
   for(unsigned precomputedInferenceSourceIdentifiersIndex = 0; precomputedInferenceSourceIdentifiersIndex < precomputedInferenceSourceIdentifiersJsonList.GetLength(); ++precomputedInferenceSourceIdentifiersIndex)
   {
     precomputedInferenceSourceIdentifiersJsonList[precomputedInferenceSourceIdentifiersIndex].AsString(m_precomputedInferenceSourceIdentifiers[precomputedInferenceSourceIdentifiersIndex]);
   }
   payload.WithArray("precomputedInferenceSourceIdentifiers", std::move(precomputedInferenceSourceIdentifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
