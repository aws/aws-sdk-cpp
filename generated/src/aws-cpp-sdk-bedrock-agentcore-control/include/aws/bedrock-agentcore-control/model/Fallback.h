/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CircuitBreakerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/FallbackTarget.h>
#include <aws/bedrock-agentcore-control/model/FallbackTriggers.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The fallback configuration for a route to an inference target. Defines an
 * ordered list of fallback targets to try when a request to the route's target
 * fails, and the conditions that trigger a fallback. A fallback can occur only
 * before the gateway sends the first byte of the response to the caller. After a
 * streaming response starts, the gateway doesn't fall back.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Fallback">AWS
 * API Reference</a></p>
 */
class Fallback {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Fallback() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Fallback(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Fallback& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status codes and errors from the route's target that cause the gateway to
   * send the request to the first fallback target. If you omit
   * <code>triggerOn</code>, the gateway falls back on <code>5XX</code> status codes
   * and on the <code>CONNECTION_ERROR</code>, <code>FIRST_BYTE_TIMEOUT</code>, and
   * <code>UNROUTABLE</code> errors. If you specify <code>triggerOn</code>, only the
   * status codes and errors that you list trigger a fallback.</p>
   */
  inline const FallbackTriggers& GetTriggerOn() const { return m_triggerOn; }
  inline bool TriggerOnHasBeenSet() const { return m_triggerOnHasBeenSet; }
  template <typename TriggerOnT = FallbackTriggers>
  void SetTriggerOn(TriggerOnT&& value) {
    m_triggerOnHasBeenSet = true;
    m_triggerOn = std::forward<TriggerOnT>(value);
  }
  template <typename TriggerOnT = FallbackTriggers>
  Fallback& WithTriggerOn(TriggerOnT&& value) {
    SetTriggerOn(std::forward<TriggerOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in milliseconds, from sending the request to the route's
   * target until the first byte of the response body arrives. If the time expires,
   * the gateway abandons the request and treats it as a
   * <code>FIRST_BYTE_TIMEOUT</code> error. If you don't specify a value, no timeout
   * is enforced.</p>
   */
  inline int GetFirstByteTimeoutMilliseconds() const { return m_firstByteTimeoutMilliseconds; }
  inline bool FirstByteTimeoutMillisecondsHasBeenSet() const { return m_firstByteTimeoutMillisecondsHasBeenSet; }
  inline void SetFirstByteTimeoutMilliseconds(int value) {
    m_firstByteTimeoutMillisecondsHasBeenSet = true;
    m_firstByteTimeoutMilliseconds = value;
  }
  inline Fallback& WithFirstByteTimeoutMilliseconds(int value) {
    SetFirstByteTimeoutMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the gateway temporarily stops sending your requests to a
   * failing target. The circuit breaker tracks each combination of target and model
   * separately. With the circuit breaker enabled, the gateway skips one or more
   * targets and models that fail repeatedly, and your requests go to the next target
   * in the chain. The gateway always tries the last remaining target in the chain.
   * The gateway enables the circuit breaker by default.</p>
   */
  inline const CircuitBreakerConfiguration& GetCircuitBreaker() const { return m_circuitBreaker; }
  inline bool CircuitBreakerHasBeenSet() const { return m_circuitBreakerHasBeenSet; }
  template <typename CircuitBreakerT = CircuitBreakerConfiguration>
  void SetCircuitBreaker(CircuitBreakerT&& value) {
    m_circuitBreakerHasBeenSet = true;
    m_circuitBreaker = std::forward<CircuitBreakerT>(value);
  }
  template <typename CircuitBreakerT = CircuitBreakerConfiguration>
  Fallback& WithCircuitBreaker(CircuitBreakerT&& value) {
    SetCircuitBreaker(std::forward<CircuitBreakerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered list of fallback targets. The gateway tries each target in order
   * until a response doesn't match that target's triggers, and returns that response
   * to the caller. If every target fails, the gateway returns the last response. You
   * can specify up to two fallback targets. Each combination of target and model,
   * including the route's target, can appear only once.</p>
   */
  inline const Aws::Vector<FallbackTarget>& GetTargetFallback() const { return m_targetFallback; }
  inline bool TargetFallbackHasBeenSet() const { return m_targetFallbackHasBeenSet; }
  template <typename TargetFallbackT = Aws::Vector<FallbackTarget>>
  void SetTargetFallback(TargetFallbackT&& value) {
    m_targetFallbackHasBeenSet = true;
    m_targetFallback = std::forward<TargetFallbackT>(value);
  }
  template <typename TargetFallbackT = Aws::Vector<FallbackTarget>>
  Fallback& WithTargetFallback(TargetFallbackT&& value) {
    SetTargetFallback(std::forward<TargetFallbackT>(value));
    return *this;
  }
  template <typename TargetFallbackT = FallbackTarget>
  Fallback& AddTargetFallback(TargetFallbackT&& value) {
    m_targetFallbackHasBeenSet = true;
    m_targetFallback.emplace_back(std::forward<TargetFallbackT>(value));
    return *this;
  }
  ///@}
 private:
  FallbackTriggers m_triggerOn;

  int m_firstByteTimeoutMilliseconds{0};

  CircuitBreakerConfiguration m_circuitBreaker;

  Aws::Vector<FallbackTarget> m_targetFallback;
  bool m_triggerOnHasBeenSet = false;
  bool m_firstByteTimeoutMillisecondsHasBeenSet = false;
  bool m_circuitBreakerHasBeenSet = false;
  bool m_targetFallbackHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
