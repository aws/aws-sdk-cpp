/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/AmazonTranscribeProcessorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

AmazonTranscribeProcessorConfiguration::AmazonTranscribeProcessorConfiguration() : 
    m_languageCode(CallAnalyticsLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_partialResultsStability(PartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_contentIdentificationType(ContentType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_contentRedactionType(ContentType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_filterPartialResults(false),
    m_filterPartialResultsHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_preferredLanguage(CallAnalyticsLanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_vocabularyNamesHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false)
{
}

AmazonTranscribeProcessorConfiguration::AmazonTranscribeProcessorConfiguration(JsonView jsonValue) : 
    m_languageCode(CallAnalyticsLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_partialResultsStability(PartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_contentIdentificationType(ContentType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_contentRedactionType(ContentType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_filterPartialResults(false),
    m_filterPartialResultsHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_preferredLanguage(CallAnalyticsLanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_vocabularyNamesHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonTranscribeProcessorConfiguration& AmazonTranscribeProcessorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = CallAnalyticsLanguageCodeMapper::GetCallAnalyticsLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));

    m_vocabularyFilterMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShowSpeakerLabel"))
  {
    m_showSpeakerLabel = jsonValue.GetBool("ShowSpeakerLabel");

    m_showSpeakerLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnablePartialResultsStabilization"))
  {
    m_enablePartialResultsStabilization = jsonValue.GetBool("EnablePartialResultsStabilization");

    m_enablePartialResultsStabilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartialResultsStability"))
  {
    m_partialResultsStability = PartialResultsStabilityMapper::GetPartialResultsStabilityForName(jsonValue.GetString("PartialResultsStability"));

    m_partialResultsStabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentIdentificationType"))
  {
    m_contentIdentificationType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("ContentIdentificationType"));

    m_contentIdentificationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedactionType"))
  {
    m_contentRedactionType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("ContentRedactionType"));

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

  if(jsonValue.ValueExists("FilterPartialResults"))
  {
    m_filterPartialResults = jsonValue.GetBool("FilterPartialResults");

    m_filterPartialResultsHasBeenSet = true;
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
    m_preferredLanguage = CallAnalyticsLanguageCodeMapper::GetCallAnalyticsLanguageCodeForName(jsonValue.GetString("PreferredLanguage"));

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

JsonValue AmazonTranscribeProcessorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", CallAnalyticsLanguageCodeMapper::GetNameForCallAnalyticsLanguageCode(m_languageCode));
  }

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  if(m_showSpeakerLabelHasBeenSet)
  {
   payload.WithBool("ShowSpeakerLabel", m_showSpeakerLabel);

  }

  if(m_enablePartialResultsStabilizationHasBeenSet)
  {
   payload.WithBool("EnablePartialResultsStabilization", m_enablePartialResultsStabilization);

  }

  if(m_partialResultsStabilityHasBeenSet)
  {
   payload.WithString("PartialResultsStability", PartialResultsStabilityMapper::GetNameForPartialResultsStability(m_partialResultsStability));
  }

  if(m_contentIdentificationTypeHasBeenSet)
  {
   payload.WithString("ContentIdentificationType", ContentTypeMapper::GetNameForContentType(m_contentIdentificationType));
  }

  if(m_contentRedactionTypeHasBeenSet)
  {
   payload.WithString("ContentRedactionType", ContentTypeMapper::GetNameForContentType(m_contentRedactionType));
  }

  if(m_piiEntityTypesHasBeenSet)
  {
   payload.WithString("PiiEntityTypes", m_piiEntityTypes);

  }

  if(m_languageModelNameHasBeenSet)
  {
   payload.WithString("LanguageModelName", m_languageModelName);

  }

  if(m_filterPartialResultsHasBeenSet)
  {
   payload.WithBool("FilterPartialResults", m_filterPartialResults);

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
   payload.WithString("PreferredLanguage", CallAnalyticsLanguageCodeMapper::GetNameForCallAnalyticsLanguageCode(m_preferredLanguage));
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
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
