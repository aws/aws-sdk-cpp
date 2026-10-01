/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/JobResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
class UpdateBrandProfileFromRegistrationResult {
 public:
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileFromRegistrationResult() = default;
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileFromRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API UpdateBrandProfileFromRegistrationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The results of the operation. Each result pairs a requested item with the
   * asynchronous job that processes it.</p>
   */
  inline const Aws::Vector<JobResult>& GetResults() const { return m_results; }
  template <typename ResultsT = Aws::Vector<JobResult>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<JobResult>>
  UpdateBrandProfileFromRegistrationResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = JobResult>
  UpdateBrandProfileFromRegistrationResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
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
  UpdateBrandProfileFromRegistrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<JobResult> m_results;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resultsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
