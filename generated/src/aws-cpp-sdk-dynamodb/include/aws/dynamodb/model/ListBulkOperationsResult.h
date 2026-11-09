/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {
class ListBulkOperationsResult {
 public:
  AWS_DYNAMODB_API ListBulkOperationsResult() = default;
  AWS_DYNAMODB_API ListBulkOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DYNAMODB_API ListBulkOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of bulk operation summaries for the current Amazon Web Services
   * account and Amazon Web Services Region.</p>
   */
  inline const Aws::Vector<BulkOperationSummary>& GetBulkOperationsSummaryList() const { return m_bulkOperationsSummaryList; }
  template <typename BulkOperationsSummaryListT = Aws::Vector<BulkOperationSummary>>
  void SetBulkOperationsSummaryList(BulkOperationsSummaryListT&& value) {
    m_bulkOperationsSummaryListHasBeenSet = true;
    m_bulkOperationsSummaryList = std::forward<BulkOperationsSummaryListT>(value);
  }
  template <typename BulkOperationsSummaryListT = Aws::Vector<BulkOperationSummary>>
  ListBulkOperationsResult& WithBulkOperationsSummaryList(BulkOperationsSummaryListT&& value) {
    SetBulkOperationsSummaryList(std::forward<BulkOperationsSummaryListT>(value));
    return *this;
  }
  template <typename BulkOperationsSummaryListT = BulkOperationSummary>
  ListBulkOperationsResult& AddBulkOperationsSummaryList(BulkOperationsSummaryListT&& value) {
    m_bulkOperationsSummaryListHasBeenSet = true;
    m_bulkOperationsSummaryList.emplace_back(std::forward<BulkOperationsSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If this value is returned, there are additional results to be displayed. To
   * retrieve them, call <code>ListBulkOperations</code> again, with
   * <code>NextToken</code> set to this value.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBulkOperationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListBulkOperationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BulkOperationSummary> m_bulkOperationsSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bulkOperationsSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
