/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/AudioGenerativeOutputLanguage.h>
#include <aws/bedrock-data-automation/model/Language.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Optional configuration for audio language settings</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/AudioLanguageConfiguration">AWS
 * API Reference</a></p>
 */
class AudioLanguageConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATION_API AudioLanguageConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATION_API AudioLanguageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API AudioLanguageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Vector<Language>& GetInputLanguages() const { return m_inputLanguages; }
  inline bool InputLanguagesHasBeenSet() const { return m_inputLanguagesHasBeenSet; }
  template <typename InputLanguagesT = Aws::Vector<Language>>
  void SetInputLanguages(InputLanguagesT&& value) {
    m_inputLanguagesHasBeenSet = true;
    m_inputLanguages = std::forward<InputLanguagesT>(value);
  }
  template <typename InputLanguagesT = Aws::Vector<Language>>
  AudioLanguageConfiguration& WithInputLanguages(InputLanguagesT&& value) {
    SetInputLanguages(std::forward<InputLanguagesT>(value));
    return *this;
  }
  inline AudioLanguageConfiguration& AddInputLanguages(Language value) {
    m_inputLanguagesHasBeenSet = true;
    m_inputLanguages.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline AudioGenerativeOutputLanguage GetGenerativeOutputLanguage() const { return m_generativeOutputLanguage; }
  inline bool GenerativeOutputLanguageHasBeenSet() const { return m_generativeOutputLanguageHasBeenSet; }
  inline void SetGenerativeOutputLanguage(AudioGenerativeOutputLanguage value) {
    m_generativeOutputLanguageHasBeenSet = true;
    m_generativeOutputLanguage = value;
  }
  inline AudioLanguageConfiguration& WithGenerativeOutputLanguage(AudioGenerativeOutputLanguage value) {
    SetGenerativeOutputLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enable multiple language identification in audio</p>
   */
  inline bool GetIdentifyMultipleLanguages() const { return m_identifyMultipleLanguages; }
  inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }
  inline void SetIdentifyMultipleLanguages(bool value) {
    m_identifyMultipleLanguagesHasBeenSet = true;
    m_identifyMultipleLanguages = value;
  }
  inline AudioLanguageConfiguration& WithIdentifyMultipleLanguages(bool value) {
    SetIdentifyMultipleLanguages(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Language> m_inputLanguages;

  AudioGenerativeOutputLanguage m_generativeOutputLanguage{AudioGenerativeOutputLanguage::NOT_SET};

  bool m_identifyMultipleLanguages{false};
  bool m_inputLanguagesHasBeenSet = false;
  bool m_generativeOutputLanguageHasBeenSet = false;
  bool m_identifyMultipleLanguagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
