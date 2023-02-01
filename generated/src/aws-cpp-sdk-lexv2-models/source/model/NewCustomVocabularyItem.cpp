/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/NewCustomVocabularyItem.h>
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

NewCustomVocabularyItem::NewCustomVocabularyItem() : 
    m_phraseHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_displayAsHasBeenSet(false)
{
}

NewCustomVocabularyItem::NewCustomVocabularyItem(JsonView jsonValue) : 
    m_phraseHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_displayAsHasBeenSet(false)
{
  *this = jsonValue;
}

NewCustomVocabularyItem& NewCustomVocabularyItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("phrase"))
  {
    m_phrase = jsonValue.GetString("phrase");

    m_phraseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetInteger("weight");

    m_weightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayAs"))
  {
    m_displayAs = jsonValue.GetString("displayAs");

    m_displayAsHasBeenSet = true;
  }

  return *this;
}

JsonValue NewCustomVocabularyItem::Jsonize() const
{
  JsonValue payload;

  if(m_phraseHasBeenSet)
  {
   payload.WithString("phrase", m_phrase);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("weight", m_weight);

  }

  if(m_displayAsHasBeenSet)
  {
   payload.WithString("displayAs", m_displayAs);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
