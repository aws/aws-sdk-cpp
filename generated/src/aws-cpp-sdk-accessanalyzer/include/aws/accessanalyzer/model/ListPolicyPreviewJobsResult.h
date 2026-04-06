/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyPreviewAnalysisReport.h>
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
namespace AccessAnalyzer {
namespace Model {
class ListPolicyPreviewJobsResult {
 public:
  AWS_ACCESSANALYZER_API ListPolicyPreviewJobsResult() = default;
  AWS_ACCESSANALYZER_API ListPolicyPreviewJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCESSANALYZER_API ListPolicyPreviewJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of policy preview job summaries that match the specified filter
   * criteria.</p>
   */
  inline const Aws::Vector<PolicyPreviewAnalysisReport>& GetAnalysisReports() const { return m_analysisReports; }
  template <typename AnalysisReportsT = Aws::Vector<PolicyPreviewAnalysisReport>>
  void SetAnalysisReports(AnalysisReportsT&& value) {
    m_analysisReportsHasBeenSet = true;
    m_analysisReports = std::forward<AnalysisReportsT>(value);
  }
  template <typename AnalysisReportsT = Aws::Vector<PolicyPreviewAnalysisReport>>
  ListPolicyPreviewJobsResult& WithAnalysisReports(AnalysisReportsT&& value) {
    SetAnalysisReports(std::forward<AnalysisReportsT>(value));
    return *this;
  }
  template <typename AnalysisReportsT = PolicyPreviewAnalysisReport>
  ListPolicyPreviewJobsResult& AddAnalysisReports(AnalysisReportsT&& value) {
    m_analysisReportsHasBeenSet = true;
    m_analysisReports.emplace_back(std::forward<AnalysisReportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination. If present, indicates there are more results
   * available. Pass this token to the next request to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPolicyPreviewJobsResult& WithNextToken(NextTokenT&& value) {
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
  ListPolicyPreviewJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PolicyPreviewAnalysisReport> m_analysisReports;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_analysisReportsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
