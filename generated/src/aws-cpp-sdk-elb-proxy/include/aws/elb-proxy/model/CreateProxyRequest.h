/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/Attribute.h>
#include <aws/elb-proxy/model/ProxyConfiguration.h>
#include <aws/elb-proxy/model/ProxyNetworkUserConfiguration.h>
#include <aws/elb-proxy/model/ProxyType.h>

#include <utility>

namespace Aws {
namespace ELBProxy {
namespace Model {

/**
 */
class CreateProxyRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API CreateProxyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProxy"; }

  AWS_ELBPROXY_API Aws::String SerializePayload() const override;

  AWS_ELBPROXY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the proxy. The name must be unique within your account for the
   * Region. The valid characters are a-z, 0-9, and hyphens (-). You can't use a
   * hyphen as the first or last character.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateProxyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of proxy.</p>
   */
  inline ProxyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ProxyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateProxyRequest& WithType(ProxyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the proxy software, in <code>major.minor</code> format.</p>
   */
  inline const Aws::String& GetProxyVersion() const { return m_proxyVersion; }
  inline bool ProxyVersionHasBeenSet() const { return m_proxyVersionHasBeenSet; }
  template <typename ProxyVersionT = Aws::String>
  void SetProxyVersion(ProxyVersionT&& value) {
    m_proxyVersionHasBeenSet = true;
    m_proxyVersion = std::forward<ProxyVersionT>(value);
  }
  template <typename ProxyVersionT = Aws::String>
  CreateProxyRequest& WithProxyVersion(ProxyVersionT&& value) {
    SetProxyVersion(std::forward<ProxyVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions to
   * the code that your Envoy configuration runs on the proxy, such as filters and
   * extensions. These are the permissions that this code needs when it calls AWS
   * services.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateProxyRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the proxy.</p>
   */
  inline const ProxyConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = ProxyConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = ProxyConfiguration>
  CreateProxyRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the proxy.</p>
   */
  inline const ProxyNetworkUserConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = ProxyNetworkUserConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ProxyNetworkUserConfiguration>
  CreateProxyRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes for the proxy. Attributes can be changed after creation.
   * Attributes that you don't specify are set to their default values.</p>
   */
  inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Vector<Attribute>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Vector<Attribute>>
  CreateProxyRequest& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesT = Attribute>
  CreateProxyRequest& AddAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace_back(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer managed KMS key used to
   * encrypt the proxy's configuration content. If you don't specify a key, the
   * default service-owned key is used.</p>
   */
  inline const Aws::String& GetCustomerKmsKeyArn() const { return m_customerKmsKeyArn; }
  inline bool CustomerKmsKeyArnHasBeenSet() const { return m_customerKmsKeyArnHasBeenSet; }
  template <typename CustomerKmsKeyArnT = Aws::String>
  void SetCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    m_customerKmsKeyArnHasBeenSet = true;
    m_customerKmsKeyArn = std::forward<CustomerKmsKeyArnT>(value);
  }
  template <typename CustomerKmsKeyArnT = Aws::String>
  CreateProxyRequest& WithCustomerKmsKeyArn(CustomerKmsKeyArnT&& value) {
    SetCustomerKmsKeyArn(std::forward<CustomerKmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for the proxy.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateProxyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateProxyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateProxyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ProxyType m_type{ProxyType::NOT_SET};

  Aws::String m_proxyVersion;

  Aws::String m_roleArn;

  ProxyConfiguration m_configuration;

  ProxyNetworkUserConfiguration m_networkConfiguration;

  Aws::Vector<Attribute> m_attributes;

  Aws::String m_customerKmsKeyArn;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_proxyVersionHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_customerKmsKeyArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
