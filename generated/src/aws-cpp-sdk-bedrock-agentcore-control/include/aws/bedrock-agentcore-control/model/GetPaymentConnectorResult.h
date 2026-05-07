/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CredentialsProviderConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PaymentConnectorStatus.h>
#include <aws/bedrock-agentcore-control/model/PaymentConnectorType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetPaymentConnectorResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentConnectorResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentConnectorResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the payment connector.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  GetPaymentConnectorResult& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the payment connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetPaymentConnectorResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the payment connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetPaymentConnectorResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the payment connector, which determines the payment provider
   * integration.</p>
   */
  inline PaymentConnectorType GetType() const { return m_type; }
  inline void SetType(PaymentConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetPaymentConnectorResult& WithType(PaymentConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential provider configurations for the payment connector.</p>
   */
  inline const Aws::Vector<CredentialsProviderConfiguration>& GetCredentialProviderConfigurations() const {
    return m_credentialProviderConfigurations;
  }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<CredentialsProviderConfiguration>>
  void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value);
  }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<CredentialsProviderConfiguration>>
  GetPaymentConnectorResult& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = CredentialsProviderConfiguration>
  GetPaymentConnectorResult& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetPaymentConnectorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment connector was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetPaymentConnectorResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the payment connector. Possible values include
   * <code>CREATING</code>, <code>READY</code>, <code>UPDATING</code>,
   * <code>DELETING</code>, <code>CREATE_FAILED</code>, <code>UPDATE_FAILED</code>,
   * and <code>DELETE_FAILED</code>.</p>
   */
  inline PaymentConnectorStatus GetStatus() const { return m_status; }
  inline void SetStatus(PaymentConnectorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetPaymentConnectorResult& WithStatus(PaymentConnectorStatus value) {
    SetStatus(value);
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
  GetPaymentConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_paymentConnectorId;

  Aws::String m_name;

  Aws::String m_description;

  PaymentConnectorType m_type{PaymentConnectorType::NOT_SET};

  Aws::Vector<CredentialsProviderConfiguration> m_credentialProviderConfigurations;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  PaymentConnectorStatus m_status{PaymentConnectorStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_credentialProviderConfigurationsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
