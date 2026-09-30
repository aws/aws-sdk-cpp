/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Parameters for USI (Universal Service Integration) targets. Used when
 * TargetArn is in the format
 * arn:aws:events:::aws-sdk:{service}:{apiAction}</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/UniversalTargetParameters">AWS
 * API Reference</a></p>
 */
class UniversalTargetParameters {
 public:
  AWS_EVENTBRIDGEV2_API UniversalTargetParameters() = default;
  AWS_EVENTBRIDGEV2_API UniversalTargetParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API UniversalTargetParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>JSON string or JSONata expression that produces the API request. Supports {%
   * ... %} JSONata expressions for dynamic values from the event.</p>
   */
  inline const Aws::String& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = Aws::String>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = Aws::String>
  UniversalTargetParameters& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timeout in seconds for each invocation of the target (1-30, default 30).
   * Accepts a literal integer or a {% ... %} JSONata expression evaluated against
   * the event at invocation time. A JSONata expression is syntax-checked at create
   * time. Resolved values outside of the range [1, 30] will be constrained to the
   * nearest bound at delivery time. Defaults to 30 seconds when unset.</p>
   */
  inline const Aws::String& GetInvocationTimeoutSeconds() const { return m_invocationTimeoutSeconds; }
  inline bool InvocationTimeoutSecondsHasBeenSet() const { return m_invocationTimeoutSecondsHasBeenSet; }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  void SetInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    m_invocationTimeoutSecondsHasBeenSet = true;
    m_invocationTimeoutSeconds = std::forward<InvocationTimeoutSecondsT>(value);
  }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  UniversalTargetParameters& WithInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    SetInvocationTimeoutSeconds(std::forward<InvocationTimeoutSecondsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_input;

  Aws::String m_invocationTimeoutSeconds;
  bool m_inputHasBeenSet = false;
  bool m_invocationTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
