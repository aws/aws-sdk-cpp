/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/GatewayProtocolType.h>
#include <aws/bedrock-agentcore-control/model/GatewayProtocolConfiguration.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerType.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ExceptionLevel.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class UpdateGatewayRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGateway"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the gateway to update.</p>
     */
    inline const Aws::String& GetGatewayIdentifier() const { return m_gatewayIdentifier; }
    inline bool GatewayIdentifierHasBeenSet() const { return m_gatewayIdentifierHasBeenSet; }
    template<typename GatewayIdentifierT = Aws::String>
    void SetGatewayIdentifier(GatewayIdentifierT&& value) { m_gatewayIdentifierHasBeenSet = true; m_gatewayIdentifier = std::forward<GatewayIdentifierT>(value); }
    template<typename GatewayIdentifierT = Aws::String>
    UpdateGatewayRequest& WithGatewayIdentifier(GatewayIdentifierT&& value) { SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway. This name must be the same as the one when the
     * gateway was created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateGatewayRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for the gateway.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateGatewayRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated IAM role ARN that provides permissions for the gateway.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateGatewayRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated protocol type for the gateway.</p>
     */
    inline GatewayProtocolType GetProtocolType() const { return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(GatewayProtocolType value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline UpdateGatewayRequest& WithProtocolType(GatewayProtocolType value) { SetProtocolType(value); return *this;}
    ///@}

    ///@{
    
    inline const GatewayProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
    inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
    template<typename ProtocolConfigurationT = GatewayProtocolConfiguration>
    void SetProtocolConfiguration(ProtocolConfigurationT&& value) { m_protocolConfigurationHasBeenSet = true; m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value); }
    template<typename ProtocolConfigurationT = GatewayProtocolConfiguration>
    UpdateGatewayRequest& WithProtocolConfiguration(ProtocolConfigurationT&& value) { SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated authorizer type for the gateway.</p>
     */
    inline AuthorizerType GetAuthorizerType() const { return m_authorizerType; }
    inline bool AuthorizerTypeHasBeenSet() const { return m_authorizerTypeHasBeenSet; }
    inline void SetAuthorizerType(AuthorizerType value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = value; }
    inline UpdateGatewayRequest& WithAuthorizerType(AuthorizerType value) { SetAuthorizerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated authorizer configuration for the gateway.</p>
     */
    inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
    inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) { m_authorizerConfigurationHasBeenSet = true; m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value); }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    UpdateGatewayRequest& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) { SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated ARN of the KMS key used to encrypt the gateway.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    UpdateGatewayRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
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
    inline void SetExceptionLevel(ExceptionLevel value) { m_exceptionLevelHasBeenSet = true; m_exceptionLevel = value; }
    inline UpdateGatewayRequest& WithExceptionLevel(ExceptionLevel value) { SetExceptionLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayIdentifier;
    bool m_gatewayIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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

    ExceptionLevel m_exceptionLevel{ExceptionLevel::NOT_SET};
    bool m_exceptionLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
