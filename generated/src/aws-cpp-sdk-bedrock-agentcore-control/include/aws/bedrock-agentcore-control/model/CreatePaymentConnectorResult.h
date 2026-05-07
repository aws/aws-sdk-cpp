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
class CreatePaymentConnectorResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentConnectorResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentConnectorResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the created payment connector.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  CreatePaymentConnectorResult& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the parent payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerId() const { return m_paymentManagerId; }
  template <typename PaymentManagerIdT = Aws::String>
  void SetPaymentManagerId(PaymentManagerIdT&& value) {
    m_paymentManagerIdHasBeenSet = true;
    m_paymentManagerId = std::forward<PaymentManagerIdT>(value);
  }
  template <typename PaymentManagerIdT = Aws::String>
  CreatePaymentConnectorResult& WithPaymentManagerId(PaymentManagerIdT&& value) {
    SetPaymentManagerId(std::forward<PaymentManagerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the created payment connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePaymentConnectorResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the created payment connector.</p>
   */
  inline PaymentConnectorType GetType() const { return m_type; }
  inline void SetType(PaymentConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreatePaymentConnectorResult& WithType(PaymentConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential provider configurations for the created payment connector.</p>
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
  CreatePaymentConnectorResult& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = CredentialsProviderConfiguration>
  CreatePaymentConnectorResult& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
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
  CreatePaymentConnectorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  inline CreatePaymentConnectorResult& WithStatus(PaymentConnectorStatus value) {
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
  CreatePaymentConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_paymentConnectorId;

  Aws::String m_paymentManagerId;

  Aws::String m_name;

  PaymentConnectorType m_type{PaymentConnectorType::NOT_SET};

  Aws::Vector<CredentialsProviderConfiguration> m_credentialProviderConfigurations;

  Aws::Utils::DateTime m_createdAt{};

  PaymentConnectorStatus m_status{PaymentConnectorStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_paymentManagerIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_credentialProviderConfigurationsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
