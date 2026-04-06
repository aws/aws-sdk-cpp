/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetWorkerError.h>
#include <aws/deadline/model/BatchGetWorkerItem.h>

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
class BatchGetWorkerResult {
 public:
  AWS_DEADLINE_API BatchGetWorkerResult() = default;
  AWS_DEADLINE_API BatchGetWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API BatchGetWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of workers that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetWorkerItem>& GetWorkers() const { return m_workers; }
  template <typename WorkersT = Aws::Vector<BatchGetWorkerItem>>
  void SetWorkers(WorkersT&& value) {
    m_workersHasBeenSet = true;
    m_workers = std::forward<WorkersT>(value);
  }
  template <typename WorkersT = Aws::Vector<BatchGetWorkerItem>>
  BatchGetWorkerResult& WithWorkers(WorkersT&& value) {
    SetWorkers(std::forward<WorkersT>(value));
    return *this;
  }
  template <typename WorkersT = BatchGetWorkerItem>
  BatchGetWorkerResult& AddWorkers(WorkersT&& value) {
    m_workersHasBeenSet = true;
    m_workers.emplace_back(std::forward<WorkersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for workers that could not be retrieved.</p>
   */
  inline const Aws::Vector<BatchGetWorkerError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetWorkerError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetWorkerError>>
  BatchGetWorkerResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetWorkerError>
  BatchGetWorkerResult& AddErrors(ErrorsT&& value) {
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
  BatchGetWorkerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetWorkerItem> m_workers;

  Aws::Vector<BatchGetWorkerError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_workersHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
