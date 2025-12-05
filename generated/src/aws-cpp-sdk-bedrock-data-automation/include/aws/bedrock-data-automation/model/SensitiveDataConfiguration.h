/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/PIIEntitiesConfiguration.h>
#include <aws/bedrock-data-automation/model/SensitiveDataDetectionMode.h>
#include <aws/bedrock-data-automation/model/SensitiveDataDetectionScopeType.h>
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
 * <p>Configuration for sensitive data detection and redaction</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/SensitiveDataConfiguration">AWS
 * API Reference</a></p>
 */
class SensitiveDataConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATION_API SensitiveDataConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATION_API SensitiveDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API SensitiveDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Mode for sensitive data detection</p>
   */
  inline SensitiveDataDetectionMode GetDetectionMode() const { return m_detectionMode; }
  inline bool DetectionModeHasBeenSet() const { return m_detectionModeHasBeenSet; }
  inline void SetDetectionMode(SensitiveDataDetectionMode value) {
    m_detectionModeHasBeenSet = true;
    m_detectionMode = value;
  }
  inline SensitiveDataConfiguration& WithDetectionMode(SensitiveDataDetectionMode value) {
    SetDetectionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope of detection - what types of sensitive data to detect</p>
   */
  inline const Aws::Vector<SensitiveDataDetectionScopeType>& GetDetectionScope() const { return m_detectionScope; }
  inline bool DetectionScopeHasBeenSet() const { return m_detectionScopeHasBeenSet; }
  template <typename DetectionScopeT = Aws::Vector<SensitiveDataDetectionScopeType>>
  void SetDetectionScope(DetectionScopeT&& value) {
    m_detectionScopeHasBeenSet = true;
    m_detectionScope = std::forward<DetectionScopeT>(value);
  }
  template <typename DetectionScopeT = Aws::Vector<SensitiveDataDetectionScopeType>>
  SensitiveDataConfiguration& WithDetectionScope(DetectionScopeT&& value) {
    SetDetectionScope(std::forward<DetectionScopeT>(value));
    return *this;
  }
  inline SensitiveDataConfiguration& AddDetectionScope(SensitiveDataDetectionScopeType value) {
    m_detectionScopeHasBeenSet = true;
    m_detectionScope.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for PII entities detection and redaction</p>
   */
  inline const PIIEntitiesConfiguration& GetPiiEntitiesConfiguration() const { return m_piiEntitiesConfiguration; }
  inline bool PiiEntitiesConfigurationHasBeenSet() const { return m_piiEntitiesConfigurationHasBeenSet; }
  template <typename PiiEntitiesConfigurationT = PIIEntitiesConfiguration>
  void SetPiiEntitiesConfiguration(PiiEntitiesConfigurationT&& value) {
    m_piiEntitiesConfigurationHasBeenSet = true;
    m_piiEntitiesConfiguration = std::forward<PiiEntitiesConfigurationT>(value);
  }
  template <typename PiiEntitiesConfigurationT = PIIEntitiesConfiguration>
  SensitiveDataConfiguration& WithPiiEntitiesConfiguration(PiiEntitiesConfigurationT&& value) {
    SetPiiEntitiesConfiguration(std::forward<PiiEntitiesConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SensitiveDataDetectionMode m_detectionMode{SensitiveDataDetectionMode::NOT_SET};

  Aws::Vector<SensitiveDataDetectionScopeType> m_detectionScope;

  PIIEntitiesConfiguration m_piiEntitiesConfiguration;
  bool m_detectionModeHasBeenSet = false;
  bool m_detectionScopeHasBeenSet = false;
  bool m_piiEntitiesConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
