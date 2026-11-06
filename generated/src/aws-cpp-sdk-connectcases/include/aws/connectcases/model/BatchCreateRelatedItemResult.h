/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BatchCreateRelatedItemErrorEntry.h>
#include <aws/connectcases/model/BatchCreateRelatedItemSuccessEntry.h>
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
class BatchCreateRelatedItemResult {
 public:
  AWS_CONNECTCASES_API BatchCreateRelatedItemResult() = default;
  AWS_CONNECTCASES_API BatchCreateRelatedItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTCASES_API BatchCreateRelatedItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of related items that were successfully created and associated with
   * their cases.</p>
   */
  inline const Aws::Vector<BatchCreateRelatedItemSuccessEntry>& GetSuccessfulItems() const { return m_successfulItems; }
  template <typename SuccessfulItemsT = Aws::Vector<BatchCreateRelatedItemSuccessEntry>>
  void SetSuccessfulItems(SuccessfulItemsT&& value) {
    m_successfulItemsHasBeenSet = true;
    m_successfulItems = std::forward<SuccessfulItemsT>(value);
  }
  template <typename SuccessfulItemsT = Aws::Vector<BatchCreateRelatedItemSuccessEntry>>
  BatchCreateRelatedItemResult& WithSuccessfulItems(SuccessfulItemsT&& value) {
    SetSuccessfulItems(std::forward<SuccessfulItemsT>(value));
    return *this;
  }
  template <typename SuccessfulItemsT = BatchCreateRelatedItemSuccessEntry>
  BatchCreateRelatedItemResult& AddSuccessfulItems(SuccessfulItemsT&& value) {
    m_successfulItemsHasBeenSet = true;
    m_successfulItems.emplace_back(std::forward<SuccessfulItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of related items that were not created. Each entry includes an error
   * code and message. Possible error codes include:</p> <ul> <li> <p>
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
  inline const Aws::Vector<BatchCreateRelatedItemErrorEntry>& GetFailedItems() const { return m_failedItems; }
  template <typename FailedItemsT = Aws::Vector<BatchCreateRelatedItemErrorEntry>>
  void SetFailedItems(FailedItemsT&& value) {
    m_failedItemsHasBeenSet = true;
    m_failedItems = std::forward<FailedItemsT>(value);
  }
  template <typename FailedItemsT = Aws::Vector<BatchCreateRelatedItemErrorEntry>>
  BatchCreateRelatedItemResult& WithFailedItems(FailedItemsT&& value) {
    SetFailedItems(std::forward<FailedItemsT>(value));
    return *this;
  }
  template <typename FailedItemsT = BatchCreateRelatedItemErrorEntry>
  BatchCreateRelatedItemResult& AddFailedItems(FailedItemsT&& value) {
    m_failedItemsHasBeenSet = true;
    m_failedItems.emplace_back(std::forward<FailedItemsT>(value));
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
  BatchCreateRelatedItemResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchCreateRelatedItemSuccessEntry> m_successfulItems;

  Aws::Vector<BatchCreateRelatedItemErrorEntry> m_failedItems;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulItemsHasBeenSet = false;
  bool m_failedItemsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
