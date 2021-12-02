/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/RecommendedIntentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

RecommendedIntentSummary::RecommendedIntentSummary() : 
    m_intentIdHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_sampleUtterancesCount(0),
    m_sampleUtterancesCountHasBeenSet(false)
{
}

RecommendedIntentSummary::RecommendedIntentSummary(JsonView jsonValue) : 
    m_intentIdHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_sampleUtterancesCount(0),
    m_sampleUtterancesCountHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendedIntentSummary& RecommendedIntentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");

    m_intentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleUtterancesCount"))
  {
    m_sampleUtterancesCount = jsonValue.GetInteger("sampleUtterancesCount");

    m_sampleUtterancesCountHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendedIntentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_intentIdHasBeenSet)
  {
   payload.WithString("intentId", m_intentId);

  }

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_sampleUtterancesCountHasBeenSet)
  {
   payload.WithInteger("sampleUtterancesCount", m_sampleUtterancesCount);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
