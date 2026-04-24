/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AssertionAttributes.h>
#include <aws/grafana/model/IdpMetadata.h>
#include <aws/grafana/model/RoleValues.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure containing information about how this workspace works with SAML.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/SamlConfiguration">AWS
 * API Reference</a></p>
 */
class SamlConfiguration {
 public:
  AWS_MANAGEDGRAFANA_API SamlConfiguration() = default;
  AWS_MANAGEDGRAFANA_API SamlConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API SamlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A structure containing the identity provider (IdP) metadata used to integrate
   * the identity provider with this workspace.</p>
   */
  inline const IdpMetadata& GetIdpMetadata() const { return m_idpMetadata; }
  inline bool IdpMetadataHasBeenSet() const { return m_idpMetadataHasBeenSet; }
  template <typename IdpMetadataT = IdpMetadata>
  void SetIdpMetadata(IdpMetadataT&& value) {
    m_idpMetadataHasBeenSet = true;
    m_idpMetadata = std::forward<IdpMetadataT>(value);
  }
  template <typename IdpMetadataT = IdpMetadata>
  SamlConfiguration& WithIdpMetadata(IdpMetadataT&& value) {
    SetIdpMetadata(std::forward<IdpMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure that defines which attributes in the SAML assertion are to be
   * used to define information about the users authenticated by that IdP to use the
   * workspace.</p>
   */
  inline const AssertionAttributes& GetAssertionAttributes() const { return m_assertionAttributes; }
  inline bool AssertionAttributesHasBeenSet() const { return m_assertionAttributesHasBeenSet; }
  template <typename AssertionAttributesT = AssertionAttributes>
  void SetAssertionAttributes(AssertionAttributesT&& value) {
    m_assertionAttributesHasBeenSet = true;
    m_assertionAttributes = std::forward<AssertionAttributesT>(value);
  }
  template <typename AssertionAttributesT = AssertionAttributes>
  SamlConfiguration& WithAssertionAttributes(AssertionAttributesT&& value) {
    SetAssertionAttributes(std::forward<AssertionAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure containing arrays that map group names in the SAML assertion to
   * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
   * workspace.</p>
   */
  inline const RoleValues& GetRoleValues() const { return m_roleValues; }
  inline bool RoleValuesHasBeenSet() const { return m_roleValuesHasBeenSet; }
  template <typename RoleValuesT = RoleValues>
  void SetRoleValues(RoleValuesT&& value) {
    m_roleValuesHasBeenSet = true;
    m_roleValues = std::forward<RoleValuesT>(value);
  }
  template <typename RoleValuesT = RoleValues>
  SamlConfiguration& WithRoleValues(RoleValuesT&& value) {
    SetRoleValues(std::forward<RoleValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists which organizations defined in the SAML assertion are allowed to use
   * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
   * assertion attribute have access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedOrganizations() const { return m_allowedOrganizations; }
  inline bool AllowedOrganizationsHasBeenSet() const { return m_allowedOrganizationsHasBeenSet; }
  template <typename AllowedOrganizationsT = Aws::Vector<Aws::String>>
  void SetAllowedOrganizations(AllowedOrganizationsT&& value) {
    m_allowedOrganizationsHasBeenSet = true;
    m_allowedOrganizations = std::forward<AllowedOrganizationsT>(value);
  }
  template <typename AllowedOrganizationsT = Aws::Vector<Aws::String>>
  SamlConfiguration& WithAllowedOrganizations(AllowedOrganizationsT&& value) {
    SetAllowedOrganizations(std::forward<AllowedOrganizationsT>(value));
    return *this;
  }
  template <typename AllowedOrganizationsT = Aws::String>
  SamlConfiguration& AddAllowedOrganizations(AllowedOrganizationsT&& value) {
    m_allowedOrganizationsHasBeenSet = true;
    m_allowedOrganizations.emplace_back(std::forward<AllowedOrganizationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How long a sign-on session by a SAML user is valid, before the user has to
   * sign on again.</p>
   */
  inline int GetLoginValidityDuration() const { return m_loginValidityDuration; }
  inline bool LoginValidityDurationHasBeenSet() const { return m_loginValidityDurationHasBeenSet; }
  inline void SetLoginValidityDuration(int value) {
    m_loginValidityDurationHasBeenSet = true;
    m_loginValidityDuration = value;
  }
  inline SamlConfiguration& WithLoginValidityDuration(int value) {
    SetLoginValidityDuration(value);
    return *this;
  }
  ///@}
 private:
  IdpMetadata m_idpMetadata;

  AssertionAttributes m_assertionAttributes;

  RoleValues m_roleValues;

  Aws::Vector<Aws::String> m_allowedOrganizations;

  int m_loginValidityDuration{0};
  bool m_idpMetadataHasBeenSet = false;
  bool m_assertionAttributesHasBeenSet = false;
  bool m_roleValuesHasBeenSet = false;
  bool m_allowedOrganizationsHasBeenSet = false;
  bool m_loginValidityDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
