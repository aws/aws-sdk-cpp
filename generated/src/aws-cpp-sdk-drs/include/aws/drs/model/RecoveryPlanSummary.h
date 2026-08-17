/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>Summary information about a Recovery Plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanSummary">AWS
 * API Reference</a></p>
 */
class RecoveryPlanSummary {
 public:
  AWS_DRS_API RecoveryPlanSummary() = default;
  AWS_DRS_API RecoveryPlanSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan.</p>
   */
  inline const Aws::String& GetRecoveryPlanArn() const { return m_recoveryPlanArn; }
  inline bool RecoveryPlanArnHasBeenSet() const { return m_recoveryPlanArnHasBeenSet; }
  template <typename RecoveryPlanArnT = Aws::String>
  void SetRecoveryPlanArn(RecoveryPlanArnT&& value) {
    m_recoveryPlanArnHasBeenSet = true;
    m_recoveryPlanArn = std::forward<RecoveryPlanArnT>(value);
  }
  template <typename RecoveryPlanArnT = Aws::String>
  RecoveryPlanSummary& WithRecoveryPlanArn(RecoveryPlanArnT&& value) {
    SetRecoveryPlanArn(std::forward<RecoveryPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RecoveryPlanSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Recovery Plan.</p>
   */
  inline RecoveryPlanStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecoveryPlanStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecoveryPlanSummary& WithStatus(RecoveryPlanStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Recovery Plan was created.</p>
   */
  inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::String>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::String>
  RecoveryPlanSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Recovery Plan was last updated.</p>
   */
  inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::String>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::String>
  RecoveryPlanSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanArn;

  Aws::String m_name;

  RecoveryPlanStatus m_status{RecoveryPlanStatus::NOT_SET};

  Aws::String m_createdAt;

  Aws::String m_updatedAt;
  bool m_recoveryPlanArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
