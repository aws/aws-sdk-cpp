/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/AspectRatio.h>
#include <aws/elementalinference/model/ProfanityFilterMode.h>
#include <aws/elementalinference/model/TranscriptionLanguage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>A type of OutputConfig, used when the output in a feed is for the smart
 * subtitling feature. smart subtitling uses automatic speech recognition (ASR) to
 * generate live TTML subtitles from the audio in your source media. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/SubtitlingConfig">AWS
 * API Reference</a></p>
 */
class SubtitlingConfig {
 public:
  AWS_ELEMENTALINFERENCE_API SubtitlingConfig() = default;
  AWS_ELEMENTALINFERENCE_API SubtitlingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API SubtitlingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The language of the audio in the source media. Elemental Inference uses this
   * setting to optimize transcription accuracy. Specify the language using an ISO
   * 639-2/T three-letter code, optionally with a region subtag. Supported values:
   * eng, eng-au, eng-gb, eng-us, fra, ita, deu, spa, por. </p>
   */
  inline TranscriptionLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(TranscriptionLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline SubtitlingConfig& WithLanguage(TranscriptionLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aspect ratio of the output video, specified as width and height integer
   * values. Elemental Inference uses the aspect ratio to determine subtitle layout
   * and line lengths. </p>
   */
  inline const AspectRatio& GetAspectRatio() const { return m_aspectRatio; }
  inline bool AspectRatioHasBeenSet() const { return m_aspectRatioHasBeenSet; }
  template <typename AspectRatioT = AspectRatio>
  void SetAspectRatio(AspectRatioT&& value) {
    m_aspectRatioHasBeenSet = true;
    m_aspectRatio = std::forward<AspectRatioT>(value);
  }
  template <typename AspectRatioT = AspectRatio>
  SubtitlingConfig& WithAspectRatio(AspectRatioT&& value) {
    SetAspectRatio(std::forward<AspectRatioT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of a custom dictionary to improve transcription accuracy for
   * domain-specific terminology. Use the CreateDictionary operation to create a
   * dictionary. </p>
   */
  inline const Aws::String& GetDictionary() const { return m_dictionary; }
  inline bool DictionaryHasBeenSet() const { return m_dictionaryHasBeenSet; }
  template <typename DictionaryT = Aws::String>
  void SetDictionary(DictionaryT&& value) {
    m_dictionaryHasBeenSet = true;
    m_dictionary = std::forward<DictionaryT>(value);
  }
  template <typename DictionaryT = Aws::String>
  SubtitlingConfig& WithDictionary(DictionaryT&& value) {
    SetDictionary(std::forward<DictionaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls how profanity is handled in the generated subtitles. Valid values:
   * DISABLED (no filtering, default), CENSOR (replace profanity with asterisks),
   * DROP (remove profanity from the transcript). </p>
   */
  inline ProfanityFilterMode GetProfanityFilter() const { return m_profanityFilter; }
  inline bool ProfanityFilterHasBeenSet() const { return m_profanityFilterHasBeenSet; }
  inline void SetProfanityFilter(ProfanityFilterMode value) {
    m_profanityFilterHasBeenSet = true;
    m_profanityFilter = value;
  }
  inline SubtitlingConfig& WithProfanityFilter(ProfanityFilterMode value) {
    SetProfanityFilter(value);
    return *this;
  }
  ///@}
 private:
  TranscriptionLanguage m_language{TranscriptionLanguage::NOT_SET};

  AspectRatio m_aspectRatio;

  Aws::String m_dictionary;

  ProfanityFilterMode m_profanityFilter{ProfanityFilterMode::NOT_SET};
  bool m_languageHasBeenSet = false;
  bool m_aspectRatioHasBeenSet = false;
  bool m_dictionaryHasBeenSet = false;
  bool m_profanityFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
