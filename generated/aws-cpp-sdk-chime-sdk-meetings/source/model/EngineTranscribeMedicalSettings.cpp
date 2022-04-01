/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/EngineTranscribeMedicalSettings.h>
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

EngineTranscribeMedicalSettings::EngineTranscribeMedicalSettings() : 
    m_languageCode(TranscribeMedicalLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_specialty(TranscribeMedicalSpecialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_type(TranscribeMedicalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_region(TranscribeMedicalRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_contentIdentificationType(TranscribeMedicalContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false)
{
}

EngineTranscribeMedicalSettings::EngineTranscribeMedicalSettings(JsonView jsonValue) : 
    m_languageCode(TranscribeMedicalLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_specialty(TranscribeMedicalSpecialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_type(TranscribeMedicalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_region(TranscribeMedicalRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_contentIdentificationType(TranscribeMedicalContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EngineTranscribeMedicalSettings& EngineTranscribeMedicalSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = TranscribeMedicalLanguageCodeMapper::GetTranscribeMedicalLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Specialty"))
  {
    m_specialty = TranscribeMedicalSpecialtyMapper::GetTranscribeMedicalSpecialtyForName(jsonValue.GetString("Specialty"));

    m_specialtyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TranscribeMedicalTypeMapper::GetTranscribeMedicalTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = TranscribeMedicalRegionMapper::GetTranscribeMedicalRegionForName(jsonValue.GetString("Region"));

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentIdentificationType"))
  {
    m_contentIdentificationType = TranscribeMedicalContentIdentificationTypeMapper::GetTranscribeMedicalContentIdentificationTypeForName(jsonValue.GetString("ContentIdentificationType"));

    m_contentIdentificationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineTranscribeMedicalSettings::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", TranscribeMedicalLanguageCodeMapper::GetNameForTranscribeMedicalLanguageCode(m_languageCode));
  }

  if(m_specialtyHasBeenSet)
  {
   payload.WithString("Specialty", TranscribeMedicalSpecialtyMapper::GetNameForTranscribeMedicalSpecialty(m_specialty));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TranscribeMedicalTypeMapper::GetNameForTranscribeMedicalType(m_type));
  }

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", TranscribeMedicalRegionMapper::GetNameForTranscribeMedicalRegion(m_region));
  }

  if(m_contentIdentificationTypeHasBeenSet)
  {
   payload.WithString("ContentIdentificationType", TranscribeMedicalContentIdentificationTypeMapper::GetNameForTranscribeMedicalContentIdentificationType(m_contentIdentificationType));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
