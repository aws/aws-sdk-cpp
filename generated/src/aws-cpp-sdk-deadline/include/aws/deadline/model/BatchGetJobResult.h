/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetJobError.h>
#include <aws/deadline/model/BatchGetJobItem.h>

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
class BatchGetJobResult {
 public:
  AWS_DEADLINE_API BatchGetJobResult() = default;
  AWS_DEADLINE_API BatchGetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API BatchGetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of jobs that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetJobItem>& GetJobs() const { return m_jobs; }
  template <typename JobsT = Aws::Vector<BatchGetJobItem>>
  void SetJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs = std::forward<JobsT>(value);
  }
  template <typename JobsT = Aws::Vector<BatchGetJobItem>>
  BatchGetJobResult& WithJobs(JobsT&& value) {
    SetJobs(std::forward<JobsT>(value));
    return *this;
  }
  template <typename JobsT = BatchGetJobItem>
  BatchGetJobResult& AddJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs.emplace_back(std::forward<JobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for jobs that could not be retrieved.</p>
   */
  inline const Aws::Vector<BatchGetJobError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetJobError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetJobError>>
  BatchGetJobResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetJobError>
  BatchGetJobResult& AddErrors(ErrorsT&& value) {
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
  BatchGetJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetJobItem> m_jobs;

  Aws::Vector<BatchGetJobError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
