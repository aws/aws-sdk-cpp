/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Summary information about a single version of a harness.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessVersionSummary">AWS
 * API Reference</a></p>
 */
class HarnessVersionSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessVersionSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the harness.</p>
   */
  inline const Aws::String& GetHarnessId() const { return m_harnessId; }
  inline bool HarnessIdHasBeenSet() const { return m_harnessIdHasBeenSet; }
  template <typename HarnessIdT = Aws::String>
  void SetHarnessId(HarnessIdT&& value) {
    m_harnessIdHasBeenSet = true;
    m_harnessId = std::forward<HarnessIdT>(value);
  }
  template <typename HarnessIdT = Aws::String>
  HarnessVersionSummary& WithHarnessId(HarnessIdT&& value) {
    SetHarnessId(std::forward<HarnessIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the harness.</p>
   */
  inline const Aws::String& GetHarnessName() const { return m_harnessName; }
  inline bool HarnessNameHasBeenSet() const { return m_harnessNameHasBeenSet; }
  template <typename HarnessNameT = Aws::String>
  void SetHarnessName(HarnessNameT&& value) {
    m_harnessNameHasBeenSet = true;
    m_harnessName = std::forward<HarnessNameT>(value);
  }
  template <typename HarnessNameT = Aws::String>
  HarnessVersionSummary& WithHarnessName(HarnessNameT&& value) {
    SetHarnessName(std::forward<HarnessNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the harness.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  HarnessVersionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the harness that this summary describes.</p>
   */
  inline const Aws::String& GetHarnessVersion() const { return m_harnessVersion; }
  inline bool HarnessVersionHasBeenSet() const { return m_harnessVersionHasBeenSet; }
  template <typename HarnessVersionT = Aws::String>
  void SetHarnessVersion(HarnessVersionT&& value) {
    m_harnessVersionHasBeenSet = true;
    m_harnessVersion = std::forward<HarnessVersionT>(value);
  }
  template <typename HarnessVersionT = Aws::String>
  HarnessVersionSummary& WithHarnessVersion(HarnessVersionT&& value) {
    SetHarnessVersion(std::forward<HarnessVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of this harness version.</p>
   */
  inline HarnessStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(HarnessStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline HarnessVersionSummary& WithStatus(HarnessStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this harness version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  HarnessVersionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this harness version was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  HarnessVersionSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reason why the create or update operation for this harness version
   * failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  HarnessVersionSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessId;

  Aws::String m_harnessName;

  Aws::String m_arn;

  Aws::String m_harnessVersion;

  HarnessStatus m_status{HarnessStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_failureReason;
  bool m_harnessIdHasBeenSet = false;
  bool m_harnessNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_harnessVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
