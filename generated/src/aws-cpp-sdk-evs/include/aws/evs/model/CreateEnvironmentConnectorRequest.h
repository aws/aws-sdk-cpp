/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVSRequest.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/ConnectorType.h>

#include <utility>

namespace Aws {
namespace EVS {
namespace Model {

/**
 */
class CreateEnvironmentConnectorRequest : public EVSRequest {
 public:
  AWS_EVS_API CreateEnvironmentConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentConnector"; }

  AWS_EVS_API Aws::String SerializePayload() const override;

  AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> <p>This parameter is not used in Amazon EVS currently. If you supply
   * input for this parameter, it will have no effect.</p>  <p>A unique,
   * case-sensitive identifier that you provide to ensure the idempotency of the
   * connector creation request. If you do not specify a client token, a randomly
   * generated token is used for the request to ensure idempotency.</p></p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateEnvironmentConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique ID for the environment to create the connector in.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  CreateEnvironmentConnectorRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of connector to create.</p>
   */
  inline ConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateEnvironmentConnectorRequest& WithType(ConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified domain name (FQDN) of the VCF appliance that the
   * connector targets.</p>
   */
  inline const Aws::String& GetApplianceFqdn() const { return m_applianceFqdn; }
  inline bool ApplianceFqdnHasBeenSet() const { return m_applianceFqdnHasBeenSet; }
  template <typename ApplianceFqdnT = Aws::String>
  void SetApplianceFqdn(ApplianceFqdnT&& value) {
    m_applianceFqdnHasBeenSet = true;
    m_applianceFqdn = std::forward<ApplianceFqdnT>(value);
  }
  template <typename ApplianceFqdnT = Aws::String>
  CreateEnvironmentConnectorRequest& WithApplianceFqdn(ApplianceFqdnT&& value) {
    SetApplianceFqdn(std::forward<ApplianceFqdnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN or name of the Amazon Web Services Secrets Manager secret that stores
   * the credentials for the VCF appliance.</p>  <p>Do not use credentials
   * with Administrator privileges. We recommend using a service account with the
   * minimum required permissions.</p>
   */
  inline const Aws::String& GetSecretIdentifier() const { return m_secretIdentifier; }
  inline bool SecretIdentifierHasBeenSet() const { return m_secretIdentifierHasBeenSet; }
  template <typename SecretIdentifierT = Aws::String>
  void SetSecretIdentifier(SecretIdentifierT&& value) {
    m_secretIdentifierHasBeenSet = true;
    m_secretIdentifier = std::forward<SecretIdentifierT>(value);
  }
  template <typename SecretIdentifierT = Aws::String>
  CreateEnvironmentConnectorRequest& WithSecretIdentifier(SecretIdentifierT&& value) {
    SetSecretIdentifier(std::forward<SecretIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_environmentId;

  ConnectorType m_type{ConnectorType::NOT_SET};

  Aws::String m_applianceFqdn;

  Aws::String m_secretIdentifier;
  bool m_clientTokenHasBeenSet = true;
  bool m_environmentIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_applianceFqdnHasBeenSet = false;
  bool m_secretIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
