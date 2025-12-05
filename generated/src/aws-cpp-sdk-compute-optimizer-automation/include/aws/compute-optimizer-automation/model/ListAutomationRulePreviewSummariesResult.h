/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/PreviewResultSummary.h>
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
namespace ComputeOptimizerAutomation {
namespace Model {
class ListAutomationRulePreviewSummariesResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewSummariesResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewSummariesResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewSummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of automation rule preview summaries that match the specified
   * criteria.</p>
   */
  inline const Aws::Vector<PreviewResultSummary>& GetPreviewResultSummaries() const { return m_previewResultSummaries; }
  template <typename PreviewResultSummariesT = Aws::Vector<PreviewResultSummary>>
  void SetPreviewResultSummaries(PreviewResultSummariesT&& value) {
    m_previewResultSummariesHasBeenSet = true;
    m_previewResultSummaries = std::forward<PreviewResultSummariesT>(value);
  }
  template <typename PreviewResultSummariesT = Aws::Vector<PreviewResultSummary>>
  ListAutomationRulePreviewSummariesResult& WithPreviewResultSummaries(PreviewResultSummariesT&& value) {
    SetPreviewResultSummaries(std::forward<PreviewResultSummariesT>(value));
    return *this;
  }
  template <typename PreviewResultSummariesT = PreviewResultSummary>
  ListAutomationRulePreviewSummariesResult& AddPreviewResultSummaries(PreviewResultSummariesT&& value) {
    m_previewResultSummariesHasBeenSet = true;
    m_previewResultSummaries.emplace_back(std::forward<PreviewResultSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination. If present, indicates there are more results
   * available and can be used in subsequent requests.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutomationRulePreviewSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListAutomationRulePreviewSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PreviewResultSummary> m_previewResultSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_previewResultSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
