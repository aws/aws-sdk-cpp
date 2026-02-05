/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
class SaveBrowserSessionProfileResult {
 public:
  AWS_BEDROCKAGENTCORE_API SaveBrowserSessionProfileResult() = default;
  AWS_BEDROCKAGENTCORE_API SaveBrowserSessionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API SaveBrowserSessionProfileResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the saved browser profile.</p>
   */
  inline const Aws::String& GetProfileIdentifier() const { return m_profileIdentifier; }
  template <typename ProfileIdentifierT = Aws::String>
  void SetProfileIdentifier(ProfileIdentifierT&& value) {
    m_profileIdentifierHasBeenSet = true;
    m_profileIdentifier = std::forward<ProfileIdentifierT>(value);
  }
  template <typename ProfileIdentifierT = Aws::String>
  SaveBrowserSessionProfileResult& WithProfileIdentifier(ProfileIdentifierT&& value) {
    SetProfileIdentifier(std::forward<ProfileIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the browser associated with the session from which
   * the profile was saved.</p>
   */
  inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
  template <typename BrowserIdentifierT = Aws::String>
  void SetBrowserIdentifier(BrowserIdentifierT&& value) {
    m_browserIdentifierHasBeenSet = true;
    m_browserIdentifier = std::forward<BrowserIdentifierT>(value);
  }
  template <typename BrowserIdentifierT = Aws::String>
  SaveBrowserSessionProfileResult& WithBrowserIdentifier(BrowserIdentifierT&& value) {
    SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the browser session from which the profile was
   * saved.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SaveBrowserSessionProfileResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the browser profile was last updated. This value is in ISO
   * 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  SaveBrowserSessionProfileResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
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
  SaveBrowserSessionProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileIdentifier;

  Aws::String m_browserIdentifier;

  Aws::String m_sessionId;

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::String m_requestId;
  bool m_profileIdentifierHasBeenSet = false;
  bool m_browserIdentifierHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
