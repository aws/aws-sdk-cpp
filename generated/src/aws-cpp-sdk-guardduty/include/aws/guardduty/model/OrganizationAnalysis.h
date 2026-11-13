/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccountSummary.h>
#include <aws/guardduty/model/OrganizationFindingsSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains an analysis of the findings across an organization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationAnalysis">AWS
 * API Reference</a></p>
 */
class OrganizationAnalysis {
 public:
  AWS_GUARDDUTY_API OrganizationAnalysis() = default;
  AWS_GUARDDUTY_API OrganizationAnalysis(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API OrganizationAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A summary of the findings across the organization.</p>
   */
  inline const OrganizationFindingsSummary& GetFindingsSummary() const { return m_findingsSummary; }
  inline bool FindingsSummaryHasBeenSet() const { return m_findingsSummaryHasBeenSet; }
  template <typename FindingsSummaryT = OrganizationFindingsSummary>
  void SetFindingsSummary(FindingsSummaryT&& value) {
    m_findingsSummaryHasBeenSet = true;
    m_findingsSummary = std::forward<FindingsSummaryT>(value);
  }
  template <typename FindingsSummaryT = OrganizationFindingsSummary>
  OrganizationAnalysis& WithFindingsSummary(FindingsSummaryT&& value) {
    SetFindingsSummary(std::forward<FindingsSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accounts in the organization that have findings, with the number of
   * findings in each.</p>
   */
  inline const Aws::Vector<AccountSummary>& GetAccountBreakdown() const { return m_accountBreakdown; }
  inline bool AccountBreakdownHasBeenSet() const { return m_accountBreakdownHasBeenSet; }
  template <typename AccountBreakdownT = Aws::Vector<AccountSummary>>
  void SetAccountBreakdown(AccountBreakdownT&& value) {
    m_accountBreakdownHasBeenSet = true;
    m_accountBreakdown = std::forward<AccountBreakdownT>(value);
  }
  template <typename AccountBreakdownT = Aws::Vector<AccountSummary>>
  OrganizationAnalysis& WithAccountBreakdown(AccountBreakdownT&& value) {
    SetAccountBreakdown(std::forward<AccountBreakdownT>(value));
    return *this;
  }
  template <typename AccountBreakdownT = AccountSummary>
  OrganizationAnalysis& AddAccountBreakdown(AccountBreakdownT&& value) {
    m_accountBreakdownHasBeenSet = true;
    m_accountBreakdown.emplace_back(std::forward<AccountBreakdownT>(value));
    return *this;
  }
  ///@}
 private:
  OrganizationFindingsSummary m_findingsSummary;

  Aws::Vector<AccountSummary> m_accountBreakdown;
  bool m_findingsSummaryHasBeenSet = false;
  bool m_accountBreakdownHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
