/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/GuardrailAction.h>
#include <aws/guardduty/model/GuardrailSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about an Amazon Bedrock guardrail evaluated during a model
 * invocation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/BedrockGuardrailResource">AWS
 * API Reference</a></p>
 */
class BedrockGuardrailResource {
 public:
  AWS_GUARDDUTY_API BedrockGuardrailResource() = default;
  AWS_GUARDDUTY_API BedrockGuardrailResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API BedrockGuardrailResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the Amazon Bedrock guardrail. Valid values are a numeric
   * version, <code>DRAFT</code>, or <code>ENFORCED</code>.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  BedrockGuardrailResource& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the guardrail intervened during the model invocation.</p>
   */
  inline GuardrailAction GetGuardrailAction() const { return m_guardrailAction; }
  inline bool GuardrailActionHasBeenSet() const { return m_guardrailActionHasBeenSet; }
  inline void SetGuardrailAction(GuardrailAction value) {
    m_guardrailActionHasBeenSet = true;
    m_guardrailAction = value;
  }
  inline BedrockGuardrailResource& WithGuardrailAction(GuardrailAction value) {
    SetGuardrailAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the guardrail was applied on the input or output of the
   * model invocation.</p>
   */
  inline GuardrailSource GetGuardrailSource() const { return m_guardrailSource; }
  inline bool GuardrailSourceHasBeenSet() const { return m_guardrailSourceHasBeenSet; }
  inline void SetGuardrailSource(GuardrailSource value) {
    m_guardrailSourceHasBeenSet = true;
    m_guardrailSource = value;
  }
  inline BedrockGuardrailResource& WithGuardrailSource(GuardrailSource value) {
    SetGuardrailSource(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  GuardrailAction m_guardrailAction{GuardrailAction::NOT_SET};

  GuardrailSource m_guardrailSource{GuardrailSource::NOT_SET};
  bool m_versionHasBeenSet = false;
  bool m_guardrailActionHasBeenSet = false;
  bool m_guardrailSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
