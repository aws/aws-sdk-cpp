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
  class CreateSubscriptionTargetResult
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionTargetResult();
    AWS_DATAZONE_API CreateSubscriptionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateSubscriptionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const{ return m_applicableAssetTypes; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline void SetApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { m_applicableAssetTypes = value; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline void SetApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { m_applicableAssetTypes = std::move(value); }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { SetApplicableAssetTypes(value); return *this;}

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { SetApplicableAssetTypes(std::move(value)); return *this;}

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddApplicableAssetTypes(const Aws::String& value) { m_applicableAssetTypes.push_back(value); return *this; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddApplicableAssetTypes(Aws::String&& value) { m_applicableAssetTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddApplicableAssetTypes(const char* value) { m_applicableAssetTypes.push_back(value); return *this; }


    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const{ return m_authorizedPrincipals; }

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline void SetAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { m_authorizedPrincipals = value; }

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline void SetAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { m_authorizedPrincipals = std::move(value); }

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { SetAuthorizedPrincipals(value); return *this;}

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { SetAuthorizedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddAuthorizedPrincipals(const Aws::String& value) { m_authorizedPrincipals.push_back(value); return *this; }

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddAuthorizedPrincipals(Aws::String&& value) { m_authorizedPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddAuthorizedPrincipals(const char* value) { m_authorizedPrincipals.push_back(value); return *this; }


    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline CreateSubscriptionTargetResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline CreateSubscriptionTargetResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline CreateSubscriptionTargetResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The ID of the subscription target.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the subscription target.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the subscription target.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the subscription target.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline const Aws::String& GetManageAccessRole() const{ return m_manageAccessRole; }

    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline void SetManageAccessRole(const Aws::String& value) { m_manageAccessRole = value; }

    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline void SetManageAccessRole(Aws::String&& value) { m_manageAccessRole = std::move(value); }

    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline void SetManageAccessRole(const char* value) { m_manageAccessRole.assign(value); }

    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithManageAccessRole(const Aws::String& value) { SetManageAccessRole(value); return *this;}

    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithManageAccessRole(Aws::String&& value) { SetManageAccessRole(std::move(value)); return *this;}

    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline CreateSubscriptionTargetResult& WithManageAccessRole(const char* value) { SetManageAccessRole(value); return *this;}


    /**
     * <p>The name of the subscription target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>???</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>???</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>???</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>???</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>???</p>
     */
    inline CreateSubscriptionTargetResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>???</p>
     */
    inline CreateSubscriptionTargetResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>???</p>
     */
    inline CreateSubscriptionTargetResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The provider of the subscription target.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_provider = value; }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_provider = std::move(value); }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline void SetProvider(const char* value) { m_provider.assign(value); }

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline const Aws::Vector<SubscriptionTargetForm>& GetSubscriptionTargetConfig() const{ return m_subscriptionTargetConfig; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline void SetSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { m_subscriptionTargetConfig = value; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline void SetSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { m_subscriptionTargetConfig = std::move(value); }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { SetSubscriptionTargetConfig(value); return *this;}

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { SetSubscriptionTargetConfig(std::move(value)); return *this;}

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddSubscriptionTargetConfig(const SubscriptionTargetForm& value) { m_subscriptionTargetConfig.push_back(value); return *this; }

    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& AddSubscriptionTargetConfig(SubscriptionTargetForm&& value) { m_subscriptionTargetConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of the subscription target.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline void SetType(const Aws::String& value) { m_type = value; }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline void SetType(const char* value) { m_type.assign(value); }

    /**
     * <p>The type of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline CreateSubscriptionTargetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline CreateSubscriptionTargetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline CreateSubscriptionTargetResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSubscriptionTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSubscriptionTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSubscriptionTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applicableAssetTypes;

    Aws::Vector<Aws::String> m_authorizedPrincipals;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    Aws::String m_environmentId;

    Aws::String m_id;

    Aws::String m_manageAccessRole;

    Aws::String m_name;

    Aws::String m_projectId;

    Aws::String m_provider;

    Aws::Vector<SubscriptionTargetForm> m_subscriptionTargetConfig;

    Aws::String m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
