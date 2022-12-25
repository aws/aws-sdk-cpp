/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/TranscriptionJob.h>
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

TranscriptionJob::TranscriptionJob() : 
    m_transcriptionJobNameHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaFormat(MediaFormat::NOT_SET),
    m_mediaFormatHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_transcriptHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_modelSettingsHasBeenSet(false),
    m_jobExecutionSettingsHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_identifiedLanguageScore(0.0),
    m_identifiedLanguageScoreHasBeenSet(false),
    m_languageCodesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_subtitlesHasBeenSet(false),
    m_languageIdSettingsHasBeenSet(false)
{
}

TranscriptionJob::TranscriptionJob(JsonView jsonValue) : 
    m_transcriptionJobNameHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaFormat(MediaFormat::NOT_SET),
    m_mediaFormatHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_transcriptHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_modelSettingsHasBeenSet(false),
    m_jobExecutionSettingsHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_identifiedLanguageScore(0.0),
    m_identifiedLanguageScoreHasBeenSet(false),
    m_languageCodesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_subtitlesHasBeenSet(false),
    m_languageIdSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptionJob& TranscriptionJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptionJobName"))
  {
    m_transcriptionJobName = jsonValue.GetString("TranscriptionJobName");

    m_transcriptionJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscriptionJobStatus"))
  {
    m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(jsonValue.GetString("TranscriptionJobStatus"));

    m_transcriptionJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaSampleRateHertz"))
  {
    m_mediaSampleRateHertz = jsonValue.GetInteger("MediaSampleRateHertz");

    m_mediaSampleRateHertzHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaFormat"))
  {
    m_mediaFormat = MediaFormatMapper::GetMediaFormatForName(jsonValue.GetString("MediaFormat"));

    m_mediaFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Media"))
  {
    m_media = jsonValue.GetObject("Media");

    m_mediaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");

    m_transcriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelSettings"))
  {
    m_modelSettings = jsonValue.GetObject("ModelSettings");

    m_modelSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobExecutionSettings"))
  {
    m_jobExecutionSettings = jsonValue.GetObject("JobExecutionSettings");

    m_jobExecutionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedaction"))
  {
    m_contentRedaction = jsonValue.GetObject("ContentRedaction");

    m_contentRedactionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifyLanguage"))
  {
    m_identifyLanguage = jsonValue.GetBool("IdentifyLanguage");

    m_identifyLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifyMultipleLanguages"))
  {
    m_identifyMultipleLanguages = jsonValue.GetBool("IdentifyMultipleLanguages");

    m_identifyMultipleLanguagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageOptions"))
  {
    Aws::Utils::Array<JsonView> languageOptionsJsonList = jsonValue.GetArray("LanguageOptions");
    for(unsigned languageOptionsIndex = 0; languageOptionsIndex < languageOptionsJsonList.GetLength(); ++languageOptionsIndex)
    {
      m_languageOptions.push_back(LanguageCodeMapper::GetLanguageCodeForName(languageOptionsJsonList[languageOptionsIndex].AsString()));
    }
    m_languageOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifiedLanguageScore"))
  {
    m_identifiedLanguageScore = jsonValue.GetDouble("IdentifiedLanguageScore");

    m_identifiedLanguageScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCodes"))
  {
    Aws::Utils::Array<JsonView> languageCodesJsonList = jsonValue.GetArray("LanguageCodes");
    for(unsigned languageCodesIndex = 0; languageCodesIndex < languageCodesJsonList.GetLength(); ++languageCodesIndex)
    {
      m_languageCodes.push_back(languageCodesJsonList[languageCodesIndex].AsObject());
    }
    m_languageCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subtitles"))
  {
    m_subtitles = jsonValue.GetObject("Subtitles");

    m_subtitlesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageIdSettings"))
  {
    Aws::Map<Aws::String, JsonView> languageIdSettingsJsonMap = jsonValue.GetObject("LanguageIdSettings").GetAllObjects();
    for(auto& languageIdSettingsItem : languageIdSettingsJsonMap)
    {
      m_languageIdSettings[LanguageCodeMapper::GetLanguageCodeForName(languageIdSettingsItem.first)] = languageIdSettingsItem.second.AsObject();
    }
    m_languageIdSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptionJob::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptionJobNameHasBeenSet)
  {
   payload.WithString("TranscriptionJobName", m_transcriptionJobName);

  }

  if(m_transcriptionJobStatusHasBeenSet)
  {
   payload.WithString("TranscriptionJobStatus", TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(m_transcriptionJobStatus));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
   payload.WithInteger("MediaSampleRateHertz", m_mediaSampleRateHertz);

  }

  if(m_mediaFormatHasBeenSet)
  {
   payload.WithString("MediaFormat", MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat));
  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("Transcript", m_transcript.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_modelSettingsHasBeenSet)
  {
   payload.WithObject("ModelSettings", m_modelSettings.Jsonize());

  }

  if(m_jobExecutionSettingsHasBeenSet)
  {
   payload.WithObject("JobExecutionSettings", m_jobExecutionSettings.Jsonize());

  }

  if(m_contentRedactionHasBeenSet)
  {
   payload.WithObject("ContentRedaction", m_contentRedaction.Jsonize());

  }

  if(m_identifyLanguageHasBeenSet)
  {
   payload.WithBool("IdentifyLanguage", m_identifyLanguage);

  }

  if(m_identifyMultipleLanguagesHasBeenSet)
  {
   payload.WithBool("IdentifyMultipleLanguages", m_identifyMultipleLanguages);

  }

  if(m_languageOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languageOptionsJsonList(m_languageOptions.size());
   for(unsigned languageOptionsIndex = 0; languageOptionsIndex < languageOptionsJsonList.GetLength(); ++languageOptionsIndex)
   {
     languageOptionsJsonList[languageOptionsIndex].AsString(LanguageCodeMapper::GetNameForLanguageCode(m_languageOptions[languageOptionsIndex]));
   }
   payload.WithArray("LanguageOptions", std::move(languageOptionsJsonList));

  }

  if(m_identifiedLanguageScoreHasBeenSet)
  {
   payload.WithDouble("IdentifiedLanguageScore", m_identifiedLanguageScore);

  }

  if(m_languageCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languageCodesJsonList(m_languageCodes.size());
   for(unsigned languageCodesIndex = 0; languageCodesIndex < languageCodesJsonList.GetLength(); ++languageCodesIndex)
   {
     languageCodesJsonList[languageCodesIndex].AsObject(m_languageCodes[languageCodesIndex].Jsonize());
   }
   payload.WithArray("LanguageCodes", std::move(languageCodesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_subtitlesHasBeenSet)
  {
   payload.WithObject("Subtitles", m_subtitles.Jsonize());

  }

  if(m_languageIdSettingsHasBeenSet)
  {
   JsonValue languageIdSettingsJsonMap;
   for(auto& languageIdSettingsItem : m_languageIdSettings)
   {
     languageIdSettingsJsonMap.WithObject(LanguageCodeMapper::GetNameForLanguageCode(languageIdSettingsItem.first), languageIdSettingsItem.second.Jsonize());
   }
   payload.WithObject("LanguageIdSettings", std::move(languageIdSettingsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
