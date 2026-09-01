/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AssociationMode.h>

#include <utility>

namespace Aws {
namespace GuardDuty {
namespace Model {

/**
 */
class UpdateCustomDetectionRuleOrgConfigurationRequest : public GuardDutyRequest {
 public:
  AWS_GUARDDUTY_API UpdateCustomDetectionRuleOrgConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomDetectionRuleOrgConfiguration"; }

  AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the custom detection rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  UpdateCustomDetectionRuleOrgConfigurationRequest& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution mode of the organization configuration. Valid values:
   * <code>LIVE</code> | <code>DRY_RUN</code>.</p>
   */
  inline AssociationMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(AssociationMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline UpdateCustomDetectionRuleOrgConfigurationRequest& WithMode(AssociationMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account IDs to include in the organization configuration. Mutually
   * exclusive with <code>ExcludeAccountIds</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludeAccountIds() const { return m_includeAccountIds; }
  inline bool IncludeAccountIdsHasBeenSet() const { return m_includeAccountIdsHasBeenSet; }
  template <typename IncludeAccountIdsT = Aws::Vector<Aws::String>>
  void SetIncludeAccountIds(IncludeAccountIdsT&& value) {
    m_includeAccountIdsHasBeenSet = true;
    m_includeAccountIds = std::forward<IncludeAccountIdsT>(value);
  }
  template <typename IncludeAccountIdsT = Aws::Vector<Aws::String>>
  UpdateCustomDetectionRuleOrgConfigurationRequest& WithIncludeAccountIds(IncludeAccountIdsT&& value) {
    SetIncludeAccountIds(std::forward<IncludeAccountIdsT>(value));
    return *this;
  }
  template <typename IncludeAccountIdsT = Aws::String>
  UpdateCustomDetectionRuleOrgConfigurationRequest& AddIncludeAccountIds(IncludeAccountIdsT&& value) {
    m_includeAccountIdsHasBeenSet = true;
    m_includeAccountIds.emplace_back(std::forward<IncludeAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account IDs to exclude from the organization configuration. Mutually
   * exclusive with <code>IncludeAccountIds</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludeAccountIds() const { return m_excludeAccountIds; }
  inline bool ExcludeAccountIdsHasBeenSet() const { return m_excludeAccountIdsHasBeenSet; }
  template <typename ExcludeAccountIdsT = Aws::Vector<Aws::String>>
  void SetExcludeAccountIds(ExcludeAccountIdsT&& value) {
    m_excludeAccountIdsHasBeenSet = true;
    m_excludeAccountIds = std::forward<ExcludeAccountIdsT>(value);
  }
  template <typename ExcludeAccountIdsT = Aws::Vector<Aws::String>>
  UpdateCustomDetectionRuleOrgConfigurationRequest& WithExcludeAccountIds(ExcludeAccountIdsT&& value) {
    SetExcludeAccountIds(std::forward<ExcludeAccountIdsT>(value));
    return *this;
  }
  template <typename ExcludeAccountIdsT = Aws::String>
  UpdateCustomDetectionRuleOrgConfigurationRequest& AddExcludeAccountIds(ExcludeAccountIdsT&& value) {
    m_excludeAccountIdsHasBeenSet = true;
    m_excludeAccountIds.emplace_back(std::forward<ExcludeAccountIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleId;

  AssociationMode m_mode{AssociationMode::NOT_SET};

  Aws::Vector<Aws::String> m_includeAccountIds;

  Aws::Vector<Aws::String> m_excludeAccountIds;
  bool m_ruleIdHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_includeAccountIdsHasBeenSet = false;
  bool m_excludeAccountIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
