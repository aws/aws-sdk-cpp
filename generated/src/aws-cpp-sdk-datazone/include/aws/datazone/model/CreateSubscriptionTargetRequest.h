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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateSubscriptionTargetRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionTarget"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const{ return m_applicableAssetTypes; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline bool ApplicableAssetTypesHasBeenSet() const { return m_applicableAssetTypesHasBeenSet; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline void SetApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = value; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline void SetApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = std::move(value); }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { SetApplicableAssetTypes(value); return *this;}

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { SetApplicableAssetTypes(std::move(value)); return *this;}

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddApplicableAssetTypes(const Aws::String& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(value); return *this; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddApplicableAssetTypes(Aws::String&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddApplicableAssetTypes(const char* value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(value); return *this; }


    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const{ return m_authorizedPrincipals; }

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline bool AuthorizedPrincipalsHasBeenSet() const { return m_authorizedPrincipalsHasBeenSet; }

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline void SetAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = value; }

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline void SetAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = std::move(value); }

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { SetAuthorizedPrincipals(value); return *this;}

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { SetAuthorizedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddAuthorizedPrincipals(const Aws::String& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(value); return *this; }

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddAuthorizedPrincipals(Aws::String&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddAuthorizedPrincipals(const char* value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateSubscriptionTargetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateSubscriptionTargetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateSubscriptionTargetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline CreateSubscriptionTargetRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline CreateSubscriptionTargetRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline CreateSubscriptionTargetRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline CreateSubscriptionTargetRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline CreateSubscriptionTargetRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline CreateSubscriptionTargetRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline const Aws::String& GetManageAccessRole() const{ return m_manageAccessRole; }

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline bool ManageAccessRoleHasBeenSet() const { return m_manageAccessRoleHasBeenSet; }

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline void SetManageAccessRole(const Aws::String& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = value; }

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline void SetManageAccessRole(Aws::String&& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = std::move(value); }

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline void SetManageAccessRole(const char* value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole.assign(value); }

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithManageAccessRole(const Aws::String& value) { SetManageAccessRole(value); return *this;}

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithManageAccessRole(Aws::String&& value) { SetManageAccessRole(std::move(value)); return *this;}

    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithManageAccessRole(const char* value) { SetManageAccessRole(value); return *this;}


    /**
     * <p>The name of the subscription target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The provider of the subscription target.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline const Aws::Vector<SubscriptionTargetForm>& GetSubscriptionTargetConfig() const{ return m_subscriptionTargetConfig; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline bool SubscriptionTargetConfigHasBeenSet() const { return m_subscriptionTargetConfigHasBeenSet; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline void SetSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig = value; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline void SetSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig = std::move(value); }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { SetSubscriptionTargetConfig(value); return *this;}

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { SetSubscriptionTargetConfig(std::move(value)); return *this;}

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddSubscriptionTargetConfig(const SubscriptionTargetForm& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.push_back(value); return *this; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& AddSubscriptionTargetConfig(SubscriptionTargetForm&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of the subscription target.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the subscription target.</p>
     */
    inline CreateSubscriptionTargetRequest& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applicableAssetTypes;
    bool m_applicableAssetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedPrincipals;
    bool m_authorizedPrincipalsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_manageAccessRole;
    bool m_manageAccessRoleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Vector<SubscriptionTargetForm> m_subscriptionTargetConfig;
    bool m_subscriptionTargetConfigHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
