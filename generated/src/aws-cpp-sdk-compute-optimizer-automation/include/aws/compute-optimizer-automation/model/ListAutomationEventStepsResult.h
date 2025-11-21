/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutomationEventStep.h>
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
class ListAutomationEventStepsResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventStepsResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventStepsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of steps for the specified automation event. </p>
   */
  inline const Aws::Vector<AutomationEventStep>& GetAutomationEventSteps() const { return m_automationEventSteps; }
  template <typename AutomationEventStepsT = Aws::Vector<AutomationEventStep>>
  void SetAutomationEventSteps(AutomationEventStepsT&& value) {
    m_automationEventStepsHasBeenSet = true;
    m_automationEventSteps = std::forward<AutomationEventStepsT>(value);
  }
  template <typename AutomationEventStepsT = Aws::Vector<AutomationEventStep>>
  ListAutomationEventStepsResult& WithAutomationEventSteps(AutomationEventStepsT&& value) {
    SetAutomationEventSteps(std::forward<AutomationEventStepsT>(value));
    return *this;
  }
  template <typename AutomationEventStepsT = AutomationEventStep>
  ListAutomationEventStepsResult& AddAutomationEventSteps(AutomationEventStepsT&& value) {
    m_automationEventStepsHasBeenSet = true;
    m_automationEventSteps.emplace_back(std::forward<AutomationEventStepsT>(value));
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
  ListAutomationEventStepsResult& WithNextToken(NextTokenT&& value) {
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
  ListAutomationEventStepsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomationEventStep> m_automationEventSteps;
  bool m_automationEventStepsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
