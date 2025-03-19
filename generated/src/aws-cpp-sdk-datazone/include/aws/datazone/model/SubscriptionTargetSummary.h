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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the subscription target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscriptionTargetSummary">AWS
   * API Reference</a></p>
   */
  class SubscriptionTargetSummary
  {
  public:
    AWS_DATAZONE_API SubscriptionTargetSummary() = default;
    AWS_DATAZONE_API SubscriptionTargetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionTargetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const { return m_applicableAssetTypes; }
    inline bool ApplicableAssetTypesHasBeenSet() const { return m_applicableAssetTypesHasBeenSet; }
    template<typename ApplicableAssetTypesT = Aws::Vector<Aws::String>>
    void SetApplicableAssetTypes(ApplicableAssetTypesT&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = std::forward<ApplicableAssetTypesT>(value); }
    template<typename ApplicableAssetTypesT = Aws::Vector<Aws::String>>
    SubscriptionTargetSummary& WithApplicableAssetTypes(ApplicableAssetTypesT&& value) { SetApplicableAssetTypes(std::forward<ApplicableAssetTypesT>(value)); return *this;}
    template<typename ApplicableAssetTypesT = Aws::String>
    SubscriptionTargetSummary& AddApplicableAssetTypes(ApplicableAssetTypesT&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.emplace_back(std::forward<ApplicableAssetTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const { return m_authorizedPrincipals; }
    inline bool AuthorizedPrincipalsHasBeenSet() const { return m_authorizedPrincipalsHasBeenSet; }
    template<typename AuthorizedPrincipalsT = Aws::Vector<Aws::String>>
    void SetAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = std::forward<AuthorizedPrincipalsT>(value); }
    template<typename AuthorizedPrincipalsT = Aws::Vector<Aws::String>>
    SubscriptionTargetSummary& WithAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { SetAuthorizedPrincipals(std::forward<AuthorizedPrincipalsT>(value)); return *this;}
    template<typename AuthorizedPrincipalsT = Aws::String>
    SubscriptionTargetSummary& AddAuthorizedPrincipals(AuthorizedPrincipalsT&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.emplace_back(std::forward<AuthorizedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SubscriptionTargetSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    SubscriptionTargetSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SubscriptionTargetSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    SubscriptionTargetSummary& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SubscriptionTargetSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline const Aws::String& GetManageAccessRole() const { return m_manageAccessRole; }
    inline bool ManageAccessRoleHasBeenSet() const { return m_manageAccessRoleHasBeenSet; }
    template<typename ManageAccessRoleT = Aws::String>
    void SetManageAccessRole(ManageAccessRoleT&& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = std::forward<ManageAccessRoleT>(value); }
    template<typename ManageAccessRoleT = Aws::String>
    SubscriptionTargetSummary& WithManageAccessRole(ManageAccessRoleT&& value) { SetManageAccessRole(std::forward<ManageAccessRoleT>(value)); return *this;}
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
    SubscriptionTargetSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    SubscriptionTargetSummary& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
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
    SubscriptionTargetSummary& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
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
    SubscriptionTargetSummary& WithSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { SetSubscriptionTargetConfig(std::forward<SubscriptionTargetConfigT>(value)); return *this;}
    template<typename SubscriptionTargetConfigT = SubscriptionTargetForm>
    SubscriptionTargetSummary& AddSubscriptionTargetConfig(SubscriptionTargetConfigT&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.emplace_back(std::forward<SubscriptionTargetConfigT>(value)); return *this; }
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
    SubscriptionTargetSummary& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SubscriptionTargetSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    SubscriptionTargetSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
