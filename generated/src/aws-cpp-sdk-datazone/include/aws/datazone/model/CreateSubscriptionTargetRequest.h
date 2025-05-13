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
    AWS_DATAZONE_API CreateSubscriptionTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionTarget"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const { return m_applicableAssetTypes; }
    inline bool ApplicableAssetTypesHasBeenSet() const { return m_applicableAssetTypesHasBeenSet; }
    template<typename ApplicableAssetTypesT = Aws::Vector<Aws::String>>
    void SetApplicableAssetTypes(ApplicableAssetTypesT&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = std::forward<ApplicableAssetTypesT>(value); }
    template<typename ApplicableAssetTypesT = Aws::Vector<Aws::String>>
    CreateSubscriptionTargetRequest& WithApplicableAssetTypes(ApplicableAssetTypesT&& value) { SetApplicableAssetTypes(std::forward<ApplicableAssetTypesT>(value)); return *this;}
    template<typename ApplicableAssetTypesT = Aws::String>
    CreateSubscriptionTargetRequest& AddApplicableAssetTypes(ApplicableAssetTypesT&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.emplace_back(std::forward<ApplicableAssetTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorized principals of the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const { return m_authorizedPrincipals; }
    inline bool AuthorizedPrincipalsHasBeenSet() const { return m_authorizedPrincipalsHasBeenSet; }
    template<typename AuthorizedPrincipalsT = Aws::Vector<Aws::String>>
    void SetAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = std::forward<AuthorizedPrincipalsT>(value); }
    template<typename AuthorizedPrincipalsT = Aws::Vector<Aws::String>>
    CreateSubscriptionTargetRequest& WithAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { SetAuthorizedPrincipals(std::forward<AuthorizedPrincipalsT>(value)); return *this;}
    template<typename AuthorizedPrincipalsT = Aws::String>
    CreateSubscriptionTargetRequest& AddAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.emplace_back(std::forward<AuthorizedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSubscriptionTargetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which subscription target is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateSubscriptionTargetRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which subscription target is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    CreateSubscriptionTargetRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manage access role that is used to create the subscription target.</p>
     */
    inline const Aws::String& GetManageAccessRole() const { return m_manageAccessRole; }
    inline bool ManageAccessRoleHasBeenSet() const { return m_manageAccessRoleHasBeenSet; }
    template<typename ManageAccessRoleT = Aws::String>
    void SetManageAccessRole(ManageAccessRoleT&& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = std::forward<ManageAccessRoleT>(value); }
    template<typename ManageAccessRoleT = Aws::String>
    CreateSubscriptionTargetRequest& WithManageAccessRole(ManageAccessRoleT&& value) { SetManageAccessRole(std::forward<ManageAccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the subscription target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSubscriptionTargetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the subscription target.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    CreateSubscriptionTargetRequest& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline const Aws::Vector<SubscriptionTargetForm>& GetSubscriptionTargetConfig() const { return m_subscriptionTargetConfig; }
    inline bool SubscriptionTargetConfigHasBeenSet() const { return m_subscriptionTargetConfigHasBeenSet; }
    template<typename SubscriptionTargetConfigT = Aws::Vector<SubscriptionTargetForm>>
    void SetSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig = std::forward<SubscriptionTargetConfigT>(value); }
    template<typename SubscriptionTargetConfigT = Aws::Vector<SubscriptionTargetForm>>
    CreateSubscriptionTargetRequest& WithSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { SetSubscriptionTargetConfig(std::forward<SubscriptionTargetConfigT>(value)); return *this;}
    template<typename SubscriptionTargetConfigT = SubscriptionTargetForm>
    CreateSubscriptionTargetRequest& AddSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.emplace_back(std::forward<SubscriptionTargetConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the subscription target.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    CreateSubscriptionTargetRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicableAssetTypes;
    bool m_applicableAssetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedPrincipals;
    bool m_authorizedPrincipalsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
