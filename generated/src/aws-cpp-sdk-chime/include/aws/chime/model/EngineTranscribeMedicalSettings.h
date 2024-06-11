/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/TranscribeMedicalLanguageCode.h>
#include <aws/chime/model/TranscribeMedicalSpecialty.h>
#include <aws/chime/model/TranscribeMedicalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/TranscribeMedicalRegion.h>
#include <aws/chime/model/TranscribeMedicalContentIdentificationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>Settings specific to the Amazon Transcribe Medical engine.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/EngineTranscribeMedicalSettings">AWS
   * API Reference</a></p>
   */
  class EngineTranscribeMedicalSettings
  {
  public:
    AWS_CHIME_API EngineTranscribeMedicalSettings();
    AWS_CHIME_API EngineTranscribeMedicalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API EngineTranscribeMedicalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline const TranscribeMedicalLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const TranscribeMedicalLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(TranscribeMedicalLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline EngineTranscribeMedicalSettings& WithLanguageCode(const TranscribeMedicalLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline EngineTranscribeMedicalSettings& WithLanguageCode(TranscribeMedicalLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline const TranscribeMedicalSpecialty& GetSpecialty() const{ return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(const TranscribeMedicalSpecialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline void SetSpecialty(TranscribeMedicalSpecialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }
    inline EngineTranscribeMedicalSettings& WithSpecialty(const TranscribeMedicalSpecialty& value) { SetSpecialty(value); return *this;}
    inline EngineTranscribeMedicalSettings& WithSpecialty(TranscribeMedicalSpecialty&& value) { SetSpecialty(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of transcription.</p>
     */
    inline const TranscribeMedicalType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TranscribeMedicalType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TranscribeMedicalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EngineTranscribeMedicalSettings& WithType(const TranscribeMedicalType& value) { SetType(value); return *this;}
    inline EngineTranscribeMedicalSettings& WithType(TranscribeMedicalType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }
    inline EngineTranscribeMedicalSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}
    inline EngineTranscribeMedicalSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}
    inline EngineTranscribeMedicalSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline const TranscribeMedicalRegion& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const TranscribeMedicalRegion& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(TranscribeMedicalRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline EngineTranscribeMedicalSettings& WithRegion(const TranscribeMedicalRegion& value) { SetRegion(value); return *this;}
    inline EngineTranscribeMedicalSettings& WithRegion(TranscribeMedicalRegion&& value) { SetRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript. If you don't include <code>PiiEntityTypes</code>, all PII is
     * identified.</p> <p>You can’t set <code>ContentIdentificationType</code> and
     * <code>ContentRedactionType</code>.</p>
     */
    inline const TranscribeMedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(const TranscribeMedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline void SetContentIdentificationType(TranscribeMedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }
    inline EngineTranscribeMedicalSettings& WithContentIdentificationType(const TranscribeMedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}
    inline EngineTranscribeMedicalSettings& WithContentIdentificationType(TranscribeMedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}
    ///@}
  private:

    TranscribeMedicalLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    TranscribeMedicalSpecialty m_specialty;
    bool m_specialtyHasBeenSet = false;

    TranscribeMedicalType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    TranscribeMedicalRegion m_region;
    bool m_regionHasBeenSet = false;

    TranscribeMedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
