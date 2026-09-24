/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/InvocationType.h>

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
 * <p>Step Functions invocation parameters for subscribers. Values are forwarded to
 * the Step Functions StartExecution or StartSyncExecution API. Every string member
 * accepts a literal or a JSONata expression (e.g. &quot;{%
 * $events.Data.executionName %}&quot;).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/StepFunctionsParameters">AWS
 * API Reference</a></p>
 */
class StepFunctionsParameters {
 public:
  AWS_EVENTBRIDGEV2_API StepFunctionsParameters() = default;
  AWS_EVENTBRIDGEV2_API StepFunctionsParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API StepFunctionsParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Selects StartExecution (EVENT) or StartSyncExecution (REQUEST_RESPONSE) at
   * delivery.</p>
   */
  inline InvocationType GetInvocationType() const { return m_invocationType; }
  inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }
  inline void SetInvocationType(InvocationType value) {
    m_invocationTypeHasBeenSet = true;
    m_invocationType = value;
  }
  inline StepFunctionsParameters& WithInvocationType(InvocationType value) {
    SetInvocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name for the execution. Must be unique per account/region/state machine.
   * Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StepFunctionsParameters& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>X-Ray trace header for distributed tracing. Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetTraceHeader() const { return m_traceHeader; }
  inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }
  template <typename TraceHeaderT = Aws::String>
  void SetTraceHeader(TraceHeaderT&& value) {
    m_traceHeaderHasBeenSet = true;
    m_traceHeader = std::forward<TraceHeaderT>(value);
  }
  template <typename TraceHeaderT = Aws::String>
  StepFunctionsParameters& WithTraceHeader(TraceHeaderT&& value) {
    SetTraceHeader(std::forward<TraceHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timeout in seconds for each invocation of the target (1-30). String-typed
   * (not integer) so the value may be a JSONata expression.</p>
   */
  inline const Aws::String& GetInvocationTimeoutSeconds() const { return m_invocationTimeoutSeconds; }
  inline bool InvocationTimeoutSecondsHasBeenSet() const { return m_invocationTimeoutSecondsHasBeenSet; }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  void SetInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    m_invocationTimeoutSecondsHasBeenSet = true;
    m_invocationTimeoutSeconds = std::forward<InvocationTimeoutSecondsT>(value);
  }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  StepFunctionsParameters& WithInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    SetInvocationTimeoutSeconds(std::forward<InvocationTimeoutSecondsT>(value));
    return *this;
  }
  ///@}
 private:
  InvocationType m_invocationType{InvocationType::NOT_SET};

  Aws::String m_name;

  Aws::String m_traceHeader;

  Aws::String m_invocationTimeoutSeconds;
  bool m_invocationTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_traceHeaderHasBeenSet = false;
  bool m_invocationTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
