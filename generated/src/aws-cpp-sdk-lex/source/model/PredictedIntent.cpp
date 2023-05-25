/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PredictedIntent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

PredictedIntent::PredictedIntent() : 
    m_intentNameHasBeenSet(false),
    m_nluIntentConfidenceHasBeenSet(false),
    m_slotsHasBeenSet(false)
{
}

PredictedIntent::PredictedIntent(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_nluIntentConfidenceHasBeenSet(false),
    m_slotsHasBeenSet(false)
{
  *this = jsonValue;
}

PredictedIntent& PredictedIntent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nluIntentConfidence"))
  {
    m_nluIntentConfidence = jsonValue.GetObject("nluIntentConfidence");

    m_nluIntentConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Map<Aws::String, JsonView> slotsJsonMap = jsonValue.GetObject("slots").GetAllObjects();
    for(auto& slotsItem : slotsJsonMap)
    {
      m_slots[slotsItem.first] = slotsItem.second.AsString();
    }
    m_slotsHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictedIntent::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_nluIntentConfidenceHasBeenSet)
  {
   payload.WithObject("nluIntentConfidence", m_nluIntentConfidence.Jsonize());

  }

  if(m_slotsHasBeenSet)
  {
   JsonValue slotsJsonMap;
   for(auto& slotsItem : m_slots)
   {
     slotsJsonMap.WithString(slotsItem.first, slotsItem.second);
   }
   payload.WithObject("slots", std::move(slotsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
