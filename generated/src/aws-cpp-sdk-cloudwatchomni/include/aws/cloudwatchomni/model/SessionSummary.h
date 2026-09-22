/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Summary information about a query session, including its identifier, name,
 * and activity timestamps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/SessionSummary">AWS
 * API Reference</a></p>
 */
class SessionSummary {
 public:
  AWS_CLOUDWATCHOMNI_API SessionSummary() = default;
  AWS_CLOUDWATCHOMNI_API SessionSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API SessionSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique ID of the session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SessionSummary& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SessionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the most recent activity in the session.</p>
   */
  inline const Aws::Utils::DateTime& GetLastActivityAt() const { return m_lastActivityAt; }
  inline bool LastActivityAtHasBeenSet() const { return m_lastActivityAtHasBeenSet; }
  template <typename LastActivityAtT = Aws::Utils::DateTime>
  void SetLastActivityAt(LastActivityAtT&& value) {
    m_lastActivityAtHasBeenSet = true;
    m_lastActivityAt = std::forward<LastActivityAtT>(value);
  }
  template <typename LastActivityAtT = Aws::Utils::DateTime>
  SessionSummary& WithLastActivityAt(LastActivityAtT&& value) {
    SetLastActivityAt(std::forward<LastActivityAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the session. Names under <code>/aws/</code> are
   * reserved for service integrations.</p>
   */
  inline const Aws::String& GetSessionName() const { return m_sessionName; }
  inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
  template <typename SessionNameT = Aws::String>
  void SetSessionName(SessionNameT&& value) {
    m_sessionNameHasBeenSet = true;
    m_sessionName = std::forward<SessionNameT>(value);
  }
  template <typename SessionNameT = Aws::String>
  SessionSummary& WithSessionName(SessionNameT&& value) {
    SetSessionName(std::forward<SessionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastActivityAt{};

  Aws::String m_sessionName;
  bool m_sessionIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastActivityAtHasBeenSet = false;
  bool m_sessionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
