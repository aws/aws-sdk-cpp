/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableSummary.h>
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
namespace CleanRooms {
namespace Model {
class ListIntermediateTablesResult {
 public:
  AWS_CLEANROOMS_API ListIntermediateTablesResult() = default;
  AWS_CLEANROOMS_API ListIntermediateTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API ListIntermediateTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of intermediate table summaries.</p>
   */
  inline const Aws::Vector<IntermediateTableSummary>& GetIntermediateTableSummaries() const { return m_intermediateTableSummaries; }
  template <typename IntermediateTableSummariesT = Aws::Vector<IntermediateTableSummary>>
  void SetIntermediateTableSummaries(IntermediateTableSummariesT&& value) {
    m_intermediateTableSummariesHasBeenSet = true;
    m_intermediateTableSummaries = std::forward<IntermediateTableSummariesT>(value);
  }
  template <typename IntermediateTableSummariesT = Aws::Vector<IntermediateTableSummary>>
  ListIntermediateTablesResult& WithIntermediateTableSummaries(IntermediateTableSummariesT&& value) {
    SetIntermediateTableSummaries(std::forward<IntermediateTableSummariesT>(value));
    return *this;
  }
  template <typename IntermediateTableSummariesT = IntermediateTableSummary>
  ListIntermediateTablesResult& AddIntermediateTableSummaries(IntermediateTableSummariesT&& value) {
    m_intermediateTableSummariesHasBeenSet = true;
    m_intermediateTableSummaries.emplace_back(std::forward<IntermediateTableSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that's used to fetch the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListIntermediateTablesResult& WithNextToken(NextTokenT&& value) {
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
  ListIntermediateTablesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IntermediateTableSummary> m_intermediateTableSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_intermediateTableSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
