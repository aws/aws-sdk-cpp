/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/EngineTranscribeSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
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
    m_regionHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_partialResultsStability(TranscribePartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_contentIdentificationType(TranscribeContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_contentRedactionType(TranscribeContentRedactionType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_preferredLanguage(TranscribeLanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_vocabularyNamesHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false)
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
    m_regionHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_partialResultsStability(TranscribePartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_contentIdentificationType(TranscribeContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_contentRedactionType(TranscribeContentRedactionType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_preferredLanguage(TranscribeLanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_vocabularyNamesHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false)
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

  if(jsonValue.ValueExists("EnablePartialResultsStabilization"))
  {
    m_enablePartialResultsStabilization = jsonValue.GetBool("EnablePartialResultsStabilization");

    m_enablePartialResultsStabilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartialResultsStability"))
  {
    m_partialResultsStability = TranscribePartialResultsStabilityMapper::GetTranscribePartialResultsStabilityForName(jsonValue.GetString("PartialResultsStability"));

    m_partialResultsStabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentIdentificationType"))
  {
    m_contentIdentificationType = TranscribeContentIdentificationTypeMapper::GetTranscribeContentIdentificationTypeForName(jsonValue.GetString("ContentIdentificationType"));

    m_contentIdentificationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedactionType"))
  {
    m_contentRedactionType = TranscribeContentRedactionTypeMapper::GetTranscribeContentRedactionTypeForName(jsonValue.GetString("ContentRedactionType"));

    m_contentRedactionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PiiEntityTypes"))
  {
    m_piiEntityTypes = jsonValue.GetString("PiiEntityTypes");

    m_piiEntityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageModelName"))
  {
    m_languageModelName = jsonValue.GetString("LanguageModelName");

    m_languageModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifyLanguage"))
  {
    m_identifyLanguage = jsonValue.GetBool("IdentifyLanguage");

    m_identifyLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageOptions"))
  {
    m_languageOptions = jsonValue.GetString("LanguageOptions");

    m_languageOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredLanguage"))
  {
    m_preferredLanguage = TranscribeLanguageCodeMapper::GetTranscribeLanguageCodeForName(jsonValue.GetString("PreferredLanguage"));

    m_preferredLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyNames"))
  {
    m_vocabularyNames = jsonValue.GetString("VocabularyNames");

    m_vocabularyNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterNames"))
  {
    m_vocabularyFilterNames = jsonValue.GetString("VocabularyFilterNames");

    m_vocabularyFilterNamesHasBeenSet = true;
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

  if(m_enablePartialResultsStabilizationHasBeenSet)
  {
   payload.WithBool("EnablePartialResultsStabilization", m_enablePartialResultsStabilization);

  }

  if(m_partialResultsStabilityHasBeenSet)
  {
   payload.WithString("PartialResultsStability", TranscribePartialResultsStabilityMapper::GetNameForTranscribePartialResultsStability(m_partialResultsStability));
  }

  if(m_contentIdentificationTypeHasBeenSet)
  {
   payload.WithString("ContentIdentificationType", TranscribeContentIdentificationTypeMapper::GetNameForTranscribeContentIdentificationType(m_contentIdentificationType));
  }

  if(m_contentRedactionTypeHasBeenSet)
  {
   payload.WithString("ContentRedactionType", TranscribeContentRedactionTypeMapper::GetNameForTranscribeContentRedactionType(m_contentRedactionType));
  }

  if(m_piiEntityTypesHasBeenSet)
  {
   payload.WithString("PiiEntityTypes", m_piiEntityTypes);

  }

  if(m_languageModelNameHasBeenSet)
  {
   payload.WithString("LanguageModelName", m_languageModelName);

  }

  if(m_identifyLanguageHasBeenSet)
  {
   payload.WithBool("IdentifyLanguage", m_identifyLanguage);

  }

  if(m_languageOptionsHasBeenSet)
  {
   payload.WithString("LanguageOptions", m_languageOptions);

  }

  if(m_preferredLanguageHasBeenSet)
  {
   payload.WithString("PreferredLanguage", TranscribeLanguageCodeMapper::GetNameForTranscribeLanguageCode(m_preferredLanguage));
  }

  if(m_vocabularyNamesHasBeenSet)
  {
   payload.WithString("VocabularyNames", m_vocabularyNames);

  }

  if(m_vocabularyFilterNamesHasBeenSet)
  {
   payload.WithString("VocabularyFilterNames", m_vocabularyFilterNames);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
