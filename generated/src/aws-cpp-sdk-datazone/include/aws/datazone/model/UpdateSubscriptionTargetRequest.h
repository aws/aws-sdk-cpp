/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SubscriptionTargetForm.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateSubscriptionTargetRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateSubscriptionTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriptionTarget"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const{ return m_applicableAssetTypes; }

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline bool ApplicableAssetTypesHasBeenSet() const { return m_applicableAssetTypesHasBeenSet; }

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = value; }

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = std::move(value); }

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { SetApplicableAssetTypes(value); return *this;}

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { SetApplicableAssetTypes(std::move(value)); return *this;}

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddApplicableAssetTypes(const Aws::String& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(value); return *this; }

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddApplicableAssetTypes(Aws::String&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddApplicableAssetTypes(const char* value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(value); return *this; }


    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const{ return m_authorizedPrincipals; }

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline bool AuthorizedPrincipalsHasBeenSet() const { return m_authorizedPrincipalsHasBeenSet; }

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = value; }

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = std::move(value); }

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { SetAuthorizedPrincipals(value); return *this;}

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { SetAuthorizedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddAuthorizedPrincipals(const Aws::String& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(value); return *this; }

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddAuthorizedPrincipals(Aws::String&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddAuthorizedPrincipals(const char* value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(value); return *this; }


    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::String& GetManageAccessRole() const{ return m_manageAccessRole; }

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline bool ManageAccessRoleHasBeenSet() const { return m_manageAccessRoleHasBeenSet; }

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetManageAccessRole(const Aws::String& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = value; }

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetManageAccessRole(Aws::String&& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = std::move(value); }

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetManageAccessRole(const char* value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole.assign(value); }

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithManageAccessRole(const Aws::String& value) { SetManageAccessRole(value); return *this;}

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithManageAccessRole(Aws::String&& value) { SetManageAccessRole(std::move(value)); return *this;}

    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithManageAccessRole(const char* value) { SetManageAccessRole(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::Vector<SubscriptionTargetForm>& GetSubscriptionTargetConfig() const{ return m_subscriptionTargetConfig; }

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline bool SubscriptionTargetConfigHasBeenSet() const { return m_subscriptionTargetConfigHasBeenSet; }

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig = value; }

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline void SetSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig = std::move(value); }

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { SetSubscriptionTargetConfig(value); return *this;}

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& WithSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { SetSubscriptionTargetConfig(std::move(value)); return *this;}

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddSubscriptionTargetConfig(const SubscriptionTargetForm& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.push_back(value); return *this; }

    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline UpdateSubscriptionTargetRequest& AddSubscriptionTargetConfig(SubscriptionTargetForm&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_applicableAssetTypes;
    bool m_applicableAssetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedPrincipals;
    bool m_authorizedPrincipalsHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_manageAccessRole;
    bool m_manageAccessRoleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Vector<SubscriptionTargetForm> m_subscriptionTargetConfig;
    bool m_subscriptionTargetConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
