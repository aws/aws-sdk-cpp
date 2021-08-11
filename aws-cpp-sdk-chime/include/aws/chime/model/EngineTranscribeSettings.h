/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/TranscribeLanguageCode.h>
#include <aws/chime/model/TranscribeVocabularyFilterMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/TranscribeRegion.h>
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
   * <p>Settings specific to the Amazon Transcribe engine.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/EngineTranscribeSettings">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API EngineTranscribeSettings
  {
  public:
    EngineTranscribeSettings();
    EngineTranscribeSettings(Aws::Utils::Json::JsonView jsonValue);
    EngineTranscribeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline const TranscribeLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline void SetLanguageCode(const TranscribeLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline void SetLanguageCode(TranscribeLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline EngineTranscribeSettings& WithLanguageCode(const TranscribeLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline EngineTranscribeSettings& WithLanguageCode(TranscribeLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline const TranscribeVocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterMethod(const TranscribeVocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterMethod(TranscribeVocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterMethod(const TranscribeVocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterMethod(TranscribeVocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline const TranscribeRegion& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline void SetRegion(const TranscribeRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline void SetRegion(TranscribeRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline EngineTranscribeSettings& WithRegion(const TranscribeRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline EngineTranscribeSettings& WithRegion(TranscribeRegion&& value) { SetRegion(std::move(value)); return *this;}

  private:

    TranscribeLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    TranscribeVocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    TranscribeRegion m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
