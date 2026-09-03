/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalIdpConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateConsentPortalRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateConsentPortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConsentPortal"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the consent portal. You can specify either the consent
   * portal ID or its Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetConsentPortalIdentifier() const { return m_consentPortalIdentifier; }
  inline bool ConsentPortalIdentifierHasBeenSet() const { return m_consentPortalIdentifierHasBeenSet; }
  template <typename ConsentPortalIdentifierT = Aws::String>
  void SetConsentPortalIdentifier(ConsentPortalIdentifierT&& value) {
    m_consentPortalIdentifierHasBeenSet = true;
    m_consentPortalIdentifier = std::forward<ConsentPortalIdentifierT>(value);
  }
  template <typename ConsentPortalIdentifierT = Aws::String>
  UpdateConsentPortalRequest& WithConsentPortalIdentifier(ConsentPortalIdentifierT&& value) {
    SetConsentPortalIdentifier(std::forward<ConsentPortalIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the consent portal
   * assumes to access the resources defined in its sources.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateConsentPortalRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration that the consent portal uses to
   * authenticate end users.</p>
   */
  inline const ConsentPortalIdpConfig& GetIdpConfig() const { return m_idpConfig; }
  inline bool IdpConfigHasBeenSet() const { return m_idpConfigHasBeenSet; }
  template <typename IdpConfigT = ConsentPortalIdpConfig>
  void SetIdpConfig(IdpConfigT&& value) {
    m_idpConfigHasBeenSet = true;
    m_idpConfig = std::forward<IdpConfigT>(value);
  }
  template <typename IdpConfigT = ConsentPortalIdpConfig>
  UpdateConsentPortalRequest& WithIdpConfig(IdpConfigT&& value) {
    SetIdpConfig(std::forward<IdpConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the consent portal.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateConsentPortalRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_consentPortalIdentifier;

  Aws::String m_executionRoleArn;

  ConsentPortalIdpConfig m_idpConfig;

  Aws::String m_description;
  bool m_consentPortalIdentifierHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_idpConfigHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
