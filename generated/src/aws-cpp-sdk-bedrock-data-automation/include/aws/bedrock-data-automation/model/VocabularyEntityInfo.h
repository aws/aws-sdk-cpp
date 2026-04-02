/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/Language.h>
#include <aws/bedrock-data-automation/model/Phrase.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Vocabulary entity info with detailed information</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VocabularyEntityInfo">AWS
 * API Reference</a></p>
 */
class VocabularyEntityInfo {
 public:
  AWS_BEDROCKDATAAUTOMATION_API VocabularyEntityInfo() = default;
  AWS_BEDROCKDATAAUTOMATION_API VocabularyEntityInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API VocabularyEntityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  VocabularyEntityInfo& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  VocabularyEntityInfo& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline Language GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(Language value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline VocabularyEntityInfo& WithLanguage(Language value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Phrase>& GetPhrases() const { return m_phrases; }
  inline bool PhrasesHasBeenSet() const { return m_phrasesHasBeenSet; }
  template <typename PhrasesT = Aws::Vector<Phrase>>
  void SetPhrases(PhrasesT&& value) {
    m_phrasesHasBeenSet = true;
    m_phrases = std::forward<PhrasesT>(value);
  }
  template <typename PhrasesT = Aws::Vector<Phrase>>
  VocabularyEntityInfo& WithPhrases(PhrasesT&& value) {
    SetPhrases(std::forward<PhrasesT>(value));
    return *this;
  }
  template <typename PhrasesT = Phrase>
  VocabularyEntityInfo& AddPhrases(PhrasesT&& value) {
    m_phrasesHasBeenSet = true;
    m_phrases.emplace_back(std::forward<PhrasesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_entityId;

  Aws::String m_description;

  Language m_language{Language::NOT_SET};

  Aws::Vector<Phrase> m_phrases;
  bool m_entityIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_phrasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
