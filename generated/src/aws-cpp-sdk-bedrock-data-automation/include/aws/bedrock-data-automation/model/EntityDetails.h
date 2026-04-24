/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/VocabularyEntity.h>

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
 * <p>Detailed information about an entity</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/EntityDetails">AWS
 * API Reference</a></p>
 */
class EntityDetails {
 public:
  AWS_BEDROCKDATAAUTOMATION_API EntityDetails() = default;
  AWS_BEDROCKDATAAUTOMATION_API EntityDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API EntityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const VocabularyEntity& GetVocabulary() const { return m_vocabulary; }
  inline bool VocabularyHasBeenSet() const { return m_vocabularyHasBeenSet; }
  template <typename VocabularyT = VocabularyEntity>
  void SetVocabulary(VocabularyT&& value) {
    m_vocabularyHasBeenSet = true;
    m_vocabulary = std::forward<VocabularyT>(value);
  }
  template <typename VocabularyT = VocabularyEntity>
  EntityDetails& WithVocabulary(VocabularyT&& value) {
    SetVocabulary(std::forward<VocabularyT>(value));
    return *this;
  }
  ///@}
 private:
  VocabularyEntity m_vocabulary;
  bool m_vocabularyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
