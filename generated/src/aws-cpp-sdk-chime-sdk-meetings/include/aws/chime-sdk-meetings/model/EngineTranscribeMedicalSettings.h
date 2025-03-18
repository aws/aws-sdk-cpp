/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalLanguageCode.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalSpecialty.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalRegion.h>
#include <aws/chime-sdk-meetings/model/TranscribeMedicalContentIdentificationType.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>Settings specific to the Amazon Transcribe Medical engine.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/EngineTranscribeMedicalSettings">AWS
   * API Reference</a></p>
   */
  class EngineTranscribeMedicalSettings
  {
  public:
    AWS_CHIMESDKMEETINGS_API EngineTranscribeMedicalSettings() = default;
    AWS_CHIMESDKMEETINGS_API EngineTranscribeMedicalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API EngineTranscribeMedicalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The language code specified for the Amazon Transcribe Medical engine.</p>
     */
    inline TranscribeMedicalLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(TranscribeMedicalLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline EngineTranscribeMedicalSettings& WithLanguageCode(TranscribeMedicalLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specialty specified for the Amazon Transcribe Medical engine.</p>
     */
    inline TranscribeMedicalSpecialty GetSpecialty() const { return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(TranscribeMedicalSpecialty value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline EngineTranscribeMedicalSettings& WithSpecialty(TranscribeMedicalSpecialty value) { SetSpecialty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of transcription.</p>
     */
    inline TranscribeMedicalType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TranscribeMedicalType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EngineTranscribeMedicalSettings& WithType(TranscribeMedicalType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe Medical.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    EngineTranscribeMedicalSettings& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region passed to Amazon Transcribe Medical. If you
     * don't specify a Region, Amazon Chime uses the meeting's Region. </p>
     */
    inline TranscribeMedicalRegion GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(TranscribeMedicalRegion value) { m_regionHasBeenSet = true; m_region = value; }
    inline EngineTranscribeMedicalSettings& WithRegion(TranscribeMedicalRegion value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this field to <code>PHI</code> to identify personal health information in
     * the transcription output.</p>
     */
    inline TranscribeMedicalContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(TranscribeMedicalContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline EngineTranscribeMedicalSettings& WithContentIdentificationType(TranscribeMedicalContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}
  private:

    TranscribeMedicalLanguageCode m_languageCode{TranscribeMedicalLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    TranscribeMedicalSpecialty m_specialty{TranscribeMedicalSpecialty::NOT_SET};
    bool m_specialtyHasBeenSet = false;

    TranscribeMedicalType m_type{TranscribeMedicalType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    TranscribeMedicalRegion m_region{TranscribeMedicalRegion::NOT_SET};
    bool m_regionHasBeenSet = false;

    TranscribeMedicalContentIdentificationType m_contentIdentificationType{TranscribeMedicalContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
