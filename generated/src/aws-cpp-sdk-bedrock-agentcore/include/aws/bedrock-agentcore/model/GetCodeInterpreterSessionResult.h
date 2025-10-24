﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterSessionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
class GetCodeInterpreterSessionResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetCodeInterpreterSessionResult() = default;
  AWS_BEDROCKAGENTCORE_API GetCodeInterpreterSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetCodeInterpreterSessionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the code interpreter.</p>
   */
  inline const Aws::String& GetCodeInterpreterIdentifier() const { return m_codeInterpreterIdentifier; }
  template <typename CodeInterpreterIdentifierT = Aws::String>
  void SetCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) {
    m_codeInterpreterIdentifierHasBeenSet = true;
    m_codeInterpreterIdentifier = std::forward<CodeInterpreterIdentifierT>(value);
  }
  template <typename CodeInterpreterIdentifierT = Aws::String>
  GetCodeInterpreterSessionResult& WithCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) {
    SetCodeInterpreterIdentifier(std::forward<CodeInterpreterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the code interpreter session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  GetCodeInterpreterSessionResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the code interpreter session.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetCodeInterpreterSessionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the code interpreter session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCodeInterpreterSessionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout period for the code interpreter session in seconds.</p>
   */
  inline int GetSessionTimeoutSeconds() const { return m_sessionTimeoutSeconds; }
  inline void SetSessionTimeoutSeconds(int value) {
    m_sessionTimeoutSecondsHasBeenSet = true;
    m_sessionTimeoutSeconds = value;
  }
  inline GetCodeInterpreterSessionResult& WithSessionTimeoutSeconds(int value) {
    SetSessionTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the code interpreter session. Possible values include
   * ACTIVE, STOPPING, and STOPPED.</p>
   */
  inline CodeInterpreterSessionStatus GetStatus() const { return m_status; }
  inline void SetStatus(CodeInterpreterSessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetCodeInterpreterSessionResult& WithStatus(CodeInterpreterSessionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetCodeInterpreterSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeInterpreterIdentifier;
  bool m_codeInterpreterIdentifierHasBeenSet = false;

  Aws::String m_sessionId;
  bool m_sessionIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  int m_sessionTimeoutSeconds{0};
  bool m_sessionTimeoutSecondsHasBeenSet = false;

  CodeInterpreterSessionStatus m_status{CodeInterpreterSessionStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
