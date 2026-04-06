/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetSessionError.h>
#include <aws/deadline/model/BatchGetSessionItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {
class BatchGetSessionResult {
 public:
  AWS_DEADLINE_API BatchGetSessionResult() = default;
  AWS_DEADLINE_API BatchGetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API BatchGetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of sessions that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetSessionItem>& GetSessions() const { return m_sessions; }
  template <typename SessionsT = Aws::Vector<BatchGetSessionItem>>
  void SetSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions = std::forward<SessionsT>(value);
  }
  template <typename SessionsT = Aws::Vector<BatchGetSessionItem>>
  BatchGetSessionResult& WithSessions(SessionsT&& value) {
    SetSessions(std::forward<SessionsT>(value));
    return *this;
  }
  template <typename SessionsT = BatchGetSessionItem>
  BatchGetSessionResult& AddSessions(SessionsT&& value) {
    m_sessionsHasBeenSet = true;
    m_sessions.emplace_back(std::forward<SessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for sessions that could not be retrieved.</p>
   */
  inline const Aws::Vector<BatchGetSessionError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetSessionError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetSessionError>>
  BatchGetSessionResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetSessionError>
  BatchGetSessionResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetSessionItem> m_sessions;

  Aws::Vector<BatchGetSessionError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
