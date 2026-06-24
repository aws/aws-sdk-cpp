/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorConfiguration.h>

#include <utility>

namespace Aws {
namespace LambdaCore {
namespace Model {

/**
 */
class UpdateNetworkConnectorRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API UpdateNetworkConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkConnector"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateNetworkConnectorRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated network configuration for the connector. Provide the full
   * <code>VpcEgressConfiguration</code> including all subnet IDs and security group
   * IDs — this replaces the existing configuration.</p>
   */
  inline const NetworkConnectorConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = NetworkConnectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = NetworkConnectorConfiguration>
  UpdateNetworkConnectorRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated ARN of the IAM role that Lambda assumes to manage ENIs. Use this
   * to change the operator role without recreating the connector.</p>
   */
  inline const Aws::String& GetOperatorRole() const { return m_operatorRole; }
  inline bool OperatorRoleHasBeenSet() const { return m_operatorRoleHasBeenSet; }
  template <typename OperatorRoleT = Aws::String>
  void SetOperatorRole(OperatorRoleT&& value) {
    m_operatorRoleHasBeenSet = true;
    m_operatorRole = std::forward<OperatorRoleT>(value);
  }
  template <typename OperatorRoleT = Aws::String>
  UpdateNetworkConnectorRequest& WithOperatorRole(OperatorRoleT&& value) {
    SetOperatorRole(std::forward<OperatorRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the update
   * request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateNetworkConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  NetworkConnectorConfiguration m_configuration;

  Aws::String m_operatorRole;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_identifierHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_operatorRoleHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
