/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/EngineTranscribeSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

EngineTranscribeSettings::EngineTranscribeSettings() : 
    m_languageCode(TranscribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyFilterMethod(TranscribeVocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_region(TranscribeRegion::NOT_SET),
    m_regionHasBeenSet(false)
{
}

EngineTranscribeSettings::EngineTranscribeSettings(JsonView jsonValue) : 
    m_languageCode(TranscribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyFilterMethod(TranscribeVocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_region(TranscribeRegion::NOT_SET),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

EngineTranscribeSettings& EngineTranscribeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = TranscribeLanguageCodeMapper::GetTranscribeLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = TranscribeVocabularyFilterMethodMapper::GetTranscribeVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));

    m_vocabularyFilterMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");

    m_vocabularyFilterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = TranscribeRegionMapper::GetTranscribeRegionForName(jsonValue.GetString("Region"));

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineTranscribeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", TranscribeLanguageCodeMapper::GetNameForTranscribeLanguageCode(m_languageCode));
  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", TranscribeVocabularyFilterMethodMapper::GetNameForTranscribeVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", TranscribeRegionMapper::GetNameForTranscribeRegion(m_region));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
