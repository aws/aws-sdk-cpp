/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/BatchPutProfileObjectErrorItem.h>
#include <aws/customer-profiles/model/BatchPutProfileObjectResponseItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class BatchPutProfileObjectResult {
 public:
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectResult() = default;
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API BatchPutProfileObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of items that were successfully added to the domain.</p>
   */
  inline const Aws::Vector<BatchPutProfileObjectResponseItem>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<BatchPutProfileObjectResponseItem>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<BatchPutProfileObjectResponseItem>>
  BatchPutProfileObjectResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = BatchPutProfileObjectResponseItem>
  BatchPutProfileObjectResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of items that failed to be added to the domain.</p>
   */
  inline const Aws::Vector<BatchPutProfileObjectErrorItem>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<BatchPutProfileObjectErrorItem>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<BatchPutProfileObjectErrorItem>>
  BatchPutProfileObjectResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = BatchPutProfileObjectErrorItem>
  BatchPutProfileObjectResult& AddFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed.emplace_back(std::forward<FailedT>(value));
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
  BatchPutProfileObjectResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchPutProfileObjectResponseItem> m_successful;

  Aws::Vector<BatchPutProfileObjectErrorItem> m_failed;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
