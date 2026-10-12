/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/AuthType.h>
#include <aws/lambda-web/model/AutoDeploymentMode.h>
#include <aws/lambda-web/model/EndpointState.h>
#include <aws/lambda-web/model/EndpointType.h>
#include <aws/lambda-web/model/EndpointUpdateStatus.h>
#include <aws/lambda-web/model/RegionalEndpoint.h>
#include <aws/lambda-web/model/RevisionWeight.h>
#include <aws/lambda-web/model/ScalingConfig.h>
#include <aws/lambda-web/model/ThrottleConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {
/**
 * <p>Contains details about the created endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionEndpointResponse">AWS
 * API Reference</a></p>
 */
class CreateWebFunctionEndpointResult {
 public:
  AWS_LAMBDAWEB_API CreateWebFunctionEndpointResult() = default;
  AWS_LAMBDAWEB_API CreateWebFunctionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAWEB_API CreateWebFunctionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web function.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  CreateWebFunctionEndpointResult& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
   */
  inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
  template <typename EndpointArnT = Aws::String>
  void SetEndpointArn(EndpointArnT&& value) {
    m_endpointArnHasBeenSet = true;
    m_endpointArn = std::forward<EndpointArnT>(value);
  }
  template <typename EndpointArnT = Aws::String>
  CreateWebFunctionEndpointResult& WithEndpointArn(EndpointArnT&& value) {
    SetEndpointArn(std::forward<EndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the endpoint.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  CreateWebFunctionEndpointResult& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateWebFunctionEndpointResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline EndpointType GetEndpointType() const { return m_endpointType; }
  inline void SetEndpointType(EndpointType value) {
    m_endpointTypeHasBeenSet = true;
    m_endpointType = value;
  }
  inline CreateWebFunctionEndpointResult& WithEndpointType(EndpointType value) {
    SetEndpointType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name assigned to the endpoint.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  CreateWebFunctionEndpointResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline AuthType GetAuthType() const { return m_authType; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline CreateWebFunctionEndpointResult& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{

  inline AutoDeploymentMode GetAutoDeploymentMode() const { return m_autoDeploymentMode; }
  inline void SetAutoDeploymentMode(AutoDeploymentMode value) {
    m_autoDeploymentModeHasBeenSet = true;
    m_autoDeploymentMode = value;
  }
  inline CreateWebFunctionEndpointResult& WithAutoDeploymentMode(AutoDeploymentMode value) {
    SetAutoDeploymentMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The traffic distribution across revisions for the endpoint. Each entry maps a
   * revision to a weight from 1 to 100.</p>
   */
  inline const Aws::Vector<RevisionWeight>& GetRevisionWeights() const { return m_revisionWeights; }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  void SetRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights = std::forward<RevisionWeightsT>(value);
  }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  CreateWebFunctionEndpointResult& WithRevisionWeights(RevisionWeightsT&& value) {
    SetRevisionWeights(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  template <typename RevisionWeightsT = RevisionWeight>
  CreateWebFunctionEndpointResult& AddRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights.emplace_back(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Regions configured for the endpoint.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  CreateWebFunctionEndpointResult& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  CreateWebFunctionEndpointResult& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
  template <typename ScalingConfigT = ScalingConfig>
  void SetScalingConfig(ScalingConfigT&& value) {
    m_scalingConfigHasBeenSet = true;
    m_scalingConfig = std::forward<ScalingConfigT>(value);
  }
  template <typename ScalingConfigT = ScalingConfig>
  CreateWebFunctionEndpointResult& WithScalingConfig(ScalingConfigT&& value) {
    SetScalingConfig(std::forward<ScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ThrottleConfig& GetThrottleConfig() const { return m_throttleConfig; }
  template <typename ThrottleConfigT = ThrottleConfig>
  void SetThrottleConfig(ThrottleConfigT&& value) {
    m_throttleConfigHasBeenSet = true;
    m_throttleConfig = std::forward<ThrottleConfigT>(value);
  }
  template <typename ThrottleConfigT = ThrottleConfig>
  CreateWebFunctionEndpointResult& WithThrottleConfig(ThrottleConfigT&& value) {
    SetThrottleConfig(std::forward<ThrottleConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the endpoint.</p>
   */
  inline EndpointState GetState() const { return m_state; }
  inline void SetState(EndpointState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateWebFunctionEndpointResult& WithState(EndpointState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the endpoint.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  CreateWebFunctionEndpointResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline EndpointUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
  inline void SetUpdateStatus(EndpointUpdateStatus value) {
    m_updateStatusHasBeenSet = true;
    m_updateStatus = value;
  }
  inline CreateWebFunctionEndpointResult& WithUpdateStatus(EndpointUpdateStatus value) {
    SetUpdateStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the endpoint's most recent update status.</p>
   */
  inline const Aws::String& GetUpdateStatusReason() const { return m_updateStatusReason; }
  template <typename UpdateStatusReasonT = Aws::String>
  void SetUpdateStatusReason(UpdateStatusReasonT&& value) {
    m_updateStatusReasonHasBeenSet = true;
    m_updateStatusReason = std::forward<UpdateStatusReasonT>(value);
  }
  template <typename UpdateStatusReasonT = Aws::String>
  CreateWebFunctionEndpointResult& WithUpdateStatusReason(UpdateStatusReasonT&& value) {
    SetUpdateStatusReason(std::forward<UpdateStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of regional endpoint configurations.</p>
   */
  inline const Aws::Map<Aws::String, RegionalEndpoint>& GetRegionalEndpoints() const { return m_regionalEndpoints; }
  template <typename RegionalEndpointsT = Aws::Map<Aws::String, RegionalEndpoint>>
  void SetRegionalEndpoints(RegionalEndpointsT&& value) {
    m_regionalEndpointsHasBeenSet = true;
    m_regionalEndpoints = std::forward<RegionalEndpointsT>(value);
  }
  template <typename RegionalEndpointsT = Aws::Map<Aws::String, RegionalEndpoint>>
  CreateWebFunctionEndpointResult& WithRegionalEndpoints(RegionalEndpointsT&& value) {
    SetRegionalEndpoints(std::forward<RegionalEndpointsT>(value));
    return *this;
  }
  template <typename RegionalEndpointsKeyT = Aws::String, typename RegionalEndpointsValueT = RegionalEndpoint>
  CreateWebFunctionEndpointResult& AddRegionalEndpoints(RegionalEndpointsKeyT&& key, RegionalEndpointsValueT&& value) {
    m_regionalEndpointsHasBeenSet = true;
    m_regionalEndpoints.emplace(std::forward<RegionalEndpointsKeyT>(key), std::forward<RegionalEndpointsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateWebFunctionEndpointResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateWebFunctionEndpointResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateWebFunctionEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_functionArn;

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

  Aws::Map<Aws::String, RegionalEndpoint> m_regionalEndpoints;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_functionArnHasBeenSet = false;
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
  bool m_regionalEndpointsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
