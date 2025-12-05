/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutomationEventSummary.h>
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
class ListAutomationEventSummariesResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventSummariesResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventSummariesResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventSummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of automation event summaries that match the specified criteria.
   * </p>
   */
  inline const Aws::Vector<AutomationEventSummary>& GetAutomationEventSummaries() const { return m_automationEventSummaries; }
  template <typename AutomationEventSummariesT = Aws::Vector<AutomationEventSummary>>
  void SetAutomationEventSummaries(AutomationEventSummariesT&& value) {
    m_automationEventSummariesHasBeenSet = true;
    m_automationEventSummaries = std::forward<AutomationEventSummariesT>(value);
  }
  template <typename AutomationEventSummariesT = Aws::Vector<AutomationEventSummary>>
  ListAutomationEventSummariesResult& WithAutomationEventSummaries(AutomationEventSummariesT&& value) {
    SetAutomationEventSummaries(std::forward<AutomationEventSummariesT>(value));
    return *this;
  }
  template <typename AutomationEventSummariesT = AutomationEventSummary>
  ListAutomationEventSummariesResult& AddAutomationEventSummaries(AutomationEventSummariesT&& value) {
    m_automationEventSummariesHasBeenSet = true;
    m_automationEventSummaries.emplace_back(std::forward<AutomationEventSummariesT>(value));
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
  ListAutomationEventSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListAutomationEventSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomationEventSummary> m_automationEventSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_automationEventSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
