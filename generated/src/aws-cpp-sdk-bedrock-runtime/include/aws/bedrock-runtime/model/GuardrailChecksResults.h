/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterResult.h>
#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackResult.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationResult.h>

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
 * <p>The results from the guardrail checks evaluation, organized by check
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksResults">AWS
 * API Reference</a></p>
 */
class GuardrailChecksResults {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksResults() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content filter check results.</p>
   */
  inline const GuardrailChecksContentFilterResult& GetContentFilter() const { return m_contentFilter; }
  inline bool ContentFilterHasBeenSet() const { return m_contentFilterHasBeenSet; }
  template <typename ContentFilterT = GuardrailChecksContentFilterResult>
  void SetContentFilter(ContentFilterT&& value) {
    m_contentFilterHasBeenSet = true;
    m_contentFilter = std::forward<ContentFilterT>(value);
  }
  template <typename ContentFilterT = GuardrailChecksContentFilterResult>
  GuardrailChecksResults& WithContentFilter(ContentFilterT&& value) {
    SetContentFilter(std::forward<ContentFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prompt attack check results.</p>
   */
  inline const GuardrailChecksPromptAttackResult& GetPromptAttack() const { return m_promptAttack; }
  inline bool PromptAttackHasBeenSet() const { return m_promptAttackHasBeenSet; }
  template <typename PromptAttackT = GuardrailChecksPromptAttackResult>
  void SetPromptAttack(PromptAttackT&& value) {
    m_promptAttackHasBeenSet = true;
    m_promptAttack = std::forward<PromptAttackT>(value);
  }
  template <typename PromptAttackT = GuardrailChecksPromptAttackResult>
  GuardrailChecksResults& WithPromptAttack(PromptAttackT&& value) {
    SetPromptAttack(std::forward<PromptAttackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sensitive information check results.</p>
   */
  inline const GuardrailChecksSensitiveInformationResult& GetSensitiveInformation() const { return m_sensitiveInformation; }
  inline bool SensitiveInformationHasBeenSet() const { return m_sensitiveInformationHasBeenSet; }
  template <typename SensitiveInformationT = GuardrailChecksSensitiveInformationResult>
  void SetSensitiveInformation(SensitiveInformationT&& value) {
    m_sensitiveInformationHasBeenSet = true;
    m_sensitiveInformation = std::forward<SensitiveInformationT>(value);
  }
  template <typename SensitiveInformationT = GuardrailChecksSensitiveInformationResult>
  GuardrailChecksResults& WithSensitiveInformation(SensitiveInformationT&& value) {
    SetSensitiveInformation(std::forward<SensitiveInformationT>(value));
    return *this;
  }
  ///@}
 private:
  GuardrailChecksContentFilterResult m_contentFilter;

  GuardrailChecksPromptAttackResult m_promptAttack;

  GuardrailChecksSensitiveInformationResult m_sensitiveInformation;
  bool m_contentFilterHasBeenSet = false;
  bool m_promptAttackHasBeenSet = false;
  bool m_sensitiveInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
