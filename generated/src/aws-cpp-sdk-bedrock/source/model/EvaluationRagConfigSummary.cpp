/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationRagConfigSummary.h>
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

EvaluationRagConfigSummary::EvaluationRagConfigSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationRagConfigSummary& EvaluationRagConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockKnowledgeBaseIdentifiers"))
  {
    Aws::Utils::Array<JsonView> bedrockKnowledgeBaseIdentifiersJsonList = jsonValue.GetArray("bedrockKnowledgeBaseIdentifiers");
    for(unsigned bedrockKnowledgeBaseIdentifiersIndex = 0; bedrockKnowledgeBaseIdentifiersIndex < bedrockKnowledgeBaseIdentifiersJsonList.GetLength(); ++bedrockKnowledgeBaseIdentifiersIndex)
    {
      m_bedrockKnowledgeBaseIdentifiers.push_back(bedrockKnowledgeBaseIdentifiersJsonList[bedrockKnowledgeBaseIdentifiersIndex].AsString());
    }
    m_bedrockKnowledgeBaseIdentifiersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("precomputedRagSourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> precomputedRagSourceIdentifiersJsonList = jsonValue.GetArray("precomputedRagSourceIdentifiers");
    for(unsigned precomputedRagSourceIdentifiersIndex = 0; precomputedRagSourceIdentifiersIndex < precomputedRagSourceIdentifiersJsonList.GetLength(); ++precomputedRagSourceIdentifiersIndex)
    {
      m_precomputedRagSourceIdentifiers.push_back(precomputedRagSourceIdentifiersJsonList[precomputedRagSourceIdentifiersIndex].AsString());
    }
    m_precomputedRagSourceIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationRagConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockKnowledgeBaseIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bedrockKnowledgeBaseIdentifiersJsonList(m_bedrockKnowledgeBaseIdentifiers.size());
   for(unsigned bedrockKnowledgeBaseIdentifiersIndex = 0; bedrockKnowledgeBaseIdentifiersIndex < bedrockKnowledgeBaseIdentifiersJsonList.GetLength(); ++bedrockKnowledgeBaseIdentifiersIndex)
   {
     bedrockKnowledgeBaseIdentifiersJsonList[bedrockKnowledgeBaseIdentifiersIndex].AsString(m_bedrockKnowledgeBaseIdentifiers[bedrockKnowledgeBaseIdentifiersIndex]);
   }
   payload.WithArray("bedrockKnowledgeBaseIdentifiers", std::move(bedrockKnowledgeBaseIdentifiersJsonList));

  }

  if(m_precomputedRagSourceIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> precomputedRagSourceIdentifiersJsonList(m_precomputedRagSourceIdentifiers.size());
   for(unsigned precomputedRagSourceIdentifiersIndex = 0; precomputedRagSourceIdentifiersIndex < precomputedRagSourceIdentifiersJsonList.GetLength(); ++precomputedRagSourceIdentifiersIndex)
   {
     precomputedRagSourceIdentifiersJsonList[precomputedRagSourceIdentifiersIndex].AsString(m_precomputedRagSourceIdentifiers[precomputedRagSourceIdentifiersIndex]);
   }
   payload.WithArray("precomputedRagSourceIdentifiers", std::move(precomputedRagSourceIdentifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
