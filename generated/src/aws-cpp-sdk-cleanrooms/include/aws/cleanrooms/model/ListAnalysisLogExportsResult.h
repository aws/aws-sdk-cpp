/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportSummary.h>
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
class ListAnalysisLogExportsResult {
 public:
  AWS_CLEANROOMS_API ListAnalysisLogExportsResult() = default;
  AWS_CLEANROOMS_API ListAnalysisLogExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API ListAnalysisLogExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListAnalysisLogExportsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of analysis log exports.</p>
   */
  inline const Aws::Vector<AnalysisLogExportSummary>& GetAnalysisLogExports() const { return m_analysisLogExports; }
  template <typename AnalysisLogExportsT = Aws::Vector<AnalysisLogExportSummary>>
  void SetAnalysisLogExports(AnalysisLogExportsT&& value) {
    m_analysisLogExportsHasBeenSet = true;
    m_analysisLogExports = std::forward<AnalysisLogExportsT>(value);
  }
  template <typename AnalysisLogExportsT = Aws::Vector<AnalysisLogExportSummary>>
  ListAnalysisLogExportsResult& WithAnalysisLogExports(AnalysisLogExportsT&& value) {
    SetAnalysisLogExports(std::forward<AnalysisLogExportsT>(value));
    return *this;
  }
  template <typename AnalysisLogExportsT = AnalysisLogExportSummary>
  ListAnalysisLogExportsResult& AddAnalysisLogExports(AnalysisLogExportsT&& value) {
    m_analysisLogExportsHasBeenSet = true;
    m_analysisLogExports.emplace_back(std::forward<AnalysisLogExportsT>(value));
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
  ListAnalysisLogExportsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AnalysisLogExportSummary> m_analysisLogExports;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_analysisLogExportsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
