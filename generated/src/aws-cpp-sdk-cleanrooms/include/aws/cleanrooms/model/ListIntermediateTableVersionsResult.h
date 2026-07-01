/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableVersionSummary.h>
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
class ListIntermediateTableVersionsResult {
 public:
  AWS_CLEANROOMS_API ListIntermediateTableVersionsResult() = default;
  AWS_CLEANROOMS_API ListIntermediateTableVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API ListIntermediateTableVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of intermediate table version summaries.</p>
   */
  inline const Aws::Vector<IntermediateTableVersionSummary>& GetIntermediateTableVersionSummaries() const {
    return m_intermediateTableVersionSummaries;
  }
  template <typename IntermediateTableVersionSummariesT = Aws::Vector<IntermediateTableVersionSummary>>
  void SetIntermediateTableVersionSummaries(IntermediateTableVersionSummariesT&& value) {
    m_intermediateTableVersionSummariesHasBeenSet = true;
    m_intermediateTableVersionSummaries = std::forward<IntermediateTableVersionSummariesT>(value);
  }
  template <typename IntermediateTableVersionSummariesT = Aws::Vector<IntermediateTableVersionSummary>>
  ListIntermediateTableVersionsResult& WithIntermediateTableVersionSummaries(IntermediateTableVersionSummariesT&& value) {
    SetIntermediateTableVersionSummaries(std::forward<IntermediateTableVersionSummariesT>(value));
    return *this;
  }
  template <typename IntermediateTableVersionSummariesT = IntermediateTableVersionSummary>
  ListIntermediateTableVersionsResult& AddIntermediateTableVersionSummaries(IntermediateTableVersionSummariesT&& value) {
    m_intermediateTableVersionSummariesHasBeenSet = true;
    m_intermediateTableVersionSummaries.emplace_back(std::forward<IntermediateTableVersionSummariesT>(value));
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
  ListIntermediateTableVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListIntermediateTableVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IntermediateTableVersionSummary> m_intermediateTableVersionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_intermediateTableVersionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
