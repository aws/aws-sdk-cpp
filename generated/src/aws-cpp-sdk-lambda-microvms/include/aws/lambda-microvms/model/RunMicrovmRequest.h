/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/IdlePolicy.h>
#include <aws/lambda-microvms/model/Logging.h>

#include <utility>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

/**
 */
class RunMicrovmRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API RunMicrovmRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RunMicrovm"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of ingress network connectors to configure for the MicroVM.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIngressNetworkConnectors() const { return m_ingressNetworkConnectors; }
  inline bool IngressNetworkConnectorsHasBeenSet() const { return m_ingressNetworkConnectorsHasBeenSet; }
  template <typename IngressNetworkConnectorsT = Aws::Vector<Aws::String>>
  void SetIngressNetworkConnectors(IngressNetworkConnectorsT&& value) {
    m_ingressNetworkConnectorsHasBeenSet = true;
    m_ingressNetworkConnectors = std::forward<IngressNetworkConnectorsT>(value);
  }
  template <typename IngressNetworkConnectorsT = Aws::Vector<Aws::String>>
  RunMicrovmRequest& WithIngressNetworkConnectors(IngressNetworkConnectorsT&& value) {
    SetIngressNetworkConnectors(std::forward<IngressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename IngressNetworkConnectorsT = Aws::String>
  RunMicrovmRequest& AddIngressNetworkConnectors(IngressNetworkConnectorsT&& value) {
    m_ingressNetworkConnectorsHasBeenSet = true;
    m_ingressNetworkConnectors.emplace_back(std::forward<IngressNetworkConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of egress network connectors to configure for the MicroVM.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEgressNetworkConnectors() const { return m_egressNetworkConnectors; }
  inline bool EgressNetworkConnectorsHasBeenSet() const { return m_egressNetworkConnectorsHasBeenSet; }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  void SetEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors = std::forward<EgressNetworkConnectorsT>(value);
  }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  RunMicrovmRequest& WithEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    SetEgressNetworkConnectors(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename EgressNetworkConnectorsT = Aws::String>
  RunMicrovmRequest& AddEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors.emplace_back(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier (ARN or ID) of the MicroVM image to run.</p>
   */
  inline const Aws::String& GetImageIdentifier() const { return m_imageIdentifier; }
  inline bool ImageIdentifierHasBeenSet() const { return m_imageIdentifierHasBeenSet; }
  template <typename ImageIdentifierT = Aws::String>
  void SetImageIdentifier(ImageIdentifierT&& value) {
    m_imageIdentifierHasBeenSet = true;
    m_imageIdentifier = std::forward<ImageIdentifierT>(value);
  }
  template <typename ImageIdentifierT = Aws::String>
  RunMicrovmRequest& WithImageIdentifier(ImageIdentifierT&& value) {
    SetImageIdentifier(std::forward<ImageIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image to run.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  RunMicrovmRequest& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role to be assumed by the MicroVM during execution.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  RunMicrovmRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration to control auto-suspend and auto-resume behavior.</p>
   */
  inline const IdlePolicy& GetIdlePolicy() const { return m_idlePolicy; }
  inline bool IdlePolicyHasBeenSet() const { return m_idlePolicyHasBeenSet; }
  template <typename IdlePolicyT = IdlePolicy>
  void SetIdlePolicy(IdlePolicyT&& value) {
    m_idlePolicyHasBeenSet = true;
    m_idlePolicy = std::forward<IdlePolicyT>(value);
  }
  template <typename IdlePolicyT = IdlePolicy>
  RunMicrovmRequest& WithIdlePolicy(IdlePolicyT&& value) {
    SetIdlePolicy(std::forward<IdlePolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration for this MicroVM instance. Specify {"cloudWatch":
   * {"logGroup": "..."}} to stream application logs to a custom CloudWatch log
   * group, or {"disabled": {}} to turn off logging.</p>
   */
  inline const Logging& GetLogging() const { return m_logging; }
  inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
  template <typename LoggingT = Logging>
  void SetLogging(LoggingT&& value) {
    m_loggingHasBeenSet = true;
    m_logging = std::forward<LoggingT>(value);
  }
  template <typename LoggingT = Logging>
  RunMicrovmRequest& WithLogging(LoggingT&& value) {
    SetLogging(std::forward<LoggingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-MicroVM initialization data delivered as the request body of the /run
   * lifecycle hook. Use to pass tenant-specific configuration such as session IDs or
   * secret references. Maximum: 16,384 bytes.</p>
   */
  inline const Aws::String& GetRunHookPayload() const { return m_runHookPayload; }
  inline bool RunHookPayloadHasBeenSet() const { return m_runHookPayloadHasBeenSet; }
  template <typename RunHookPayloadT = Aws::String>
  void SetRunHookPayload(RunHookPayloadT&& value) {
    m_runHookPayloadHasBeenSet = true;
    m_runHookPayload = std::forward<RunHookPayloadT>(value);
  }
  template <typename RunHookPayloadT = Aws::String>
  RunMicrovmRequest& WithRunHookPayload(RunHookPayloadT&& value) {
    SetRunHookPayload(std::forward<RunHookPayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration in seconds that the MicroVM can exist before being
   * terminated by the platform. Valid range: 1–28,800 (8 hours).</p>
   */
  inline int GetMaximumDurationInSeconds() const { return m_maximumDurationInSeconds; }
  inline bool MaximumDurationInSecondsHasBeenSet() const { return m_maximumDurationInSecondsHasBeenSet; }
  inline void SetMaximumDurationInSeconds(int value) {
    m_maximumDurationInSecondsHasBeenSet = true;
    m_maximumDurationInSeconds = value;
  }
  inline RunMicrovmRequest& WithMaximumDurationInSeconds(int value) {
    SetMaximumDurationInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier you provide to ensure the idempotency of
   * the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  RunMicrovmRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_ingressNetworkConnectors;

  Aws::Vector<Aws::String> m_egressNetworkConnectors;

  Aws::String m_imageIdentifier;

  Aws::String m_imageVersion;

  Aws::String m_executionRoleArn;

  IdlePolicy m_idlePolicy;

  Logging m_logging;

  Aws::String m_runHookPayload;

  int m_maximumDurationInSeconds{0};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_ingressNetworkConnectorsHasBeenSet = false;
  bool m_egressNetworkConnectorsHasBeenSet = false;
  bool m_imageIdentifierHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_idlePolicyHasBeenSet = false;
  bool m_loggingHasBeenSet = false;
  bool m_runHookPayloadHasBeenSet = false;
  bool m_maximumDurationInSecondsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
