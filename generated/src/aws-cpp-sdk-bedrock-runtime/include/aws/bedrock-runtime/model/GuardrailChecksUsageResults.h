/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterUsage.h>
#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackUsage.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationUsage.h>

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
 * <p>The text unit usage for the guardrail checks evaluation, organized by check
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksUsageResults">AWS
 * API Reference</a></p>
 */
class GuardrailChecksUsageResults {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksUsageResults() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksUsageResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksUsageResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text unit usage for the content filter check.</p>
   */
  inline const GuardrailChecksContentFilterUsage& GetContentFilter() const { return m_contentFilter; }
  inline bool ContentFilterHasBeenSet() const { return m_contentFilterHasBeenSet; }
  template <typename ContentFilterT = GuardrailChecksContentFilterUsage>
  void SetContentFilter(ContentFilterT&& value) {
    m_contentFilterHasBeenSet = true;
    m_contentFilter = std::forward<ContentFilterT>(value);
  }
  template <typename ContentFilterT = GuardrailChecksContentFilterUsage>
  GuardrailChecksUsageResults& WithContentFilter(ContentFilterT&& value) {
    SetContentFilter(std::forward<ContentFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text unit usage for the prompt attack check.</p>
   */
  inline const GuardrailChecksPromptAttackUsage& GetPromptAttack() const { return m_promptAttack; }
  inline bool PromptAttackHasBeenSet() const { return m_promptAttackHasBeenSet; }
  template <typename PromptAttackT = GuardrailChecksPromptAttackUsage>
  void SetPromptAttack(PromptAttackT&& value) {
    m_promptAttackHasBeenSet = true;
    m_promptAttack = std::forward<PromptAttackT>(value);
  }
  template <typename PromptAttackT = GuardrailChecksPromptAttackUsage>
  GuardrailChecksUsageResults& WithPromptAttack(PromptAttackT&& value) {
    SetPromptAttack(std::forward<PromptAttackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text unit usage for the sensitive information check.</p>
   */
  inline const GuardrailChecksSensitiveInformationUsage& GetSensitiveInformation() const { return m_sensitiveInformation; }
  inline bool SensitiveInformationHasBeenSet() const { return m_sensitiveInformationHasBeenSet; }
  template <typename SensitiveInformationT = GuardrailChecksSensitiveInformationUsage>
  void SetSensitiveInformation(SensitiveInformationT&& value) {
    m_sensitiveInformationHasBeenSet = true;
    m_sensitiveInformation = std::forward<SensitiveInformationT>(value);
  }
  template <typename SensitiveInformationT = GuardrailChecksSensitiveInformationUsage>
  GuardrailChecksUsageResults& WithSensitiveInformation(SensitiveInformationT&& value) {
    SetSensitiveInformation(std::forward<SensitiveInformationT>(value));
    return *this;
  }
  ///@}
 private:
  GuardrailChecksContentFilterUsage m_contentFilter;

  GuardrailChecksPromptAttackUsage m_promptAttack;

  GuardrailChecksSensitiveInformationUsage m_sensitiveInformation;
  bool m_contentFilterHasBeenSet = false;
  bool m_promptAttackHasBeenSet = false;
  bool m_sensitiveInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
