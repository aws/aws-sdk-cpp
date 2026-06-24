/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterConfig.h>
#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackConfig.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationConfig.h>

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
 * <p>The configuration for inline guardrail checks. Specify one or more check
 * types to run against the messages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksConfig">AWS
 * API Reference</a></p>
 */
class GuardrailChecksConfig {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksConfig() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content filter check configuration.</p>
   */
  inline const GuardrailChecksContentFilterConfig& GetContentFilter() const { return m_contentFilter; }
  inline bool ContentFilterHasBeenSet() const { return m_contentFilterHasBeenSet; }
  template <typename ContentFilterT = GuardrailChecksContentFilterConfig>
  void SetContentFilter(ContentFilterT&& value) {
    m_contentFilterHasBeenSet = true;
    m_contentFilter = std::forward<ContentFilterT>(value);
  }
  template <typename ContentFilterT = GuardrailChecksContentFilterConfig>
  GuardrailChecksConfig& WithContentFilter(ContentFilterT&& value) {
    SetContentFilter(std::forward<ContentFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prompt attack check configuration.</p>
   */
  inline const GuardrailChecksPromptAttackConfig& GetPromptAttack() const { return m_promptAttack; }
  inline bool PromptAttackHasBeenSet() const { return m_promptAttackHasBeenSet; }
  template <typename PromptAttackT = GuardrailChecksPromptAttackConfig>
  void SetPromptAttack(PromptAttackT&& value) {
    m_promptAttackHasBeenSet = true;
    m_promptAttack = std::forward<PromptAttackT>(value);
  }
  template <typename PromptAttackT = GuardrailChecksPromptAttackConfig>
  GuardrailChecksConfig& WithPromptAttack(PromptAttackT&& value) {
    SetPromptAttack(std::forward<PromptAttackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sensitive information check configuration.</p>
   */
  inline const GuardrailChecksSensitiveInformationConfig& GetSensitiveInformation() const { return m_sensitiveInformation; }
  inline bool SensitiveInformationHasBeenSet() const { return m_sensitiveInformationHasBeenSet; }
  template <typename SensitiveInformationT = GuardrailChecksSensitiveInformationConfig>
  void SetSensitiveInformation(SensitiveInformationT&& value) {
    m_sensitiveInformationHasBeenSet = true;
    m_sensitiveInformation = std::forward<SensitiveInformationT>(value);
  }
  template <typename SensitiveInformationT = GuardrailChecksSensitiveInformationConfig>
  GuardrailChecksConfig& WithSensitiveInformation(SensitiveInformationT&& value) {
    SetSensitiveInformation(std::forward<SensitiveInformationT>(value));
    return *this;
  }
  ///@}
 private:
  GuardrailChecksContentFilterConfig m_contentFilter;

  GuardrailChecksPromptAttackConfig m_promptAttack;

  GuardrailChecksSensitiveInformationConfig m_sensitiveInformation;
  bool m_contentFilterHasBeenSet = false;
  bool m_promptAttackHasBeenSet = false;
  bool m_sensitiveInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
