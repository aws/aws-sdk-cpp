/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslation.h>
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

GuardrailAutomatedReasoningTranslation::GuardrailAutomatedReasoningTranslation(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningTranslation& GuardrailAutomatedReasoningTranslation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("premises"))
  {
    Aws::Utils::Array<JsonView> premisesJsonList = jsonValue.GetArray("premises");
    for(unsigned premisesIndex = 0; premisesIndex < premisesJsonList.GetLength(); ++premisesIndex)
    {
      m_premises.push_back(premisesJsonList[premisesIndex].AsObject());
    }
    m_premisesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("claims"))
  {
    Aws::Utils::Array<JsonView> claimsJsonList = jsonValue.GetArray("claims");
    for(unsigned claimsIndex = 0; claimsIndex < claimsJsonList.GetLength(); ++claimsIndex)
    {
      m_claims.push_back(claimsJsonList[claimsIndex].AsObject());
    }
    m_claimsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("untranslatedPremises"))
  {
    Aws::Utils::Array<JsonView> untranslatedPremisesJsonList = jsonValue.GetArray("untranslatedPremises");
    for(unsigned untranslatedPremisesIndex = 0; untranslatedPremisesIndex < untranslatedPremisesJsonList.GetLength(); ++untranslatedPremisesIndex)
    {
      m_untranslatedPremises.push_back(untranslatedPremisesJsonList[untranslatedPremisesIndex].AsObject());
    }
    m_untranslatedPremisesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("untranslatedClaims"))
  {
    Aws::Utils::Array<JsonView> untranslatedClaimsJsonList = jsonValue.GetArray("untranslatedClaims");
    for(unsigned untranslatedClaimsIndex = 0; untranslatedClaimsIndex < untranslatedClaimsJsonList.GetLength(); ++untranslatedClaimsIndex)
    {
      m_untranslatedClaims.push_back(untranslatedClaimsJsonList[untranslatedClaimsIndex].AsObject());
    }
    m_untranslatedClaimsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confidence"))
  {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningTranslation::Jsonize() const
{
  JsonValue payload;

  if(m_premisesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> premisesJsonList(m_premises.size());
   for(unsigned premisesIndex = 0; premisesIndex < premisesJsonList.GetLength(); ++premisesIndex)
   {
     premisesJsonList[premisesIndex].AsObject(m_premises[premisesIndex].Jsonize());
   }
   payload.WithArray("premises", std::move(premisesJsonList));

  }

  if(m_claimsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> claimsJsonList(m_claims.size());
   for(unsigned claimsIndex = 0; claimsIndex < claimsJsonList.GetLength(); ++claimsIndex)
   {
     claimsJsonList[claimsIndex].AsObject(m_claims[claimsIndex].Jsonize());
   }
   payload.WithArray("claims", std::move(claimsJsonList));

  }

  if(m_untranslatedPremisesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> untranslatedPremisesJsonList(m_untranslatedPremises.size());
   for(unsigned untranslatedPremisesIndex = 0; untranslatedPremisesIndex < untranslatedPremisesJsonList.GetLength(); ++untranslatedPremisesIndex)
   {
     untranslatedPremisesJsonList[untranslatedPremisesIndex].AsObject(m_untranslatedPremises[untranslatedPremisesIndex].Jsonize());
   }
   payload.WithArray("untranslatedPremises", std::move(untranslatedPremisesJsonList));

  }

  if(m_untranslatedClaimsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> untranslatedClaimsJsonList(m_untranslatedClaims.size());
   for(unsigned untranslatedClaimsIndex = 0; untranslatedClaimsIndex < untranslatedClaimsJsonList.GetLength(); ++untranslatedClaimsIndex)
   {
     untranslatedClaimsJsonList[untranslatedClaimsIndex].AsObject(m_untranslatedClaims[untranslatedClaimsIndex].Jsonize());
   }
   payload.WithArray("untranslatedClaims", std::move(untranslatedClaimsJsonList));

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
