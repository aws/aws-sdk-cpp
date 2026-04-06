/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyPreviewScope.h>
#include <aws/accessanalyzer/model/PolicyPreviewStatus.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccessAnalyzer {
namespace Model {

/**
 * <p>Contains the configuration details for policy preview, including the scope,
 * status, and timestamps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PolicyPreviewConfiguration">AWS
 * API Reference</a></p>
 */
class PolicyPreviewConfiguration {
 public:
  AWS_ACCESSANALYZER_API PolicyPreviewConfiguration() = default;
  AWS_ACCESSANALYZER_API PolicyPreviewConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API PolicyPreviewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scope of the policy preview configuration. Currently only
   * <code>GLOBAL</code> is supported.</p>
   */
  inline PolicyPreviewScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(PolicyPreviewScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline PolicyPreviewConfiguration& WithScope(PolicyPreviewScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the policy preview configuration. A value of
   * <code>ACTIVE</code> indicates the configuration is enabled and CloudTrail
   * authorization events are being collected.</p>
   */
  inline PolicyPreviewStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PolicyPreviewStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PolicyPreviewConfiguration& WithStatus(PolicyPreviewStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the policy preview configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PolicyPreviewConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the policy preview configuration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PolicyPreviewConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  PolicyPreviewScope m_scope{PolicyPreviewScope::NOT_SET};

  PolicyPreviewStatus m_status{PolicyPreviewStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_scopeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
