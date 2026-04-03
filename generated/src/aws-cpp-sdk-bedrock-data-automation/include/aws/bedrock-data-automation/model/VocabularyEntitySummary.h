/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/Language.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Summary of a Vocabulary entity</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VocabularyEntitySummary">AWS
 * API Reference</a></p>
 */
class VocabularyEntitySummary {
 public:
  AWS_BEDROCKDATAAUTOMATION_API VocabularyEntitySummary() = default;
  AWS_BEDROCKDATAAUTOMATION_API VocabularyEntitySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API VocabularyEntitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  VocabularyEntitySummary& WithEntityId(EntityIdT&& value) {
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
  VocabularyEntitySummary& WithDescription(DescriptionT&& value) {
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
  inline VocabularyEntitySummary& WithLanguage(Language value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>num of phrases in the entity</p>
   */
  inline int GetNumOfPhrases() const { return m_numOfPhrases; }
  inline bool NumOfPhrasesHasBeenSet() const { return m_numOfPhrasesHasBeenSet; }
  inline void SetNumOfPhrases(int value) {
    m_numOfPhrasesHasBeenSet = true;
    m_numOfPhrases = value;
  }
  inline VocabularyEntitySummary& WithNumOfPhrases(int value) {
    SetNumOfPhrases(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  VocabularyEntitySummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_entityId;

  Aws::String m_description;

  Language m_language{Language::NOT_SET};

  int m_numOfPhrases{0};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_entityIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_numOfPhrasesHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
