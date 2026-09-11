/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/TerminateServiceJobsErrorDetail.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {
/**
 * <p>The result of a <code>TerminateServiceJobs</code> request, including the
 * service jobs whose termination request was accepted and the errors for service
 * jobs that couldn't be terminated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateServiceJobsResponse">AWS
 * API Reference</a></p>
 */
class TerminateServiceJobsResult {
 public:
  AWS_BATCH_API TerminateServiceJobsResult() = default;
  AWS_BATCH_API TerminateServiceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BATCH_API TerminateServiceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of the service job IDs whose termination request was accepted.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  TerminateServiceJobsResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = Aws::String>
  TerminateServiceJobsResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>TerminateServiceJobsErrorDetail</code> items, one for each
   * service job that couldn't be terminated. Each item includes the service job ID
   * along with a code and message that describe why the service job wasn't
   * terminated.</p>
   */
  inline const Aws::Vector<TerminateServiceJobsErrorDetail>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<TerminateServiceJobsErrorDetail>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<TerminateServiceJobsErrorDetail>>
  TerminateServiceJobsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = TerminateServiceJobsErrorDetail>
  TerminateServiceJobsResult& AddErrors(ErrorsT&& value) {
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
  TerminateServiceJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_successful;

  Aws::Vector<TerminateServiceJobsErrorDetail> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
