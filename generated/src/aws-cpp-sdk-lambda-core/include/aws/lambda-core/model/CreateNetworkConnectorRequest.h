/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreateNetworkConnectorRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API CreateNetworkConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkConnector"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique name for the network connector within your account and Region. You
   * can use the name to identify the connector in subsequent API calls.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateNetworkConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the connector. Specify a
   * <code>VpcEgressConfiguration</code> to enable outbound traffic routing through
   * your VPC.</p>
   */
  inline const NetworkConnectorConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = NetworkConnectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = NetworkConnectorConfiguration>
  CreateNetworkConnectorRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that Lambda assumes to manage elastic network
   * interfaces in your VPC. This role must have permissions for
   * <code>ec2:CreateNetworkInterface</code>,
   * <code>ec2:DeleteNetworkInterface</code>, and related describe operations.</p>
   */
  inline const Aws::String& GetOperatorRole() const { return m_operatorRole; }
  inline bool OperatorRoleHasBeenSet() const { return m_operatorRoleHasBeenSet; }
  template <typename OperatorRoleT = Aws::String>
  void SetOperatorRole(OperatorRoleT&& value) {
    m_operatorRoleHasBeenSet = true;
    m_operatorRole = std::forward<OperatorRoleT>(value);
  }
  template <typename OperatorRoleT = Aws::String>
  CreateNetworkConnectorRequest& WithOperatorRole(OperatorRoleT&& value) {
    SetOperatorRole(std::forward<OperatorRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request with the same client token,
   * the API returns the existing connector without creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateNetworkConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs to associate with the network connector for
   * organization, cost allocation, or access control.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateNetworkConnectorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateNetworkConnectorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  NetworkConnectorConfiguration m_configuration;

  Aws::String m_operatorRole;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_operatorRoleHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
