/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/DomainStatus.h>
#include <aws/cloudwatchomni/model/IdentityProvider.h>
#include <aws/cloudwatchomni/model/IdentityProviderConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Detailed information about a domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Domain">AWS
 * API Reference</a></p>
 */
class Domain {
 public:
  AWS_CLOUDWATCHOMNI_API Domain() = default;
  AWS_CLOUDWATCHOMNI_API Domain(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Domain& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique ID of the domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  Domain& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain.</p>
   */
  inline const Aws::String& GetDomainArn() const { return m_domainArn; }
  inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
  template <typename DomainArnT = Aws::String>
  void SetDomainArn(DomainArnT&& value) {
    m_domainArnHasBeenSet = true;
    m_domainArn = std::forward<DomainArnT>(value);
  }
  template <typename DomainArnT = Aws::String>
  Domain& WithDomainArn(DomainArnT&& value) {
    SetDomainArn(std::forward<DomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name that identifies the domain.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Domain& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity providers configured for the domain.</p>
   */
  inline const Aws::Vector<IdentityProvider>& GetIdentityProviders() const { return m_identityProviders; }
  inline bool IdentityProvidersHasBeenSet() const { return m_identityProvidersHasBeenSet; }
  template <typename IdentityProvidersT = Aws::Vector<IdentityProvider>>
  void SetIdentityProviders(IdentityProvidersT&& value) {
    m_identityProvidersHasBeenSet = true;
    m_identityProviders = std::forward<IdentityProvidersT>(value);
  }
  template <typename IdentityProvidersT = Aws::Vector<IdentityProvider>>
  Domain& WithIdentityProviders(IdentityProvidersT&& value) {
    SetIdentityProviders(std::forward<IdentityProvidersT>(value));
    return *this;
  }
  inline Domain& AddIdentityProviders(IdentityProvider value) {
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
  Domain& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTPS endpoint URL for accessing the domain.</p>
   */
  inline const Aws::String& GetDomainEndpointUrl() const { return m_domainEndpointUrl; }
  inline bool DomainEndpointUrlHasBeenSet() const { return m_domainEndpointUrlHasBeenSet; }
  template <typename DomainEndpointUrlT = Aws::String>
  void SetDomainEndpointUrl(DomainEndpointUrlT&& value) {
    m_domainEndpointUrlHasBeenSet = true;
    m_domainEndpointUrl = std::forward<DomainEndpointUrlT>(value);
  }
  template <typename DomainEndpointUrlT = Aws::String>
  Domain& WithDomainEndpointUrl(DomainEndpointUrlT&& value) {
    SetDomainEndpointUrl(std::forward<DomainEndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional endpoint URLs derived from the domain name.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCustomEndpointUrls() const { return m_customEndpointUrls; }
  inline bool CustomEndpointUrlsHasBeenSet() const { return m_customEndpointUrlsHasBeenSet; }
  template <typename CustomEndpointUrlsT = Aws::Vector<Aws::String>>
  void SetCustomEndpointUrls(CustomEndpointUrlsT&& value) {
    m_customEndpointUrlsHasBeenSet = true;
    m_customEndpointUrls = std::forward<CustomEndpointUrlsT>(value);
  }
  template <typename CustomEndpointUrlsT = Aws::Vector<Aws::String>>
  Domain& WithCustomEndpointUrls(CustomEndpointUrlsT&& value) {
    SetCustomEndpointUrls(std::forward<CustomEndpointUrlsT>(value));
    return *this;
  }
  template <typename CustomEndpointUrlsT = Aws::String>
  Domain& AddCustomEndpointUrls(CustomEndpointUrlsT&& value) {
    m_customEndpointUrlsHasBeenSet = true;
    m_customEndpointUrls.emplace_back(std::forward<CustomEndpointUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Identity Center application. Absent for IAM-only domains.</p>
   */
  inline const Aws::String& GetIdentityCenterApplicationArn() const { return m_identityCenterApplicationArn; }
  inline bool IdentityCenterApplicationArnHasBeenSet() const { return m_identityCenterApplicationArnHasBeenSet; }
  template <typename IdentityCenterApplicationArnT = Aws::String>
  void SetIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) {
    m_identityCenterApplicationArnHasBeenSet = true;
    m_identityCenterApplicationArn = std::forward<IdentityCenterApplicationArnT>(value);
  }
  template <typename IdentityCenterApplicationArnT = Aws::String>
  Domain& WithIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) {
    SetIdentityCenterApplicationArn(std::forward<IdentityCenterApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region where this domain was created.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  Domain& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the domain was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Domain& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the domain was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Domain& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the domain.</p>
   */
  inline DomainStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DomainStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Domain& WithStatus(DomainStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_domainArn;

  Aws::String m_name;

  Aws::Vector<IdentityProvider> m_identityProviders;

  IdentityProviderConfiguration m_identityProviderConfiguration;

  Aws::String m_domainEndpointUrl;

  Aws::Vector<Aws::String> m_customEndpointUrls;

  Aws::String m_identityCenterApplicationArn;

  Aws::String m_region;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  DomainStatus m_status{DomainStatus::NOT_SET};
  bool m_domainIdHasBeenSet = false;
  bool m_domainArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_identityProvidersHasBeenSet = false;
  bool m_identityProviderConfigurationHasBeenSet = false;
  bool m_domainEndpointUrlHasBeenSet = false;
  bool m_customEndpointUrlsHasBeenSet = false;
  bool m_identityCenterApplicationArnHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
