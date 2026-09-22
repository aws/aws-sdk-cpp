/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IdentityProvider.h>
#include <aws/cloudwatchomni/model/IdentityProviderConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class UpdateDomainForOrganizationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API UpdateDomainForOrganizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainForOrganization"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the organization domain to update.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  UpdateDomainForOrganizationRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the organization domain. Omit to leave unchanged. Must be 3-63
   * characters: lowercase letters, numbers, and hyphens. It must begin and end with
   * a letter or number and cannot contain consecutive hyphens.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateDomainForOrganizationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity providers to configure for the domain. Omit to leave
   * unchanged.</p>
   */
  inline const Aws::Vector<IdentityProvider>& GetIdentityProviders() const { return m_identityProviders; }
  inline bool IdentityProvidersHasBeenSet() const { return m_identityProvidersHasBeenSet; }
  template <typename IdentityProvidersT = Aws::Vector<IdentityProvider>>
  void SetIdentityProviders(IdentityProvidersT&& value) {
    m_identityProvidersHasBeenSet = true;
    m_identityProviders = std::forward<IdentityProvidersT>(value);
  }
  template <typename IdentityProvidersT = Aws::Vector<IdentityProvider>>
  UpdateDomainForOrganizationRequest& WithIdentityProviders(IdentityProvidersT&& value) {
    SetIdentityProviders(std::forward<IdentityProvidersT>(value));
    return *this;
  }
  inline UpdateDomainForOrganizationRequest& AddIdentityProviders(IdentityProvider value) {
    m_identityProvidersHasBeenSet = true;
    m_identityProviders.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identity provider configuration for the domain. Omit to leave unchanged.</p>
   */
  inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
  inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    m_identityProviderConfigurationHasBeenSet = true;
    m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value);
  }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  UpdateDomainForOrganizationRequest& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_name;

  Aws::Vector<IdentityProvider> m_identityProviders;

  IdentityProviderConfiguration m_identityProviderConfiguration;
  bool m_domainIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_identityProvidersHasBeenSet = false;
  bool m_identityProviderConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
