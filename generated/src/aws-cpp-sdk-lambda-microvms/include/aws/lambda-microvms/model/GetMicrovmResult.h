/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/IdlePolicy.h>
#include <aws/lambda-microvms/model/MicrovmState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {
class GetMicrovmResult {
 public:
  AWS_LAMBDAMICROVMS_API GetMicrovmResult() = default;
  AWS_LAMBDAMICROVMS_API GetMicrovmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API GetMicrovmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the MicroVM.</p>
   */
  inline const Aws::String& GetMicrovmId() const { return m_microvmId; }
  template <typename MicrovmIdT = Aws::String>
  void SetMicrovmId(MicrovmIdT&& value) {
    m_microvmIdHasBeenSet = true;
    m_microvmId = std::forward<MicrovmIdT>(value);
  }
  template <typename MicrovmIdT = Aws::String>
  GetMicrovmResult& WithMicrovmId(MicrovmIdT&& value) {
    SetMicrovmId(std::forward<MicrovmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle state of the MicroVM.</p>
   */
  inline MicrovmState GetState() const { return m_state; }
  inline void SetState(MicrovmState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetMicrovmResult& WithState(MicrovmState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTPS endpoint URL for communicating with the MicroVM. Include a valid
   * authentication token in the X-aws-proxy-auth header when sending requests.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  GetMicrovmResult& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the MicroVM image used to run this MicroVM.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  GetMicrovmResult& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image used to run this MicroVM.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  GetMicrovmResult& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM execution role assumed by the MicroVM.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  GetMicrovmResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idle policy configuration of the MicroVM, controlling auto-suspend and
   * auto-resume behavior.</p>
   */
  inline const IdlePolicy& GetIdlePolicy() const { return m_idlePolicy; }
  template <typename IdlePolicyT = IdlePolicy>
  void SetIdlePolicy(IdlePolicyT&& value) {
    m_idlePolicyHasBeenSet = true;
    m_idlePolicy = std::forward<IdlePolicyT>(value);
  }
  template <typename IdlePolicyT = IdlePolicy>
  GetMicrovmResult& WithIdlePolicy(IdlePolicyT&& value) {
    SetIdlePolicy(std::forward<IdlePolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration in seconds that the MicroVM can exist before being
   * terminated by the platform.</p>
   */
  inline int GetMaximumDurationInSeconds() const { return m_maximumDurationInSeconds; }
  inline void SetMaximumDurationInSeconds(int value) {
    m_maximumDurationInSecondsHasBeenSet = true;
    m_maximumDurationInSeconds = value;
  }
  inline GetMicrovmResult& WithMaximumDurationInSeconds(int value) {
    SetMaximumDurationInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM first started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetMicrovmResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM terminated.</p>
   */
  inline const Aws::Utils::DateTime& GetTerminatedAt() const { return m_terminatedAt; }
  template <typename TerminatedAtT = Aws::Utils::DateTime>
  void SetTerminatedAt(TerminatedAtT&& value) {
    m_terminatedAtHasBeenSet = true;
    m_terminatedAt = std::forward<TerminatedAtT>(value);
  }
  template <typename TerminatedAtT = Aws::Utils::DateTime>
  GetMicrovmResult& WithTerminatedAt(TerminatedAtT&& value) {
    SetTerminatedAt(std::forward<TerminatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for why the MicroVM is in the current state.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  GetMicrovmResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of ingress network connectors configured for the MicroVM.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIngressNetworkConnectors() const { return m_ingressNetworkConnectors; }
  template <typename IngressNetworkConnectorsT = Aws::Vector<Aws::String>>
  void SetIngressNetworkConnectors(IngressNetworkConnectorsT&& value) {
    m_ingressNetworkConnectorsHasBeenSet = true;
    m_ingressNetworkConnectors = std::forward<IngressNetworkConnectorsT>(value);
  }
  template <typename IngressNetworkConnectorsT = Aws::Vector<Aws::String>>
  GetMicrovmResult& WithIngressNetworkConnectors(IngressNetworkConnectorsT&& value) {
    SetIngressNetworkConnectors(std::forward<IngressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename IngressNetworkConnectorsT = Aws::String>
  GetMicrovmResult& AddIngressNetworkConnectors(IngressNetworkConnectorsT&& value) {
    m_ingressNetworkConnectorsHasBeenSet = true;
    m_ingressNetworkConnectors.emplace_back(std::forward<IngressNetworkConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of egress network connectors configured for the MicroVM.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEgressNetworkConnectors() const { return m_egressNetworkConnectors; }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  void SetEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors = std::forward<EgressNetworkConnectorsT>(value);
  }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  GetMicrovmResult& WithEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    SetEgressNetworkConnectors(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename EgressNetworkConnectorsT = Aws::String>
  GetMicrovmResult& AddEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors.emplace_back(std::forward<EgressNetworkConnectorsT>(value));
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
  GetMicrovmResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_microvmId;

  MicrovmState m_state{MicrovmState::NOT_SET};

  Aws::String m_endpoint;

  Aws::String m_imageArn;

  Aws::String m_imageVersion;

  Aws::String m_executionRoleArn;

  IdlePolicy m_idlePolicy;

  int m_maximumDurationInSeconds{0};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_terminatedAt{};

  Aws::String m_stateReason;

  Aws::Vector<Aws::String> m_ingressNetworkConnectors;

  Aws::Vector<Aws::String> m_egressNetworkConnectors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_microvmIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_imageArnHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_idlePolicyHasBeenSet = false;
  bool m_maximumDurationInSecondsHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_terminatedAtHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_ingressNetworkConnectorsHasBeenSet = false;
  bool m_egressNetworkConnectorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
