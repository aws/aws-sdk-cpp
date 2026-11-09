/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FallbackError.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The conditions that trigger a fallback to the next target. A fallback occurs
 * if the response matches any of the specified status codes or
 * errors.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/FallbackTriggers">AWS
 * API Reference</a></p>
 */
class FallbackTriggers {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API FallbackTriggers() = default;
  AWS_BEDROCKAGENTCORECONTROL_API FallbackTriggers(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API FallbackTriggers& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP status codes returned by the target that trigger a fallback. You can
   * specify the following:</p> <ul> <li> <p>An exact status code – A three-digit
   * code, such as <code>429</code>.</p> </li> <li> <p>A class of status codes – The
   * first digit followed by <code>XX</code>, such as <code>5XX</code>, which matches
   * every code from 500 to 599.</p> </li> </ul> <p>Only 4XX and 5XX codes are
   * supported. Throttling by the gateway itself doesn't trigger a fallback.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStatusCodes() const { return m_statusCodes; }
  inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }
  template <typename StatusCodesT = Aws::Vector<Aws::String>>
  void SetStatusCodes(StatusCodesT&& value) {
    m_statusCodesHasBeenSet = true;
    m_statusCodes = std::forward<StatusCodesT>(value);
  }
  template <typename StatusCodesT = Aws::Vector<Aws::String>>
  FallbackTriggers& WithStatusCodes(StatusCodesT&& value) {
    SetStatusCodes(std::forward<StatusCodesT>(value));
    return *this;
  }
  template <typename StatusCodesT = Aws::String>
  FallbackTriggers& AddStatusCodes(StatusCodesT&& value) {
    m_statusCodesHasBeenSet = true;
    m_statusCodes.emplace_back(std::forward<StatusCodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors that trigger a fallback. You can specify the following:</p> <ul>
   * <li> <p> <code>CONNECTION_ERROR</code> – The gateway couldn't connect to the
   * target because the connection was refused, reset, or timed out. The request
   * didn't reach the target.</p> </li> <li> <p> <code>FIRST_BYTE_TIMEOUT</code> –
   * The target accepted the connection but didn't return the first byte of the
   * response within <code>firstByteTimeoutMilliseconds</code>. The gateway abandons
   * the request before any of the response reaches you.</p> </li> <li> <p>
   * <code>UNROUTABLE</code> – The gateway couldn't route the request to the target,
   * for example because the target doesn't exist or doesn't support the request
   * path. These errors don't count toward the circuit breaker.</p> </li> </ul>
   */
  inline const Aws::Vector<FallbackError>& GetErrors() const { return m_errors; }
  inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
  template <typename ErrorsT = Aws::Vector<FallbackError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<FallbackError>>
  FallbackTriggers& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  inline FallbackTriggers& AddErrors(FallbackError value) {
    m_errorsHasBeenSet = true;
    m_errors.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_statusCodes;

  Aws::Vector<FallbackError> m_errors;
  bool m_statusCodesHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
