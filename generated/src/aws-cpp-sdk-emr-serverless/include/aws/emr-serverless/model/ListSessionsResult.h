/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/SessionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {
class ListSessionsResult {
 public:
  AWS_EMRSERVERLESS_API ListSessionsResult() = default;
  AWS_EMRSERVERLESS_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMRSERVERLESS_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The output lists information about the specified sessions.</p>
   */
  inline const Aws::Vector<SessionSummary>& GetSessions() const { return m_sessions; }
  template <typename SessionsT = Aws::Vector<SessionSummary>>
  void SetSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions = std::forward<SessionsT>(value);
  }
  template <typename SessionsT = Aws::Vector<SessionSummary>>
  ListSessionsResult& WithSessions(SessionsT&& value) {
    SetSessions(std::forward<SessionsT>(value));
    return *this;
  }
  template <typename SessionsT = SessionSummary>
  ListSessionsResult& AddSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions.emplace_back(std::forward<SessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output displays the token for the next set of session results. This is
   * required for pagination and is available as a response of the previous
   * request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSessionsResult& WithNextToken(NextTokenT&& value) {
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
  ListSessionsResult& WithRequestId(RequestIdT&& value) {
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
}  // namespace EMRServerless
}  // namespace Aws
