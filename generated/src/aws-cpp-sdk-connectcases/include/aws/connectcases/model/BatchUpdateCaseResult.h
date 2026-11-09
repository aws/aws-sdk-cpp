/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BatchUpdateCaseErrorEntry.h>
#include <aws/connectcases/model/BatchUpdateCaseSuccessEntry.h>
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
namespace ConnectCases {
namespace Model {
class BatchUpdateCaseResult {
 public:
  AWS_CONNECTCASES_API BatchUpdateCaseResult() = default;
  AWS_CONNECTCASES_API BatchUpdateCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTCASES_API BatchUpdateCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of cases that were successfully updated.</p>
   */
  inline const Aws::Vector<BatchUpdateCaseSuccessEntry>& GetSuccessfulCases() const { return m_successfulCases; }
  template <typename SuccessfulCasesT = Aws::Vector<BatchUpdateCaseSuccessEntry>>
  void SetSuccessfulCases(SuccessfulCasesT&& value) {
    m_successfulCasesHasBeenSet = true;
    m_successfulCases = std::forward<SuccessfulCasesT>(value);
  }
  template <typename SuccessfulCasesT = Aws::Vector<BatchUpdateCaseSuccessEntry>>
  BatchUpdateCaseResult& WithSuccessfulCases(SuccessfulCasesT&& value) {
    SetSuccessfulCases(std::forward<SuccessfulCasesT>(value));
    return *this;
  }
  template <typename SuccessfulCasesT = BatchUpdateCaseSuccessEntry>
  BatchUpdateCaseResult& AddSuccessfulCases(SuccessfulCasesT&& value) {
    m_successfulCasesHasBeenSet = true;
    m_successfulCases.emplace_back(std::forward<SuccessfulCasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of cases that were not updated. Each entry includes an error code
   * and message. Possible error codes include:</p> <ul> <li> <p>
   * <code>CASE_NOT_FOUND</code> - No case exists with the specified case ID.</p>
   * </li> <li> <p> <code>VALIDATION_ERROR</code> - The request contains invalid
   * input.</p> </li> <li> <p> <code>CONFLICT</code> - Another operation is in
   * progress on the case, such as a concurrent update or a merge of the case into
   * another case.</p> </li> <li> <p> <code>THROTTLED</code> - The request rate
   * exceeded the allowed limit.</p> </li> <li> <p> <code>ACCESS_DENIED</code> - The
   * caller lacks permission to perform the operation.</p> </li> <li> <p>
   * <code>SERVICE_QUOTA_EXCEEDED</code> - The request exceeded a service quota.</p>
   * </li> <li> <p> <code>DOMAIN_NOT_FOUND</code> - The case domain was deleted while
   * the request was being processed.</p> </li> <li> <p> <code>INTERNAL_ERROR</code>
   * - An unexpected error occurred on the server.</p> </li> </ul>
   */
  inline const Aws::Vector<BatchUpdateCaseErrorEntry>& GetFailedCases() const { return m_failedCases; }
  template <typename FailedCasesT = Aws::Vector<BatchUpdateCaseErrorEntry>>
  void SetFailedCases(FailedCasesT&& value) {
    m_failedCasesHasBeenSet = true;
    m_failedCases = std::forward<FailedCasesT>(value);
  }
  template <typename FailedCasesT = Aws::Vector<BatchUpdateCaseErrorEntry>>
  BatchUpdateCaseResult& WithFailedCases(FailedCasesT&& value) {
    SetFailedCases(std::forward<FailedCasesT>(value));
    return *this;
  }
  template <typename FailedCasesT = BatchUpdateCaseErrorEntry>
  BatchUpdateCaseResult& AddFailedCases(FailedCasesT&& value) {
    m_failedCasesHasBeenSet = true;
    m_failedCases.emplace_back(std::forward<FailedCasesT>(value));
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
  BatchUpdateCaseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchUpdateCaseSuccessEntry> m_successfulCases;

  Aws::Vector<BatchUpdateCaseErrorEntry> m_failedCases;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulCasesHasBeenSet = false;
  bool m_failedCasesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
