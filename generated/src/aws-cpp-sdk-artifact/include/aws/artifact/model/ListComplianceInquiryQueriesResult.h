/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/QuerySummary.h>
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
namespace Artifact {
namespace Model {
class ListComplianceInquiryQueriesResult {
 public:
  AWS_ARTIFACT_API ListComplianceInquiryQueriesResult() = default;
  AWS_ARTIFACT_API ListComplianceInquiryQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ARTIFACT_API ListComplianceInquiryQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of compliance query summaries.</p>
   */
  inline const Aws::Vector<QuerySummary>& GetQueries() const { return m_queries; }
  template <typename QueriesT = Aws::Vector<QuerySummary>>
  void SetQueries(QueriesT&& value) {
    m_queriesHasBeenSet = true;
    m_queries = std::forward<QueriesT>(value);
  }
  template <typename QueriesT = Aws::Vector<QuerySummary>>
  ListComplianceInquiryQueriesResult& WithQueries(QueriesT&& value) {
    SetQueries(std::forward<QueriesT>(value));
    return *this;
  }
  template <typename QueriesT = QuerySummary>
  ListComplianceInquiryQueriesResult& AddQueries(QueriesT&& value) {
    m_queriesHasBeenSet = true;
    m_queries.emplace_back(std::forward<QueriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token to request the next page of resources.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListComplianceInquiryQueriesResult& WithNextToken(NextTokenT&& value) {
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
  ListComplianceInquiryQueriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<QuerySummary> m_queries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_queriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
