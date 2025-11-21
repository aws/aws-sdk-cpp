/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/InputTags.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Account-level enforced guardrail input configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AccountEnforcedGuardrailInferenceInputConfiguration">AWS
 * API Reference</a></p>
 */
class AccountEnforcedGuardrailInferenceInputConfiguration {
 public:
  AWS_BEDROCK_API AccountEnforcedGuardrailInferenceInputConfiguration() = default;
  AWS_BEDROCK_API AccountEnforcedGuardrailInferenceInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AccountEnforcedGuardrailInferenceInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier for the guardrail, could be the ID or the ARN.</p>
   */
  inline const Aws::String& GetGuardrailIdentifier() const { return m_guardrailIdentifier; }
  inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
  template <typename GuardrailIdentifierT = Aws::String>
  void SetGuardrailIdentifier(GuardrailIdentifierT&& value) {
    m_guardrailIdentifierHasBeenSet = true;
    m_guardrailIdentifier = std::forward<GuardrailIdentifierT>(value);
  }
  template <typename GuardrailIdentifierT = Aws::String>
  AccountEnforcedGuardrailInferenceInputConfiguration& WithGuardrailIdentifier(GuardrailIdentifierT&& value) {
    SetGuardrailIdentifier(std::forward<GuardrailIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Numerical guardrail version.</p>
   */
  inline const Aws::String& GetGuardrailVersion() const { return m_guardrailVersion; }
  inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
  template <typename GuardrailVersionT = Aws::String>
  void SetGuardrailVersion(GuardrailVersionT&& value) {
    m_guardrailVersionHasBeenSet = true;
    m_guardrailVersion = std::forward<GuardrailVersionT>(value);
  }
  template <typename GuardrailVersionT = Aws::String>
  AccountEnforcedGuardrailInferenceInputConfiguration& WithGuardrailVersion(GuardrailVersionT&& value) {
    SetGuardrailVersion(std::forward<GuardrailVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to honor or ignore input tags at runtime.</p>
   */
  inline InputTags GetInputTags() const { return m_inputTags; }
  inline bool InputTagsHasBeenSet() const { return m_inputTagsHasBeenSet; }
  inline void SetInputTags(InputTags value) {
    m_inputTagsHasBeenSet = true;
    m_inputTags = value;
  }
  inline AccountEnforcedGuardrailInferenceInputConfiguration& WithInputTags(InputTags value) {
    SetInputTags(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_guardrailIdentifier;
  bool m_guardrailIdentifierHasBeenSet = false;

  Aws::String m_guardrailVersion;
  bool m_guardrailVersionHasBeenSet = false;

  InputTags m_inputTags{InputTags::NOT_SET};
  bool m_inputTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
