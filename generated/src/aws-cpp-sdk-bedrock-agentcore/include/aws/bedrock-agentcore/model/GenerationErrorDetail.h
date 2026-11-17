/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The failures in a dataset generation that share an error code.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationErrorDetail">AWS
 * API Reference</a></p>
 */
class GenerationErrorDetail {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationErrorDetail() = default;
  AWS_BEDROCKAGENTCORE_API GenerationErrorDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code, for example <code>ACCESS_DENIED</code> or
   * <code>EXPIRED_CREDENTIALS</code>. New codes can be added.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  GenerationErrorDetail& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the error.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GenerationErrorDetail& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions and traces that failed with this error code. Absent
   * for a generation that finished before failures were counted by code. In that
   * case, <code>sessionIds</code> is a sample.</p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline GenerationErrorDetail& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Up to 10 of the sessions that failed with this error code. Each entry is a
   * session ID, or the ID of a trace named in the request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionIds() const { return m_sessionIds; }
  inline bool SessionIdsHasBeenSet() const { return m_sessionIdsHasBeenSet; }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  void SetSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds = std::forward<SessionIdsT>(value);
  }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  GenerationErrorDetail& WithSessionIds(SessionIdsT&& value) {
    SetSessionIds(std::forward<SessionIdsT>(value));
    return *this;
  }
  template <typename SessionIdsT = Aws::String>
  GenerationErrorDetail& AddSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds.emplace_back(std::forward<SessionIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorCode;

  Aws::String m_errorMessage;

  int m_count{0};

  Aws::Vector<Aws::String> m_sessionIds;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_sessionIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
