/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerType.h>
#include <aws/bedrock-agentcore-control/model/ExceptionLevel.h>
#include <aws/bedrock-agentcore-control/model/GatewayInterceptorConfiguration.h>
#include <aws/bedrock-agentcore-control/model/GatewayPolicyEngineConfiguration.h>
#include <aws/bedrock-agentcore-control/model/GatewayProtocolConfiguration.h>
#include <aws/bedrock-agentcore-control/model/GatewayProtocolType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateGatewayRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateGateway"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the gateway. The name must be unique within your account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateGatewayRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the gateway.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateGatewayRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateGatewayRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
   * the gateway to access Amazon Web Services services.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateGatewayRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol type for the gateway.</p>
   */
  inline GatewayProtocolType GetProtocolType() const { return m_protocolType; }
  inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
  inline void SetProtocolType(GatewayProtocolType value) {
    m_protocolTypeHasBeenSet = true;
    m_protocolType = value;
  }
  inline CreateGatewayRequest& WithProtocolType(GatewayProtocolType value) {
    SetProtocolType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the protocol specified in the
   * <code>protocolType</code> parameter.</p>
   */
  inline const GatewayProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = GatewayProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = GatewayProtocolConfiguration>
  CreateGatewayRequest& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authorizer to use for the gateway.</p> <ul> <li> <p>
   * <code>CUSTOM_JWT</code> - Authorize with a bearer token.</p> </li> <li> <p>
   * <code>AWS_IAM</code> - Authorize with your Amazon Web Services IAM
   * credentials.</p> </li> <li> <p> <code>NONE</code> - No authorization</p> </li>
   * </ul>
   */
  inline AuthorizerType GetAuthorizerType() const { return m_authorizerType; }
  inline bool AuthorizerTypeHasBeenSet() const { return m_authorizerTypeHasBeenSet; }
  inline void SetAuthorizerType(AuthorizerType value) {
    m_authorizerTypeHasBeenSet = true;
    m_authorizerType = value;
  }
  inline CreateGatewayRequest& WithAuthorizerType(AuthorizerType value) {
    SetAuthorizerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorizer configuration for the gateway. Required if
   * <code>authorizerType</code> is <code>CUSTOM_JWT</code>.</p>
   */
  inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  CreateGatewayRequest& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt data associated
   * with the gateway.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateGatewayRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of configuration settings for a gateway interceptor. Gateway
   * interceptors allow custom code to be invoked during gateway invocations.</p>
   */
  inline const Aws::Vector<GatewayInterceptorConfiguration>& GetInterceptorConfigurations() const { return m_interceptorConfigurations; }
  inline bool InterceptorConfigurationsHasBeenSet() const { return m_interceptorConfigurationsHasBeenSet; }
  template <typename InterceptorConfigurationsT = Aws::Vector<GatewayInterceptorConfiguration>>
  void SetInterceptorConfigurations(InterceptorConfigurationsT&& value) {
    m_interceptorConfigurationsHasBeenSet = true;
    m_interceptorConfigurations = std::forward<InterceptorConfigurationsT>(value);
  }
  template <typename InterceptorConfigurationsT = Aws::Vector<GatewayInterceptorConfiguration>>
  CreateGatewayRequest& WithInterceptorConfigurations(InterceptorConfigurationsT&& value) {
    SetInterceptorConfigurations(std::forward<InterceptorConfigurationsT>(value));
    return *this;
  }
  template <typename InterceptorConfigurationsT = GatewayInterceptorConfiguration>
  CreateGatewayRequest& AddInterceptorConfigurations(InterceptorConfigurationsT&& value) {
    m_interceptorConfigurationsHasBeenSet = true;
    m_interceptorConfigurations.emplace_back(std::forward<InterceptorConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy engine configuration for the gateway. A policy engine is a
   * collection of policies that evaluates and authorizes agent tool calls. When
   * associated with a gateway, the policy engine intercepts all agent requests and
   * determines whether to allow or deny each action based on the defined
   * policies.</p>
   */
  inline const GatewayPolicyEngineConfiguration& GetPolicyEngineConfiguration() const { return m_policyEngineConfiguration; }
  inline bool PolicyEngineConfigurationHasBeenSet() const { return m_policyEngineConfigurationHasBeenSet; }
  template <typename PolicyEngineConfigurationT = GatewayPolicyEngineConfiguration>
  void SetPolicyEngineConfiguration(PolicyEngineConfigurationT&& value) {
    m_policyEngineConfigurationHasBeenSet = true;
    m_policyEngineConfiguration = std::forward<PolicyEngineConfigurationT>(value);
  }
  template <typename PolicyEngineConfigurationT = GatewayPolicyEngineConfiguration>
  CreateGatewayRequest& WithPolicyEngineConfiguration(PolicyEngineConfigurationT&& value) {
    SetPolicyEngineConfiguration(std::forward<PolicyEngineConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The level of detail in error messages returned when invoking the gateway.</p>
   * <ul> <li> <p>If the value is <code>DEBUG</code>, granular exception messages are
   * returned to help a user debug the gateway.</p> </li> <li> <p>If the value is
   * omitted, a generic error message is returned to the end user.</p> </li> </ul>
   */
  inline ExceptionLevel GetExceptionLevel() const { return m_exceptionLevel; }
  inline bool ExceptionLevelHasBeenSet() const { return m_exceptionLevelHasBeenSet; }
  inline void SetExceptionLevel(ExceptionLevel value) {
    m_exceptionLevelHasBeenSet = true;
    m_exceptionLevel = value;
  }
  inline CreateGatewayRequest& WithExceptionLevel(ExceptionLevel value) {
    SetExceptionLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs to associate with the gateway as metadata tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateGatewayRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateGatewayRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::String m_roleArn;
  bool m_roleArnHasBeenSet = false;

  GatewayProtocolType m_protocolType{GatewayProtocolType::NOT_SET};
  bool m_protocolTypeHasBeenSet = false;

  GatewayProtocolConfiguration m_protocolConfiguration;
  bool m_protocolConfigurationHasBeenSet = false;

  AuthorizerType m_authorizerType{AuthorizerType::NOT_SET};
  bool m_authorizerTypeHasBeenSet = false;

  AuthorizerConfiguration m_authorizerConfiguration;
  bool m_authorizerConfigurationHasBeenSet = false;

  Aws::String m_kmsKeyArn;
  bool m_kmsKeyArnHasBeenSet = false;

  Aws::Vector<GatewayInterceptorConfiguration> m_interceptorConfigurations;
  bool m_interceptorConfigurationsHasBeenSet = false;

  GatewayPolicyEngineConfiguration m_policyEngineConfiguration;
  bool m_policyEngineConfigurationHasBeenSet = false;

  ExceptionLevel m_exceptionLevel{ExceptionLevel::NOT_SET};
  bool m_exceptionLevelHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
