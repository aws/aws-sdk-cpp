/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/AuthType.h>
#include <aws/lambda-web/model/EndpointState.h>
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
 * <p>Represents the endpoint configuration and state in a specific
 * Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/RegionalEndpoint">AWS
 * API Reference</a></p>
 */
class RegionalEndpoint {
 public:
  AWS_LAMBDAWEB_API RegionalEndpoint() = default;
  AWS_LAMBDAWEB_API RegionalEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API RegionalEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain name of the regional endpoint.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  RegionalEndpoint& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization type for the regional endpoint.</p>
   */
  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline RegionalEndpoint& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision weights for the regional endpoint.</p>
   */
  inline const Aws::Vector<RevisionWeight>& GetRevisionWeights() const { return m_revisionWeights; }
  inline bool RevisionWeightsHasBeenSet() const { return m_revisionWeightsHasBeenSet; }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  void SetRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights = std::forward<RevisionWeightsT>(value);
  }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  RegionalEndpoint& WithRevisionWeights(RevisionWeightsT&& value) {
    SetRevisionWeights(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  template <typename RevisionWeightsT = RevisionWeight>
  RegionalEndpoint& AddRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights.emplace_back(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration for the regional endpoint. This field is absent if
   * the endpoint has no scaling configuration.</p>
   */
  inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
  inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
  template <typename ScalingConfigT = ScalingConfig>
  void SetScalingConfig(ScalingConfigT&& value) {
    m_scalingConfigHasBeenSet = true;
    m_scalingConfig = std::forward<ScalingConfigT>(value);
  }
  template <typename ScalingConfigT = ScalingConfig>
  RegionalEndpoint& WithScalingConfig(ScalingConfigT&& value) {
    SetScalingConfig(std::forward<ScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throttling configuration for the regional endpoint. This field is absent
   * if the endpoint has no throttling configuration.</p>
   */
  inline const ThrottleConfig& GetThrottleConfig() const { return m_throttleConfig; }
  inline bool ThrottleConfigHasBeenSet() const { return m_throttleConfigHasBeenSet; }
  template <typename ThrottleConfigT = ThrottleConfig>
  void SetThrottleConfig(ThrottleConfigT&& value) {
    m_throttleConfigHasBeenSet = true;
    m_throttleConfig = std::forward<ThrottleConfigT>(value);
  }
  template <typename ThrottleConfigT = ThrottleConfig>
  RegionalEndpoint& WithThrottleConfig(ThrottleConfigT&& value) {
    SetThrottleConfig(std::forward<ThrottleConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the regional endpoint.</p>
   */
  inline EndpointState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(EndpointState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RegionalEndpoint& WithState(EndpointState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the regional endpoint.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  RegionalEndpoint& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the most recent update to the regional endpoint.</p>
   */
  inline EndpointUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
  inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
  inline void SetUpdateStatus(EndpointUpdateStatus value) {
    m_updateStatusHasBeenSet = true;
    m_updateStatus = value;
  }
  inline RegionalEndpoint& WithUpdateStatus(EndpointUpdateStatus value) {
    SetUpdateStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current update status of the regional endpoint.</p>
   */
  inline const Aws::String& GetUpdateStatusReason() const { return m_updateStatusReason; }
  inline bool UpdateStatusReasonHasBeenSet() const { return m_updateStatusReasonHasBeenSet; }
  template <typename UpdateStatusReasonT = Aws::String>
  void SetUpdateStatusReason(UpdateStatusReasonT&& value) {
    m_updateStatusReasonHasBeenSet = true;
    m_updateStatusReason = std::forward<UpdateStatusReasonT>(value);
  }
  template <typename UpdateStatusReasonT = Aws::String>
  RegionalEndpoint& WithUpdateStatusReason(UpdateStatusReasonT&& value) {
    SetUpdateStatusReason(std::forward<UpdateStatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  AuthType m_authType{AuthType::NOT_SET};

  Aws::Vector<RevisionWeight> m_revisionWeights;

  ScalingConfig m_scalingConfig;

  ThrottleConfig m_throttleConfig;

  EndpointState m_state{EndpointState::NOT_SET};

  Aws::String m_stateReason;

  EndpointUpdateStatus m_updateStatus{EndpointUpdateStatus::NOT_SET};

  Aws::String m_updateStatusReason;
  bool m_domainNameHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
  bool m_revisionWeightsHasBeenSet = false;
  bool m_scalingConfigHasBeenSet = false;
  bool m_throttleConfigHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_updateStatusHasBeenSet = false;
  bool m_updateStatusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
