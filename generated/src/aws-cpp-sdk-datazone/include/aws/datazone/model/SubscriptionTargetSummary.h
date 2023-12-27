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
    AWS_DATAZONE_API SubscriptionTargetSummary();
    AWS_DATAZONE_API SubscriptionTargetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionTargetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const{ return m_applicableAssetTypes; }

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline bool ApplicableAssetTypesHasBeenSet() const { return m_applicableAssetTypesHasBeenSet; }

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline void SetApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = value; }

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline void SetApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes = std::move(value); }

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { SetApplicableAssetTypes(value); return *this;}

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { SetApplicableAssetTypes(std::move(value)); return *this;}

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddApplicableAssetTypes(const Aws::String& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(value); return *this; }

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddApplicableAssetTypes(Aws::String&& value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The asset types included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddApplicableAssetTypes(const char* value) { m_applicableAssetTypesHasBeenSet = true; m_applicableAssetTypes.push_back(value); return *this; }


    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const{ return m_authorizedPrincipals; }

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline bool AuthorizedPrincipalsHasBeenSet() const { return m_authorizedPrincipalsHasBeenSet; }

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline void SetAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = value; }

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline void SetAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals = std::move(value); }

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { SetAuthorizedPrincipals(value); return *this;}

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { SetAuthorizedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddAuthorizedPrincipals(const Aws::String& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(value); return *this; }

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddAuthorizedPrincipals(Aws::String&& value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The authorized principals included in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddAuthorizedPrincipals(const char* value) { m_authorizedPrincipalsHasBeenSet = true; m_authorizedPrincipals.push_back(value); return *this; }


    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline SubscriptionTargetSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline SubscriptionTargetSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline SubscriptionTargetSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline SubscriptionTargetSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription target
     * exists.</p>
     */
    inline SubscriptionTargetSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline const Aws::String& GetManageAccessRole() const{ return m_manageAccessRole; }

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline bool ManageAccessRoleHasBeenSet() const { return m_manageAccessRoleHasBeenSet; }

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline void SetManageAccessRole(const Aws::String& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = value; }

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline void SetManageAccessRole(Aws::String&& value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole = std::move(value); }

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline void SetManageAccessRole(const char* value) { m_manageAccessRoleHasBeenSet = true; m_manageAccessRole.assign(value); }

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithManageAccessRole(const Aws::String& value) { SetManageAccessRole(value); return *this;}

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithManageAccessRole(Aws::String&& value) { SetManageAccessRole(std::move(value)); return *this;}

    /**
     * <p>The manage access role specified in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithManageAccessRole(const char* value) { SetManageAccessRole(value); return *this;}


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
    inline SubscriptionTargetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project specified in the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}


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
    inline SubscriptionTargetSummary& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithProvider(const char* value) { SetProvider(value); return *this;}


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
    inline SubscriptionTargetSummary& WithSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { SetSubscriptionTargetConfig(value); return *this;}

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { SetSubscriptionTargetConfig(std::move(value)); return *this;}

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddSubscriptionTargetConfig(const SubscriptionTargetForm& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.push_back(value); return *this; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& AddSubscriptionTargetConfig(SubscriptionTargetForm&& value) { m_subscriptionTargetConfigHasBeenSet = true; m_subscriptionTargetConfig.push_back(std::move(value)); return *this; }


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
    inline SubscriptionTargetSummary& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline SubscriptionTargetSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline SubscriptionTargetSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline SubscriptionTargetSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applicableAssetTypes;
    bool m_applicableAssetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedPrincipals;
    bool m_authorizedPrincipalsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
