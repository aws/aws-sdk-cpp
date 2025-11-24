/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/PreviewResult.h>
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
class ListAutomationRulePreviewResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of actions that would be taken based on the specified criteria.
   * </p>
   */
  inline const Aws::Vector<PreviewResult>& GetPreviewResults() const { return m_previewResults; }
  template <typename PreviewResultsT = Aws::Vector<PreviewResult>>
  void SetPreviewResults(PreviewResultsT&& value) {
    m_previewResultsHasBeenSet = true;
    m_previewResults = std::forward<PreviewResultsT>(value);
  }
  template <typename PreviewResultsT = Aws::Vector<PreviewResult>>
  ListAutomationRulePreviewResult& WithPreviewResults(PreviewResultsT&& value) {
    SetPreviewResults(std::forward<PreviewResultsT>(value));
    return *this;
  }
  template <typename PreviewResultsT = PreviewResult>
  ListAutomationRulePreviewResult& AddPreviewResults(PreviewResultsT&& value) {
    m_previewResultsHasBeenSet = true;
    m_previewResults.emplace_back(std::forward<PreviewResultsT>(value));
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
  ListAutomationRulePreviewResult& WithNextToken(NextTokenT&& value) {
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
  ListAutomationRulePreviewResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PreviewResult> m_previewResults;
  bool m_previewResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
