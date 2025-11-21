/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/PIIEntityType.h>
#include <aws/bedrock-data-automation/model/PIIRedactionMaskMode.h>
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
 * <p>Configuration for PII entities detection and redaction</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/PIIEntitiesConfiguration">AWS
 * API Reference</a></p>
 */
class PIIEntitiesConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATION_API PIIEntitiesConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATION_API PIIEntitiesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API PIIEntitiesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Types of PII entities to detect</p>
   */
  inline const Aws::Vector<PIIEntityType>& GetPiiEntityTypes() const { return m_piiEntityTypes; }
  inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
  template <typename PiiEntityTypesT = Aws::Vector<PIIEntityType>>
  void SetPiiEntityTypes(PiiEntityTypesT&& value) {
    m_piiEntityTypesHasBeenSet = true;
    m_piiEntityTypes = std::forward<PiiEntityTypesT>(value);
  }
  template <typename PiiEntityTypesT = Aws::Vector<PIIEntityType>>
  PIIEntitiesConfiguration& WithPiiEntityTypes(PiiEntityTypesT&& value) {
    SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value));
    return *this;
  }
  inline PIIEntitiesConfiguration& AddPiiEntityTypes(PIIEntityType value) {
    m_piiEntityTypesHasBeenSet = true;
    m_piiEntityTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mode for redacting detected PII</p>
   */
  inline PIIRedactionMaskMode GetRedactionMaskMode() const { return m_redactionMaskMode; }
  inline bool RedactionMaskModeHasBeenSet() const { return m_redactionMaskModeHasBeenSet; }
  inline void SetRedactionMaskMode(PIIRedactionMaskMode value) {
    m_redactionMaskModeHasBeenSet = true;
    m_redactionMaskMode = value;
  }
  inline PIIEntitiesConfiguration& WithRedactionMaskMode(PIIRedactionMaskMode value) {
    SetRedactionMaskMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PIIEntityType> m_piiEntityTypes;
  bool m_piiEntityTypesHasBeenSet = false;

  PIIRedactionMaskMode m_redactionMaskMode{PIIRedactionMaskMode::NOT_SET};
  bool m_redactionMaskModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
