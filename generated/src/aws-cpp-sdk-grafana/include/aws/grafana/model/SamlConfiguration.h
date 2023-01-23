/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/AssertionAttributes.h>
#include <aws/grafana/model/IdpMetadata.h>
#include <aws/grafana/model/RoleValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure containing information about how this workspace works with SAML.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/SamlConfiguration">AWS
   * API Reference</a></p>
   */
  class SamlConfiguration
  {
  public:
    AWS_MANAGEDGRAFANA_API SamlConfiguration();
    AWS_MANAGEDGRAFANA_API SamlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API SamlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrganizations() const{ return m_allowedOrganizations; }

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline bool AllowedOrganizationsHasBeenSet() const { return m_allowedOrganizationsHasBeenSet; }

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline void SetAllowedOrganizations(const Aws::Vector<Aws::String>& value) { m_allowedOrganizationsHasBeenSet = true; m_allowedOrganizations = value; }

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline void SetAllowedOrganizations(Aws::Vector<Aws::String>&& value) { m_allowedOrganizationsHasBeenSet = true; m_allowedOrganizations = std::move(value); }

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline SamlConfiguration& WithAllowedOrganizations(const Aws::Vector<Aws::String>& value) { SetAllowedOrganizations(value); return *this;}

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline SamlConfiguration& WithAllowedOrganizations(Aws::Vector<Aws::String>&& value) { SetAllowedOrganizations(std::move(value)); return *this;}

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline SamlConfiguration& AddAllowedOrganizations(const Aws::String& value) { m_allowedOrganizationsHasBeenSet = true; m_allowedOrganizations.push_back(value); return *this; }

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline SamlConfiguration& AddAllowedOrganizations(Aws::String&& value) { m_allowedOrganizationsHasBeenSet = true; m_allowedOrganizations.push_back(std::move(value)); return *this; }

    /**
     * <p>Lists which organizations defined in the SAML assertion are allowed to use
     * the Amazon Managed Grafana workspace. If this is empty, all organizations in the
     * assertion attribute have access.</p>
     */
    inline SamlConfiguration& AddAllowedOrganizations(const char* value) { m_allowedOrganizationsHasBeenSet = true; m_allowedOrganizations.push_back(value); return *this; }


    /**
     * <p>A structure that defines which attributes in the SAML assertion are to be
     * used to define information about the users authenticated by that IdP to use the
     * workspace.</p>
     */
    inline const AssertionAttributes& GetAssertionAttributes() const{ return m_assertionAttributes; }

    /**
     * <p>A structure that defines which attributes in the SAML assertion are to be
     * used to define information about the users authenticated by that IdP to use the
     * workspace.</p>
     */
    inline bool AssertionAttributesHasBeenSet() const { return m_assertionAttributesHasBeenSet; }

    /**
     * <p>A structure that defines which attributes in the SAML assertion are to be
     * used to define information about the users authenticated by that IdP to use the
     * workspace.</p>
     */
    inline void SetAssertionAttributes(const AssertionAttributes& value) { m_assertionAttributesHasBeenSet = true; m_assertionAttributes = value; }

    /**
     * <p>A structure that defines which attributes in the SAML assertion are to be
     * used to define information about the users authenticated by that IdP to use the
     * workspace.</p>
     */
    inline void SetAssertionAttributes(AssertionAttributes&& value) { m_assertionAttributesHasBeenSet = true; m_assertionAttributes = std::move(value); }

    /**
     * <p>A structure that defines which attributes in the SAML assertion are to be
     * used to define information about the users authenticated by that IdP to use the
     * workspace.</p>
     */
    inline SamlConfiguration& WithAssertionAttributes(const AssertionAttributes& value) { SetAssertionAttributes(value); return *this;}

    /**
     * <p>A structure that defines which attributes in the SAML assertion are to be
     * used to define information about the users authenticated by that IdP to use the
     * workspace.</p>
     */
    inline SamlConfiguration& WithAssertionAttributes(AssertionAttributes&& value) { SetAssertionAttributes(std::move(value)); return *this;}


    /**
     * <p>A structure containing the identity provider (IdP) metadata used to integrate
     * the identity provider with this workspace.</p>
     */
    inline const IdpMetadata& GetIdpMetadata() const{ return m_idpMetadata; }

    /**
     * <p>A structure containing the identity provider (IdP) metadata used to integrate
     * the identity provider with this workspace.</p>
     */
    inline bool IdpMetadataHasBeenSet() const { return m_idpMetadataHasBeenSet; }

    /**
     * <p>A structure containing the identity provider (IdP) metadata used to integrate
     * the identity provider with this workspace.</p>
     */
    inline void SetIdpMetadata(const IdpMetadata& value) { m_idpMetadataHasBeenSet = true; m_idpMetadata = value; }

    /**
     * <p>A structure containing the identity provider (IdP) metadata used to integrate
     * the identity provider with this workspace.</p>
     */
    inline void SetIdpMetadata(IdpMetadata&& value) { m_idpMetadataHasBeenSet = true; m_idpMetadata = std::move(value); }

    /**
     * <p>A structure containing the identity provider (IdP) metadata used to integrate
     * the identity provider with this workspace.</p>
     */
    inline SamlConfiguration& WithIdpMetadata(const IdpMetadata& value) { SetIdpMetadata(value); return *this;}

    /**
     * <p>A structure containing the identity provider (IdP) metadata used to integrate
     * the identity provider with this workspace.</p>
     */
    inline SamlConfiguration& WithIdpMetadata(IdpMetadata&& value) { SetIdpMetadata(std::move(value)); return *this;}


    /**
     * <p>How long a sign-on session by a SAML user is valid, before the user has to
     * sign on again.</p>
     */
    inline int GetLoginValidityDuration() const{ return m_loginValidityDuration; }

    /**
     * <p>How long a sign-on session by a SAML user is valid, before the user has to
     * sign on again.</p>
     */
    inline bool LoginValidityDurationHasBeenSet() const { return m_loginValidityDurationHasBeenSet; }

    /**
     * <p>How long a sign-on session by a SAML user is valid, before the user has to
     * sign on again.</p>
     */
    inline void SetLoginValidityDuration(int value) { m_loginValidityDurationHasBeenSet = true; m_loginValidityDuration = value; }

    /**
     * <p>How long a sign-on session by a SAML user is valid, before the user has to
     * sign on again.</p>
     */
    inline SamlConfiguration& WithLoginValidityDuration(int value) { SetLoginValidityDuration(value); return *this;}


    /**
     * <p>A structure containing arrays that map group names in the SAML assertion to
     * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
     * workspace.</p>
     */
    inline const RoleValues& GetRoleValues() const{ return m_roleValues; }

    /**
     * <p>A structure containing arrays that map group names in the SAML assertion to
     * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
     * workspace.</p>
     */
    inline bool RoleValuesHasBeenSet() const { return m_roleValuesHasBeenSet; }

    /**
     * <p>A structure containing arrays that map group names in the SAML assertion to
     * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
     * workspace.</p>
     */
    inline void SetRoleValues(const RoleValues& value) { m_roleValuesHasBeenSet = true; m_roleValues = value; }

    /**
     * <p>A structure containing arrays that map group names in the SAML assertion to
     * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
     * workspace.</p>
     */
    inline void SetRoleValues(RoleValues&& value) { m_roleValuesHasBeenSet = true; m_roleValues = std::move(value); }

    /**
     * <p>A structure containing arrays that map group names in the SAML assertion to
     * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
     * workspace.</p>
     */
    inline SamlConfiguration& WithRoleValues(const RoleValues& value) { SetRoleValues(value); return *this;}

    /**
     * <p>A structure containing arrays that map group names in the SAML assertion to
     * the Grafana <code>Admin</code> and <code>Editor</code> roles in the
     * workspace.</p>
     */
    inline SamlConfiguration& WithRoleValues(RoleValues&& value) { SetRoleValues(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedOrganizations;
    bool m_allowedOrganizationsHasBeenSet = false;

    AssertionAttributes m_assertionAttributes;
    bool m_assertionAttributesHasBeenSet = false;

    IdpMetadata m_idpMetadata;
    bool m_idpMetadataHasBeenSet = false;

    int m_loginValidityDuration;
    bool m_loginValidityDurationHasBeenSet = false;

    RoleValues m_roleValues;
    bool m_roleValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
