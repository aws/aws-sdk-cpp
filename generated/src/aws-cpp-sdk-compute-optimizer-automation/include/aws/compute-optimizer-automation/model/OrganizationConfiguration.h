/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/RuleApplyOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Configuration settings for organization-wide automation rules.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/OrganizationConfiguration">AWS
 * API Reference</a></p>
 */
class OrganizationConfiguration {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationConfiguration() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies when organization rules should be applied relative to account
   * rules.</p>
   */
  inline RuleApplyOrder GetRuleApplyOrder() const { return m_ruleApplyOrder; }
  inline bool RuleApplyOrderHasBeenSet() const { return m_ruleApplyOrderHasBeenSet; }
  inline void SetRuleApplyOrder(RuleApplyOrder value) {
    m_ruleApplyOrderHasBeenSet = true;
    m_ruleApplyOrder = value;
  }
  inline OrganizationConfiguration& WithRuleApplyOrder(RuleApplyOrder value) {
    SetRuleApplyOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of specific Amazon Web Services account IDs where the organization rule
   * should be applied.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  OrganizationConfiguration& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  OrganizationConfiguration& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}
 private:
  RuleApplyOrder m_ruleApplyOrder{RuleApplyOrder::NOT_SET};
  bool m_ruleApplyOrderHasBeenSet = false;

  Aws::Vector<Aws::String> m_accountIds;
  bool m_accountIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
