/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationEntityConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>The configuration for the sensitive information check, specifying which
 * entity types to detect.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksSensitiveInformationConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksSensitiveInformationConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sensitive information entity types to detect.</p>
   */
  inline const Aws::Vector<GuardrailChecksSensitiveInformationEntityConfig>& GetEntities() const { return m_entities; }
  inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
  template <typename EntitiesT = Aws::Vector<GuardrailChecksSensitiveInformationEntityConfig>>
  void SetEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities = std::forward<EntitiesT>(value);
  }
  template <typename EntitiesT = Aws::Vector<GuardrailChecksSensitiveInformationEntityConfig>>
  GuardrailChecksSensitiveInformationConfig& WithEntities(EntitiesT&& value) {
    SetEntities(std::forward<EntitiesT>(value));
    return *this;
  }
  template <typename EntitiesT = GuardrailChecksSensitiveInformationEntityConfig>
  GuardrailChecksSensitiveInformationConfig& AddEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities.emplace_back(std::forward<EntitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksSensitiveInformationEntityConfig> m_entities;
  bool m_entitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
