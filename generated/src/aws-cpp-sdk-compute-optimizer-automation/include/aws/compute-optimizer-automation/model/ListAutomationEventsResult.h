/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutomationEvent.h>
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
class ListAutomationEventsResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventsResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of automation events that match the specified criteria. </p>
   */
  inline const Aws::Vector<AutomationEvent>& GetAutomationEvents() const { return m_automationEvents; }
  template <typename AutomationEventsT = Aws::Vector<AutomationEvent>>
  void SetAutomationEvents(AutomationEventsT&& value) {
    m_automationEventsHasBeenSet = true;
    m_automationEvents = std::forward<AutomationEventsT>(value);
  }
  template <typename AutomationEventsT = Aws::Vector<AutomationEvent>>
  ListAutomationEventsResult& WithAutomationEvents(AutomationEventsT&& value) {
    SetAutomationEvents(std::forward<AutomationEventsT>(value));
    return *this;
  }
  template <typename AutomationEventsT = AutomationEvent>
  ListAutomationEventsResult& AddAutomationEvents(AutomationEventsT&& value) {
    m_automationEventsHasBeenSet = true;
    m_automationEvents.emplace_back(std::forward<AutomationEventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token to use to retrieve the next page of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutomationEventsResult& WithNextToken(NextTokenT&& value) {
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
  ListAutomationEventsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomationEvent> m_automationEvents;
  bool m_automationEventsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
