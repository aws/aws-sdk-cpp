/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IdentityProvider.h>
#include <aws/cloudwatchomni/model/IdentityProviderConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class CreateDomainForOrganizationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API CreateDomainForOrganizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDomainForOrganization"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A name that identifies the organization domain. Must be 3-63 characters:
   * lowercase letters, numbers, and hyphens. It must begin and end with a letter or
   * number and cannot contain consecutive hyphens.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDomainForOrganizationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity providers to configure for the domain.</p>
   */
  inline const Aws::Vector<IdentityProvider>& GetIdentityProviders() const { return m_identityProviders; }
  inline bool IdentityProvidersHasBeenSet() const { return m_identityProvidersHasBeenSet; }
  template <typename IdentityProvidersT = Aws::Vector<IdentityProvider>>
  void SetIdentityProviders(IdentityProvidersT&& value) {
    m_identityProvidersHasBeenSet = true;
    m_identityProviders = std::forward<IdentityProvidersT>(value);
  }
  template <typename IdentityProvidersT = Aws::Vector<IdentityProvider>>
  CreateDomainForOrganizationRequest& WithIdentityProviders(IdentityProvidersT&& value) {
    SetIdentityProviders(std::forward<IdentityProvidersT>(value));
    return *this;
  }
  inline CreateDomainForOrganizationRequest& AddIdentityProviders(IdentityProvider value) {
    m_identityProvidersHasBeenSet = true;
    m_identityProviders.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identity provider configuration for the domain.</p>
   */
  inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
  inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    m_identityProviderConfigurationHasBeenSet = true;
    m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value);
  }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  CreateDomainForOrganizationRequest& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of an IAM role in the management account used for domain access. You
   * must create this role, and its trust policy must allow the service principal to
   * assume it.</p>
   */
  inline const Aws::String& GetDomainAccessRoleArn() const { return m_domainAccessRoleArn; }
  inline bool DomainAccessRoleArnHasBeenSet() const { return m_domainAccessRoleArnHasBeenSet; }
  template <typename DomainAccessRoleArnT = Aws::String>
  void SetDomainAccessRoleArn(DomainAccessRoleArnT&& value) {
    m_domainAccessRoleArnHasBeenSet = true;
    m_domainAccessRoleArn = std::forward<DomainAccessRoleArnT>(value);
  }
  template <typename DomainAccessRoleArnT = Aws::String>
  CreateDomainForOrganizationRequest& WithDomainAccessRoleArn(DomainAccessRoleArnT&& value) {
    SetDomainAccessRoleArn(std::forward<DomainAccessRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the domain.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDomainForOrganizationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDomainForOrganizationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for safe retries. Repeated requests with the same token
   * return the original result instead of creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDomainForOrganizationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<IdentityProvider> m_identityProviders;

  IdentityProviderConfiguration m_identityProviderConfiguration;

  Aws::String m_domainAccessRoleArn;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_identityProvidersHasBeenSet = false;
  bool m_identityProviderConfigurationHasBeenSet = false;
  bool m_domainAccessRoleArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
