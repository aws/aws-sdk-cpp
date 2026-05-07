/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CredentialsProviderConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PaymentConnectorType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreatePaymentConnectorRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePaymentConnector"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the payment manager to create the connector for.</p>
   */
  inline const Aws::String& GetPaymentManagerId() const { return m_paymentManagerId; }
  inline bool PaymentManagerIdHasBeenSet() const { return m_paymentManagerIdHasBeenSet; }
  template <typename PaymentManagerIdT = Aws::String>
  void SetPaymentManagerId(PaymentManagerIdT&& value) {
    m_paymentManagerIdHasBeenSet = true;
    m_paymentManagerId = std::forward<PaymentManagerIdT>(value);
  }
  template <typename PaymentManagerIdT = Aws::String>
  CreatePaymentConnectorRequest& WithPaymentManagerId(PaymentManagerIdT&& value) {
    SetPaymentManagerId(std::forward<PaymentManagerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the payment connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePaymentConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the payment connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreatePaymentConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of payment connector, which determines the payment provider
   * integration.</p>
   */
  inline PaymentConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PaymentConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreatePaymentConnectorRequest& WithType(PaymentConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential provider configurations for the payment connector. These
   * configurations specify how the connector authenticates with the payment
   * provider.</p>
   */
  inline const Aws::Vector<CredentialsProviderConfiguration>& GetCredentialProviderConfigurations() const {
    return m_credentialProviderConfigurations;
  }
  inline bool CredentialProviderConfigurationsHasBeenSet() const { return m_credentialProviderConfigurationsHasBeenSet; }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<CredentialsProviderConfiguration>>
  void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value);
  }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<CredentialsProviderConfiguration>>
  CreatePaymentConnectorRequest& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = CredentialsProviderConfiguration>
  CreatePaymentConnectorRequest& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value));
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
  CreatePaymentConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentManagerId;

  Aws::String m_name;

  Aws::String m_description;

  PaymentConnectorType m_type{PaymentConnectorType::NOT_SET};

  Aws::Vector<CredentialsProviderConfiguration> m_credentialProviderConfigurations;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_paymentManagerIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_credentialProviderConfigurationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
