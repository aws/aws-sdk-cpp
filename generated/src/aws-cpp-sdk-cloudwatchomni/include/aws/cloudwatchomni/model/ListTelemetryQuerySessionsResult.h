/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/SessionSummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
class ListTelemetryQuerySessionsResult {
 public:
  AWS_CLOUDWATCHOMNI_API ListTelemetryQuerySessionsResult() = default;
  AWS_CLOUDWATCHOMNI_API ListTelemetryQuerySessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API ListTelemetryQuerySessionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of session summaries.</p>
   */
  inline const Aws::Vector<SessionSummary>& GetSessions() const { return m_sessions; }
  template <typename SessionsT = Aws::Vector<SessionSummary>>
  void SetSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions = std::forward<SessionsT>(value);
  }
  template <typename SessionsT = Aws::Vector<SessionSummary>>
  ListTelemetryQuerySessionsResult& WithSessions(SessionsT&& value) {
    SetSessions(std::forward<SessionsT>(value));
    return *this;
  }
  template <typename SessionsT = SessionSummary>
  ListTelemetryQuerySessionsResult& AddSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions.emplace_back(std::forward<SessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTelemetryQuerySessionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListTelemetryQuerySessionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SessionSummary> m_sessions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
