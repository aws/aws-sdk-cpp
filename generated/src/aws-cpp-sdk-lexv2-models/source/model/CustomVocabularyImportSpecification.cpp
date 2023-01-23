/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CustomVocabularyImportSpecification.h>
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

CustomVocabularyImportSpecification::CustomVocabularyImportSpecification() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false)
{
}

CustomVocabularyImportSpecification::CustomVocabularyImportSpecification(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false)
{
  *this = jsonValue;
}

CustomVocabularyImportSpecification& CustomVocabularyImportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

    m_localeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomVocabularyImportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("botId", m_botId);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_localeIdHasBeenSet)
  {
   payload.WithString("localeId", m_localeId);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
