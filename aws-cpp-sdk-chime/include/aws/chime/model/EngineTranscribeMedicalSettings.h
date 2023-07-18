﻿/**
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
  class AWS_CHIME_API EngineTranscribeMedicalSettings
  {
  public:
    EngineTranscribeMedicalSettings();
    EngineTranscribeMedicalSettings(Aws::Utils::Json::JsonView jsonValue);
    EngineTranscribeMedicalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline const TranscribeMedicalLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline void SetLanguageCode(const TranscribeMedicalLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline void SetLanguageCode(TranscribeMedicalLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline EngineTranscribeMedicalSettings& WithLanguageCode(const TranscribeMedicalLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline EngineTranscribeMedicalSettings& WithLanguageCode(TranscribeMedicalLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline const TranscribeMedicalSpecialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline void SetSpecialty(const TranscribeMedicalSpecialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline void SetSpecialty(TranscribeMedicalSpecialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline EngineTranscribeMedicalSettings& WithSpecialty(const TranscribeMedicalSpecialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline EngineTranscribeMedicalSettings& WithSpecialty(TranscribeMedicalSpecialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>The type of transcription.</p>
     */
    inline const TranscribeMedicalType& GetType() const{ return m_type; }

    /**
     * <p>The type of transcription.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of transcription.</p>
     */
    inline void SetType(const TranscribeMedicalType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of transcription.</p>
     */
    inline void SetType(TranscribeMedicalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of transcription.</p>
     */
    inline EngineTranscribeMedicalSettings& WithType(const TranscribeMedicalType& value) { SetType(value); return *this;}

    /**
     * <p>The type of transcription.</p>
     */
    inline EngineTranscribeMedicalSettings& WithType(TranscribeMedicalType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline EngineTranscribeMedicalSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline EngineTranscribeMedicalSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline EngineTranscribeMedicalSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline const TranscribeMedicalRegion& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline void SetRegion(const TranscribeMedicalRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline void SetRegion(TranscribeMedicalRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline EngineTranscribeMedicalSettings& WithRegion(const TranscribeMedicalRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region passed to Amazon Transcribe Medical. If you don't specify a
     * Region, Amazon Chime uses the meeting's Region.</p>
     */
    inline EngineTranscribeMedicalSettings& WithRegion(TranscribeMedicalRegion&& value) { SetRegion(std::move(value)); return *this;}


    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline const TranscribeMedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline void SetContentIdentificationType(const TranscribeMedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline void SetContentIdentificationType(TranscribeMedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline EngineTranscribeMedicalSettings& WithContentIdentificationType(const TranscribeMedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline EngineTranscribeMedicalSettings& WithContentIdentificationType(TranscribeMedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}

  private:

    TranscribeMedicalLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    TranscribeMedicalSpecialty m_specialty;
    bool m_specialtyHasBeenSet;

    TranscribeMedicalType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    TranscribeMedicalRegion m_region;
    bool m_regionHasBeenSet;

    TranscribeMedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
