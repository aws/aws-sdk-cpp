/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/VocabularyEntityInfo.h>

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
 * <p>Input configuration for upserting data in a
 * DataAutomationLibraryIngestionJob</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UpsertEntityInfo">AWS
 * API Reference</a></p>
 */
class UpsertEntityInfo {
 public:
  AWS_BEDROCKDATAAUTOMATION_API UpsertEntityInfo() = default;
  AWS_BEDROCKDATAAUTOMATION_API UpsertEntityInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API UpsertEntityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const VocabularyEntityInfo& GetVocabulary() const { return m_vocabulary; }
  inline bool VocabularyHasBeenSet() const { return m_vocabularyHasBeenSet; }
  template <typename VocabularyT = VocabularyEntityInfo>
  void SetVocabulary(VocabularyT&& value) {
    m_vocabularyHasBeenSet = true;
    m_vocabulary = std::forward<VocabularyT>(value);
  }
  template <typename VocabularyT = VocabularyEntityInfo>
  UpsertEntityInfo& WithVocabulary(VocabularyT&& value) {
    SetVocabulary(std::forward<VocabularyT>(value));
    return *this;
  }
  ///@}
 private:
  VocabularyEntityInfo m_vocabulary;
  bool m_vocabularyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
