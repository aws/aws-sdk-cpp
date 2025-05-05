/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SubscriptionTargetForm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class UpdateSubscriptionTargetResult
  {
  public:
    AWS_DATAZONE_API UpdateSubscriptionTargetResult() = default;
    AWS_DATAZONE_API UpdateSubscriptionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateSubscriptionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The applicable asset types to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const { return m_applicableAssetTypes; }
    template<typename ApplicableAssetTypesT = Aws::Vector<Aws::String>>
    void SetApplicableAssetTypes(ApplicableAssetTypesT&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = std::forward<ApplicableAssetTypesT>(value); }
    template<typename ApplicableAssetTypesT = Aws::Vector<Aws::String>>
    UpdateSubscriptionTargetResult& WithApplicableAssetTypes(ApplicableAssetTypesT&& value) { SetApplicableAssetTypes(std::forward<ApplicableAssetTypesT>(value)); return *this;}
    template<typename ApplicableAssetTypesT = Aws::String>
    UpdateSubscriptionTargetResult& AddApplicableAssetTypes(ApplicableAssetTypesT&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.emplace_back(std::forward<ApplicableAssetTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorized principals to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action. Updates are supported in batches
     * of 5 at a time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const { return m_authorizedPrincipals; }
    template<typename AuthorizedPrincipalsT = Aws::Vector<Aws::String>>
    void SetAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = std::forward<AuthorizedPrincipalsT>(value); }
    template<typename AuthorizedPrincipalsT = Aws::Vector<Aws::String>>
    UpdateSubscriptionTargetResult& WithAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { SetAuthorizedPrincipals(std::forward<AuthorizedPrincipalsT>(value)); return *this;}
    template<typename AuthorizedPrincipalsT = Aws::String>
    UpdateSubscriptionTargetResult& AddAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.emplace_back(std::forward<AuthorizedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a subscription target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateSubscriptionTargetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    UpdateSubscriptionTargetResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription target
     * is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UpdateSubscriptionTargetResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment in which a subscription target is to be
     * updated.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateSubscriptionTargetResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the subscription target that is to be updated.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateSubscriptionTargetResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manage access role to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::String& GetManageAccessRole() const { return m_manageAccessRole; }
    template<typename ManageAccessRoleT = Aws::String>
    void SetManageAccessRole(ManageAccessRoleT&& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = std::forward<ManageAccessRoleT>(value); }
    template<typename ManageAccessRoleT = Aws::String>
    UpdateSubscriptionTargetResult& WithManageAccessRole(ManageAccessRoleT&& value) { SetManageAccessRole(std::forward<ManageAccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateSubscriptionTargetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project in which a subscription target is to be
     * updated.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    UpdateSubscriptionTargetResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    UpdateSubscriptionTargetResult& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration to be updated as part of the
     * <code>UpdateSubscriptionTarget</code> action.</p>
     */
    inline const Aws::Vector<SubscriptionTargetForm>& GetSubscriptionTargetConfig() const { return m_subscriptionTargetConfig; }
    template<typename SubscriptionTargetConfigT = Aws::Vector<SubscriptionTargetForm>>
    void SetSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig = std::forward<SubscriptionTargetConfigT>(value); }
    template<typename SubscriptionTargetConfigT = Aws::Vector<SubscriptionTargetForm>>
    UpdateSubscriptionTargetResult& WithSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { SetSubscriptionTargetConfig(std::forward<SubscriptionTargetConfigT>(value)); return *this;}
    template<typename SubscriptionTargetConfigT = SubscriptionTargetForm>
    UpdateSubscriptionTargetResult& AddSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.emplace_back(std::forward<SubscriptionTargetConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type to be updated as part of the <code>UpdateSubscriptionTarget</code>
     * action.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    UpdateSubscriptionTargetResult& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdateSubscriptionTargetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    UpdateSubscriptionTargetResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSubscriptionTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicableAssetTypes;
    bool m_applicableAssetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedPrincipals;
    bool m_authorizedPrincipalsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_manageAccessRole;
    bool m_manageAccessRoleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Vector<SubscriptionTargetForm> m_subscriptionTargetConfig;
    bool m_subscriptionTargetConfigHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
