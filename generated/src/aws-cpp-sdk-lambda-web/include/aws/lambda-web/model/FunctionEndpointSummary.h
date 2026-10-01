/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/AuthType.h>
#include <aws/lambda-web/model/AutoDeploymentMode.h>
#include <aws/lambda-web/model/EndpointState.h>
#include <aws/lambda-web/model/EndpointType.h>
#include <aws/lambda-web/model/EndpointUpdateStatus.h>
#include <aws/lambda-web/model/RevisionWeight.h>
#include <aws/lambda-web/model/ScalingConfig.h>
#include <aws/lambda-web/model/ThrottleConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>A summary of a web function endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/FunctionEndpointSummary">AWS
 * API Reference</a></p>
 */
class FunctionEndpointSummary {
 public:
  AWS_LAMBDAWEB_API FunctionEndpointSummary() = default;
  AWS_LAMBDAWEB_API FunctionEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API FunctionEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
   */
  inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
  inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
  template <typename EndpointArnT = Aws::String>
  void SetEndpointArn(EndpointArnT&& value) {
    m_endpointArnHasBeenSet = true;
    m_endpointArn = std::forward<EndpointArnT>(value);
  }
  template <typename EndpointArnT = Aws::String>
  FunctionEndpointSummary& WithEndpointArn(EndpointArnT&& value) {
    SetEndpointArn(std::forward<EndpointArnT>(value));
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
  FunctionEndpointSummary& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FunctionEndpointSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the endpoint.</p>
   */
  inline EndpointType GetEndpointType() const { return m_endpointType; }
  inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
  inline void SetEndpointType(EndpointType value) {
    m_endpointTypeHasBeenSet = true;
    m_endpointType = value;
  }
  inline FunctionEndpointSummary& WithEndpointType(EndpointType value) {
    SetEndpointType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name of the endpoint.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  FunctionEndpointSummary& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization type for the endpoint.</p>
   */
  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline FunctionEndpointSummary& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-deployment mode for the endpoint.</p>
   */
  inline AutoDeploymentMode GetAutoDeploymentMode() const { return m_autoDeploymentMode; }
  inline bool AutoDeploymentModeHasBeenSet() const { return m_autoDeploymentModeHasBeenSet; }
  inline void SetAutoDeploymentMode(AutoDeploymentMode value) {
    m_autoDeploymentModeHasBeenSet = true;
    m_autoDeploymentMode = value;
  }
  inline FunctionEndpointSummary& WithAutoDeploymentMode(AutoDeploymentMode value) {
    SetAutoDeploymentMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision weights for the endpoint.</p>
   */
  inline const Aws::Vector<RevisionWeight>& GetRevisionWeights() const { return m_revisionWeights; }
  inline bool RevisionWeightsHasBeenSet() const { return m_revisionWeightsHasBeenSet; }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  void SetRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights = std::forward<RevisionWeightsT>(value);
  }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  FunctionEndpointSummary& WithRevisionWeights(RevisionWeightsT&& value) {
    SetRevisionWeights(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  template <typename RevisionWeightsT = RevisionWeight>
  FunctionEndpointSummary& AddRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights.emplace_back(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Regions for the endpoint.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  FunctionEndpointSummary& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  FunctionEndpointSummary& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration for the endpoint. This field is absent if the
   * endpoint has no scaling configuration.</p>
   */
  inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
  inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
  template <typename ScalingConfigT = ScalingConfig>
  void SetScalingConfig(ScalingConfigT&& value) {
    m_scalingConfigHasBeenSet = true;
    m_scalingConfig = std::forward<ScalingConfigT>(value);
  }
  template <typename ScalingConfigT = ScalingConfig>
  FunctionEndpointSummary& WithScalingConfig(ScalingConfigT&& value) {
    SetScalingConfig(std::forward<ScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throttling configuration for the endpoint. This field is absent if the
   * endpoint has no throttling configuration.</p>
   */
  inline const ThrottleConfig& GetThrottleConfig() const { return m_throttleConfig; }
  inline bool ThrottleConfigHasBeenSet() const { return m_throttleConfigHasBeenSet; }
  template <typename ThrottleConfigT = ThrottleConfig>
  void SetThrottleConfig(ThrottleConfigT&& value) {
    m_throttleConfigHasBeenSet = true;
    m_throttleConfig = std::forward<ThrottleConfigT>(value);
  }
  template <typename ThrottleConfigT = ThrottleConfig>
  FunctionEndpointSummary& WithThrottleConfig(ThrottleConfigT&& value) {
    SetThrottleConfig(std::forward<ThrottleConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the endpoint.</p>
   */
  inline EndpointState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(EndpointState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline FunctionEndpointSummary& WithState(EndpointState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the endpoint.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  FunctionEndpointSummary& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the most recent update to the endpoint.</p>
   */
  inline EndpointUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
  inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
  inline void SetUpdateStatus(EndpointUpdateStatus value) {
    m_updateStatusHasBeenSet = true;
    m_updateStatus = value;
  }
  inline FunctionEndpointSummary& WithUpdateStatus(EndpointUpdateStatus value) {
    SetUpdateStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current update status of the endpoint.</p>
   */
  inline const Aws::String& GetUpdateStatusReason() const { return m_updateStatusReason; }
  inline bool UpdateStatusReasonHasBeenSet() const { return m_updateStatusReasonHasBeenSet; }
  template <typename UpdateStatusReasonT = Aws::String>
  void SetUpdateStatusReason(UpdateStatusReasonT&& value) {
    m_updateStatusReasonHasBeenSet = true;
    m_updateStatusReason = std::forward<UpdateStatusReasonT>(value);
  }
  template <typename UpdateStatusReasonT = Aws::String>
  FunctionEndpointSummary& WithUpdateStatusReason(UpdateStatusReasonT&& value) {
    SetUpdateStatusReason(std::forward<UpdateStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  FunctionEndpointSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  FunctionEndpointSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpointArn;

  Aws::String m_endpointName;

  Aws::String m_description;

  EndpointType m_endpointType{EndpointType::NOT_SET};

  Aws::String m_domainName;

  AuthType m_authType{AuthType::NOT_SET};

  AutoDeploymentMode m_autoDeploymentMode{AutoDeploymentMode::NOT_SET};

  Aws::Vector<RevisionWeight> m_revisionWeights;

  Aws::Vector<Aws::String> m_regions;

  ScalingConfig m_scalingConfig;

  ThrottleConfig m_throttleConfig;

  EndpointState m_state{EndpointState::NOT_SET};

  Aws::String m_stateReason;

  EndpointUpdateStatus m_updateStatus{EndpointUpdateStatus::NOT_SET};

  Aws::String m_updateStatusReason;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_endpointArnHasBeenSet = false;
  bool m_endpointNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_endpointTypeHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
  bool m_autoDeploymentModeHasBeenSet = false;
  bool m_revisionWeightsHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_scalingConfigHasBeenSet = false;
  bool m_throttleConfigHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_updateStatusHasBeenSet = false;
  bool m_updateStatusReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
