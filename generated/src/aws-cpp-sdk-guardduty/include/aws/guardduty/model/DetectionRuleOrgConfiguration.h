/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AssociationMode.h>
#include <aws/guardduty/model/DetectionRuleConfigurationStatus.h>

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
 * <p>Contains the organization-level configuration for a custom detection
 * rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectionRuleOrgConfiguration">AWS
 * API Reference</a></p>
 */
class DetectionRuleOrgConfiguration {
 public:
  AWS_GUARDDUTY_API DetectionRuleOrgConfiguration() = default;
  AWS_GUARDDUTY_API DetectionRuleOrgConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DetectionRuleOrgConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  DetectionRuleOrgConfiguration& WithRuleId(RuleIdT&& value) {
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
  inline DetectionRuleOrgConfiguration& WithMode(AssociationMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration status. Valid values: <code>ACTIVE</code> |
   * <code>PROCESSING</code> | <code>FAILED</code>.</p>
   */
  inline DetectionRuleConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DetectionRuleConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DetectionRuleOrgConfiguration& WithStatus(DetectionRuleConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current configuration status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DetectionRuleOrgConfiguration& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of member account IDs included in the organization configuration.
   * Mutually exclusive with <code>ExcludeAccountIds</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludeAccountIds() const { return m_includeAccountIds; }
  inline bool IncludeAccountIdsHasBeenSet() const { return m_includeAccountIdsHasBeenSet; }
  template <typename IncludeAccountIdsT = Aws::Vector<Aws::String>>
  void SetIncludeAccountIds(IncludeAccountIdsT&& value) {
    m_includeAccountIdsHasBeenSet = true;
    m_includeAccountIds = std::forward<IncludeAccountIdsT>(value);
  }
  template <typename IncludeAccountIdsT = Aws::Vector<Aws::String>>
  DetectionRuleOrgConfiguration& WithIncludeAccountIds(IncludeAccountIdsT&& value) {
    SetIncludeAccountIds(std::forward<IncludeAccountIdsT>(value));
    return *this;
  }
  template <typename IncludeAccountIdsT = Aws::String>
  DetectionRuleOrgConfiguration& AddIncludeAccountIds(IncludeAccountIdsT&& value) {
    m_includeAccountIdsHasBeenSet = true;
    m_includeAccountIds.emplace_back(std::forward<IncludeAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of member account IDs excluded from the organization configuration.
   * Mutually exclusive with <code>IncludeAccountIds</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludeAccountIds() const { return m_excludeAccountIds; }
  inline bool ExcludeAccountIdsHasBeenSet() const { return m_excludeAccountIdsHasBeenSet; }
  template <typename ExcludeAccountIdsT = Aws::Vector<Aws::String>>
  void SetExcludeAccountIds(ExcludeAccountIdsT&& value) {
    m_excludeAccountIdsHasBeenSet = true;
    m_excludeAccountIds = std::forward<ExcludeAccountIdsT>(value);
  }
  template <typename ExcludeAccountIdsT = Aws::Vector<Aws::String>>
  DetectionRuleOrgConfiguration& WithExcludeAccountIds(ExcludeAccountIdsT&& value) {
    SetExcludeAccountIds(std::forward<ExcludeAccountIdsT>(value));
    return *this;
  }
  template <typename ExcludeAccountIdsT = Aws::String>
  DetectionRuleOrgConfiguration& AddExcludeAccountIds(ExcludeAccountIdsT&& value) {
    m_excludeAccountIdsHasBeenSet = true;
    m_excludeAccountIds.emplace_back(std::forward<ExcludeAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the organization configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DetectionRuleOrgConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the organization configuration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DetectionRuleOrgConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the organization configuration expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  DetectionRuleOrgConfiguration& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleId;

  AssociationMode m_mode{AssociationMode::NOT_SET};

  DetectionRuleConfigurationStatus m_status{DetectionRuleConfigurationStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Vector<Aws::String> m_includeAccountIds;

  Aws::Vector<Aws::String> m_excludeAccountIds;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_expiresAt{};
  bool m_ruleIdHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_includeAccountIdsHasBeenSet = false;
  bool m_excludeAccountIdsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
