/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutomationRule.h>
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
class ListAutomationRulesResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulesResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of automation rules that match the specified criteria. </p>
   */
  inline const Aws::Vector<AutomationRule>& GetAutomationRules() const { return m_automationRules; }
  template <typename AutomationRulesT = Aws::Vector<AutomationRule>>
  void SetAutomationRules(AutomationRulesT&& value) {
    m_automationRulesHasBeenSet = true;
    m_automationRules = std::forward<AutomationRulesT>(value);
  }
  template <typename AutomationRulesT = Aws::Vector<AutomationRule>>
  ListAutomationRulesResult& WithAutomationRules(AutomationRulesT&& value) {
    SetAutomationRules(std::forward<AutomationRulesT>(value));
    return *this;
  }
  template <typename AutomationRulesT = AutomationRule>
  ListAutomationRulesResult& AddAutomationRules(AutomationRulesT&& value) {
    m_automationRulesHasBeenSet = true;
    m_automationRules.emplace_back(std::forward<AutomationRulesT>(value));
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
  ListAutomationRulesResult& WithNextToken(NextTokenT&& value) {
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
  ListAutomationRulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomationRule> m_automationRules;
  bool m_automationRulesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
