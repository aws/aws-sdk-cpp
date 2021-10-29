/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/LanguageIdSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

LanguageIdSettings::LanguageIdSettings() : 
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_languageModelNameHasBeenSet(false)
{
}

LanguageIdSettings::LanguageIdSettings(JsonView jsonValue) : 
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_languageModelNameHasBeenSet(false)
{
  *this = jsonValue;
}

LanguageIdSettings& LanguageIdSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");

    m_vocabularyFilterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageModelName"))
  {
    m_languageModelName = jsonValue.GetString("LanguageModelName");

    m_languageModelNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LanguageIdSettings::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_languageModelNameHasBeenSet)
  {
   payload.WithString("LanguageModelName", m_languageModelName);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
