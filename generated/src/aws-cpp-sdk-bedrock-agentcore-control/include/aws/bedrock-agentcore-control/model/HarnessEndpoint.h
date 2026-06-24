/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessEndpointStatus.h>
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
 * <p>Representation of a harness endpoint. An endpoint is a named, stable
 * reference to a specific version of a harness that callers invoke, allowing the
 * underlying version to be updated without changing how the agent is
 * invoked.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessEndpoint">AWS
 * API Reference</a></p>
 */
class HarnessEndpoint {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEndpoint() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the harness that the endpoint belongs to.</p>
   */
  inline const Aws::String& GetHarnessId() const { return m_harnessId; }
  inline bool HarnessIdHasBeenSet() const { return m_harnessIdHasBeenSet; }
  template <typename HarnessIdT = Aws::String>
  void SetHarnessId(HarnessIdT&& value) {
    m_harnessIdHasBeenSet = true;
    m_harnessId = std::forward<HarnessIdT>(value);
  }
  template <typename HarnessIdT = Aws::String>
  HarnessEndpoint& WithHarnessId(HarnessIdT&& value) {
    SetHarnessId(std::forward<HarnessIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the harness that the endpoint belongs to.</p>
   */
  inline const Aws::String& GetHarnessName() const { return m_harnessName; }
  inline bool HarnessNameHasBeenSet() const { return m_harnessNameHasBeenSet; }
  template <typename HarnessNameT = Aws::String>
  void SetHarnessName(HarnessNameT&& value) {
    m_harnessNameHasBeenSet = true;
    m_harnessName = std::forward<HarnessNameT>(value);
  }
  template <typename HarnessNameT = Aws::String>
  HarnessEndpoint& WithHarnessName(HarnessNameT&& value) {
    SetHarnessName(std::forward<HarnessNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the endpoint.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  HarnessEndpoint& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the endpoint.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  HarnessEndpoint& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the endpoint.</p>
   */
  inline HarnessEndpointStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(HarnessEndpointStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline HarnessEndpoint& WithStatus(HarnessEndpointStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  HarnessEndpoint& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  HarnessEndpoint& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The harness version that the endpoint is currently serving.</p>
   */
  inline const Aws::String& GetLiveVersion() const { return m_liveVersion; }
  inline bool LiveVersionHasBeenSet() const { return m_liveVersionHasBeenSet; }
  template <typename LiveVersionT = Aws::String>
  void SetLiveVersion(LiveVersionT&& value) {
    m_liveVersionHasBeenSet = true;
    m_liveVersion = std::forward<LiveVersionT>(value);
  }
  template <typename LiveVersionT = Aws::String>
  HarnessEndpoint& WithLiveVersion(LiveVersionT&& value) {
    SetLiveVersion(std::forward<LiveVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The harness version that the endpoint points to. While an update is in
   * progress, this can differ from the live version until the endpoint finishes
   * transitioning.</p>
   */
  inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
  inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
  template <typename TargetVersionT = Aws::String>
  void SetTargetVersion(TargetVersionT&& value) {
    m_targetVersionHasBeenSet = true;
    m_targetVersion = std::forward<TargetVersionT>(value);
  }
  template <typename TargetVersionT = Aws::String>
  HarnessEndpoint& WithTargetVersion(TargetVersionT&& value) {
    SetTargetVersion(std::forward<TargetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  HarnessEndpoint& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the endpoint's last create or update operation failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  HarnessEndpoint& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessId;

  Aws::String m_harnessName;

  Aws::String m_endpointName;

  Aws::String m_arn;

  HarnessEndpointStatus m_status{HarnessEndpointStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_liveVersion;

  Aws::String m_targetVersion;

  Aws::String m_description;

  Aws::String m_failureReason;
  bool m_harnessIdHasBeenSet = false;
  bool m_harnessNameHasBeenSet = false;
  bool m_endpointNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_liveVersionHasBeenSet = false;
  bool m_targetVersionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
