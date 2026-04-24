/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetTaskError.h>
#include <aws/deadline/model/BatchGetTaskItem.h>

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
class BatchGetTaskResult {
 public:
  AWS_DEADLINE_API BatchGetTaskResult() = default;
  AWS_DEADLINE_API BatchGetTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API BatchGetTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of tasks that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetTaskItem>& GetTasks() const { return m_tasks; }
  template <typename TasksT = Aws::Vector<BatchGetTaskItem>>
  void SetTasks(TasksT&& value) {
    m_tasksHasBeenSet = true;
    m_tasks = std::forward<TasksT>(value);
  }
  template <typename TasksT = Aws::Vector<BatchGetTaskItem>>
  BatchGetTaskResult& WithTasks(TasksT&& value) {
    SetTasks(std::forward<TasksT>(value));
    return *this;
  }
  template <typename TasksT = BatchGetTaskItem>
  BatchGetTaskResult& AddTasks(TasksT&& value) {
    m_tasksHasBeenSet = true;
    m_tasks.emplace_back(std::forward<TasksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for tasks that could not be retrieved.</p>
   */
  inline const Aws::Vector<BatchGetTaskError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetTaskError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetTaskError>>
  BatchGetTaskResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetTaskError>
  BatchGetTaskResult& AddErrors(ErrorsT&& value) {
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
  BatchGetTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetTaskItem> m_tasks;

  Aws::Vector<BatchGetTaskError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_tasksHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
