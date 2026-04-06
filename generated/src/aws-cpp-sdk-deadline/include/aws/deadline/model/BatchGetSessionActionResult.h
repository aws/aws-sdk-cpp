/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetSessionActionError.h>
#include <aws/deadline/model/BatchGetSessionActionItem.h>

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
class BatchGetSessionActionResult {
 public:
  AWS_DEADLINE_API BatchGetSessionActionResult() = default;
  AWS_DEADLINE_API BatchGetSessionActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API BatchGetSessionActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of session actions that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetSessionActionItem>& GetSessionActions() const { return m_sessionActions; }
  template <typename SessionActionsT = Aws::Vector<BatchGetSessionActionItem>>
  void SetSessionActions(SessionActionsT&& value) {
    m_sessionActionsHasBeenSet = true;
    m_sessionActions = std::forward<SessionActionsT>(value);
  }
  template <typename SessionActionsT = Aws::Vector<BatchGetSessionActionItem>>
  BatchGetSessionActionResult& WithSessionActions(SessionActionsT&& value) {
    SetSessionActions(std::forward<SessionActionsT>(value));
    return *this;
  }
  template <typename SessionActionsT = BatchGetSessionActionItem>
  BatchGetSessionActionResult& AddSessionActions(SessionActionsT&& value) {
    m_sessionActionsHasBeenSet = true;
    m_sessionActions.emplace_back(std::forward<SessionActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for session actions that could not be retrieved.</p>
   */
  inline const Aws::Vector<BatchGetSessionActionError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetSessionActionError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetSessionActionError>>
  BatchGetSessionActionResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetSessionActionError>
  BatchGetSessionActionResult& AddErrors(ErrorsT&& value) {
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
  BatchGetSessionActionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetSessionActionItem> m_sessionActions;

  Aws::Vector<BatchGetSessionActionError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionActionsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
