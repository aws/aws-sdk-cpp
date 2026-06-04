/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Session.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {
/**
 * <p>Output of the <code>ListSessions</code> operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSessionsOutput">AWS
 * API Reference</a></p>
 */
class ListSessionsResult {
 public:
  AWS_EMR_API ListSessionsResult() = default;
  AWS_EMR_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMR_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The sessions that match the request.</p>
   */
  inline const Aws::Vector<Session>& GetSessions() const { return m_sessions; }
  template <typename SessionsT = Aws::Vector<Session>>
  void SetSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions = std::forward<SessionsT>(value);
  }
  template <typename SessionsT = Aws::Vector<Session>>
  ListSessionsResult& WithSessions(SessionsT&& value) {
    SetSessions(std::forward<SessionsT>(value));
    return *this;
  }
  template <typename SessionsT = Session>
  ListSessionsResult& AddSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions.emplace_back(std::forward<SessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent <code>ListSessions</code> call to
   * retrieve the next page of results. This field is absent when there are no more
   * results.</p>
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
  Aws::Vector<Session> m_sessions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
