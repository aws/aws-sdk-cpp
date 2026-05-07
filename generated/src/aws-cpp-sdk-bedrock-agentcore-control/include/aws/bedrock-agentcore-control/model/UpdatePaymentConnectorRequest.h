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
class UpdatePaymentConnectorRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePaymentConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePaymentConnector"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the parent payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerId() const { return m_paymentManagerId; }
  inline bool PaymentManagerIdHasBeenSet() const { return m_paymentManagerIdHasBeenSet; }
  template <typename PaymentManagerIdT = Aws::String>
  void SetPaymentManagerId(PaymentManagerIdT&& value) {
    m_paymentManagerIdHasBeenSet = true;
    m_paymentManagerId = std::forward<PaymentManagerIdT>(value);
  }
  template <typename PaymentManagerIdT = Aws::String>
  UpdatePaymentConnectorRequest& WithPaymentManagerId(PaymentManagerIdT&& value) {
    SetPaymentManagerId(std::forward<PaymentManagerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the payment connector to update.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  inline bool PaymentConnectorIdHasBeenSet() const { return m_paymentConnectorIdHasBeenSet; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  UpdatePaymentConnectorRequest& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the payment connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePaymentConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated type of the payment connector.</p>
   */
  inline PaymentConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PaymentConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdatePaymentConnectorRequest& WithType(PaymentConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated credential provider configurations for the payment connector.</p>
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
  UpdatePaymentConnectorRequest& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = CredentialsProviderConfiguration>
  UpdatePaymentConnectorRequest& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
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
  UpdatePaymentConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentManagerId;

  Aws::String m_paymentConnectorId;

  Aws::String m_description;

  PaymentConnectorType m_type{PaymentConnectorType::NOT_SET};

  Aws::Vector<CredentialsProviderConfiguration> m_credentialProviderConfigurations;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_paymentManagerIdHasBeenSet = false;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_credentialProviderConfigurationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
