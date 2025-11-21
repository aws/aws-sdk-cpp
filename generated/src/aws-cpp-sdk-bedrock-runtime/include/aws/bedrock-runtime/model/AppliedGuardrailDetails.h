/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailOrigin.h>
#include <aws/bedrock-runtime/model/GuardrailOwnership.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Details about the specific guardrail that was applied during this assessment,
 * including its identifier, version, ARN, origin, and ownership
 * information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AppliedGuardrailDetails">AWS
 * API Reference</a></p>
 */
class AppliedGuardrailDetails {
 public:
  AWS_BEDROCKRUNTIME_API AppliedGuardrailDetails() = default;
  AWS_BEDROCKRUNTIME_API AppliedGuardrailDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API AppliedGuardrailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the guardrail that was applied.</p>
   */
  inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
  inline bool GuardrailIdHasBeenSet() const { return m_guardrailIdHasBeenSet; }
  template <typename GuardrailIdT = Aws::String>
  void SetGuardrailId(GuardrailIdT&& value) {
    m_guardrailIdHasBeenSet = true;
    m_guardrailId = std::forward<GuardrailIdT>(value);
  }
  template <typename GuardrailIdT = Aws::String>
  AppliedGuardrailDetails& WithGuardrailId(GuardrailIdT&& value) {
    SetGuardrailId(std::forward<GuardrailIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the guardrail that was applied.</p>
   */
  inline const Aws::String& GetGuardrailVersion() const { return m_guardrailVersion; }
  inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
  template <typename GuardrailVersionT = Aws::String>
  void SetGuardrailVersion(GuardrailVersionT&& value) {
    m_guardrailVersionHasBeenSet = true;
    m_guardrailVersion = std::forward<GuardrailVersionT>(value);
  }
  template <typename GuardrailVersionT = Aws::String>
  AppliedGuardrailDetails& WithGuardrailVersion(GuardrailVersionT&& value) {
    SetGuardrailVersion(std::forward<GuardrailVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the guardrail that was applied.</p>
   */
  inline const Aws::String& GetGuardrailArn() const { return m_guardrailArn; }
  inline bool GuardrailArnHasBeenSet() const { return m_guardrailArnHasBeenSet; }
  template <typename GuardrailArnT = Aws::String>
  void SetGuardrailArn(GuardrailArnT&& value) {
    m_guardrailArnHasBeenSet = true;
    m_guardrailArn = std::forward<GuardrailArnT>(value);
  }
  template <typename GuardrailArnT = Aws::String>
  AppliedGuardrailDetails& WithGuardrailArn(GuardrailArnT&& value) {
    SetGuardrailArn(std::forward<GuardrailArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origin of how the guardrail was applied. This can be either requested at
   * the API level or enforced at the account or organization level as a default
   * guardrail.</p>
   */
  inline const Aws::Vector<GuardrailOrigin>& GetGuardrailOrigin() const { return m_guardrailOrigin; }
  inline bool GuardrailOriginHasBeenSet() const { return m_guardrailOriginHasBeenSet; }
  template <typename GuardrailOriginT = Aws::Vector<GuardrailOrigin>>
  void SetGuardrailOrigin(GuardrailOriginT&& value) {
    m_guardrailOriginHasBeenSet = true;
    m_guardrailOrigin = std::forward<GuardrailOriginT>(value);
  }
  template <typename GuardrailOriginT = Aws::Vector<GuardrailOrigin>>
  AppliedGuardrailDetails& WithGuardrailOrigin(GuardrailOriginT&& value) {
    SetGuardrailOrigin(std::forward<GuardrailOriginT>(value));
    return *this;
  }
  inline AppliedGuardrailDetails& AddGuardrailOrigin(GuardrailOrigin value) {
    m_guardrailOriginHasBeenSet = true;
    m_guardrailOrigin.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ownership type of the guardrail, indicating whether it is owned by the
   * requesting account or is a cross-account guardrail shared from another AWS
   * account.</p>
   */
  inline GuardrailOwnership GetGuardrailOwnership() const { return m_guardrailOwnership; }
  inline bool GuardrailOwnershipHasBeenSet() const { return m_guardrailOwnershipHasBeenSet; }
  inline void SetGuardrailOwnership(GuardrailOwnership value) {
    m_guardrailOwnershipHasBeenSet = true;
    m_guardrailOwnership = value;
  }
  inline AppliedGuardrailDetails& WithGuardrailOwnership(GuardrailOwnership value) {
    SetGuardrailOwnership(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_guardrailId;
  bool m_guardrailIdHasBeenSet = false;

  Aws::String m_guardrailVersion;
  bool m_guardrailVersionHasBeenSet = false;

  Aws::String m_guardrailArn;
  bool m_guardrailArnHasBeenSet = false;

  Aws::Vector<GuardrailOrigin> m_guardrailOrigin;
  bool m_guardrailOriginHasBeenSet = false;

  GuardrailOwnership m_guardrailOwnership{GuardrailOwnership::NOT_SET};
  bool m_guardrailOwnershipHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
