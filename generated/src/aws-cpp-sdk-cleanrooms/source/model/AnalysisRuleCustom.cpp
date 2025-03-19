/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRuleCustom.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisRuleCustom::AnalysisRuleCustom(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisRuleCustom& AnalysisRuleCustom::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedAnalyses"))
  {
    Aws::Utils::Array<JsonView> allowedAnalysesJsonList = jsonValue.GetArray("allowedAnalyses");
    for(unsigned allowedAnalysesIndex = 0; allowedAnalysesIndex < allowedAnalysesJsonList.GetLength(); ++allowedAnalysesIndex)
    {
      m_allowedAnalyses.push_back(allowedAnalysesJsonList[allowedAnalysesIndex].AsString());
    }
    m_allowedAnalysesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedAnalysisProviders"))
  {
    Aws::Utils::Array<JsonView> allowedAnalysisProvidersJsonList = jsonValue.GetArray("allowedAnalysisProviders");
    for(unsigned allowedAnalysisProvidersIndex = 0; allowedAnalysisProvidersIndex < allowedAnalysisProvidersJsonList.GetLength(); ++allowedAnalysisProvidersIndex)
    {
      m_allowedAnalysisProviders.push_back(allowedAnalysisProvidersJsonList[allowedAnalysisProvidersIndex].AsString());
    }
    m_allowedAnalysisProvidersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalAnalyses"))
  {
    m_additionalAnalyses = AdditionalAnalysesMapper::GetAdditionalAnalysesForName(jsonValue.GetString("additionalAnalyses"));
    m_additionalAnalysesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disallowedOutputColumns"))
  {
    Aws::Utils::Array<JsonView> disallowedOutputColumnsJsonList = jsonValue.GetArray("disallowedOutputColumns");
    for(unsigned disallowedOutputColumnsIndex = 0; disallowedOutputColumnsIndex < disallowedOutputColumnsJsonList.GetLength(); ++disallowedOutputColumnsIndex)
    {
      m_disallowedOutputColumns.push_back(disallowedOutputColumnsJsonList[disallowedOutputColumnsIndex].AsString());
    }
    m_disallowedOutputColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("differentialPrivacy"))
  {
    m_differentialPrivacy = jsonValue.GetObject("differentialPrivacy");
    m_differentialPrivacyHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisRuleCustom::Jsonize() const
{
  JsonValue payload;

  if(m_allowedAnalysesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedAnalysesJsonList(m_allowedAnalyses.size());
   for(unsigned allowedAnalysesIndex = 0; allowedAnalysesIndex < allowedAnalysesJsonList.GetLength(); ++allowedAnalysesIndex)
   {
     allowedAnalysesJsonList[allowedAnalysesIndex].AsString(m_allowedAnalyses[allowedAnalysesIndex]);
   }
   payload.WithArray("allowedAnalyses", std::move(allowedAnalysesJsonList));

  }

  if(m_allowedAnalysisProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedAnalysisProvidersJsonList(m_allowedAnalysisProviders.size());
   for(unsigned allowedAnalysisProvidersIndex = 0; allowedAnalysisProvidersIndex < allowedAnalysisProvidersJsonList.GetLength(); ++allowedAnalysisProvidersIndex)
   {
     allowedAnalysisProvidersJsonList[allowedAnalysisProvidersIndex].AsString(m_allowedAnalysisProviders[allowedAnalysisProvidersIndex]);
   }
   payload.WithArray("allowedAnalysisProviders", std::move(allowedAnalysisProvidersJsonList));

  }

  if(m_additionalAnalysesHasBeenSet)
  {
   payload.WithString("additionalAnalyses", AdditionalAnalysesMapper::GetNameForAdditionalAnalyses(m_additionalAnalyses));
  }

  if(m_disallowedOutputColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disallowedOutputColumnsJsonList(m_disallowedOutputColumns.size());
   for(unsigned disallowedOutputColumnsIndex = 0; disallowedOutputColumnsIndex < disallowedOutputColumnsJsonList.GetLength(); ++disallowedOutputColumnsIndex)
   {
     disallowedOutputColumnsJsonList[disallowedOutputColumnsIndex].AsString(m_disallowedOutputColumns[disallowedOutputColumnsIndex]);
   }
   payload.WithArray("disallowedOutputColumns", std::move(disallowedOutputColumnsJsonList));

  }

  if(m_differentialPrivacyHasBeenSet)
  {
   payload.WithObject("differentialPrivacy", m_differentialPrivacy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
