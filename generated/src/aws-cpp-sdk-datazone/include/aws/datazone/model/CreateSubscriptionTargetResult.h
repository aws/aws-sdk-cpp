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


    ///@{
    /**
     * <p>The asset types that can be included in the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicableAssetTypes() const{ return m_applicableAssetTypes; }
    inline void SetApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { m_applicableAssetTypes = value; }
    inline void SetApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { m_applicableAssetTypes = std::move(value); }
    inline CreateSubscriptionTargetResult& WithApplicableAssetTypes(const Aws::Vector<Aws::String>& value) { SetApplicableAssetTypes(value); return *this;}
    inline CreateSubscriptionTargetResult& WithApplicableAssetTypes(Aws::Vector<Aws::String>&& value) { SetApplicableAssetTypes(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& AddApplicableAssetTypes(const Aws::String& value) { m_applicableAssetTypes.push_back(value); return *this; }
    inline CreateSubscriptionTargetResult& AddApplicableAssetTypes(Aws::String&& value) { m_applicableAssetTypes.push_back(std::move(value)); return *this; }
    inline CreateSubscriptionTargetResult& AddApplicableAssetTypes(const char* value) { m_applicableAssetTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorised principals of the subscription target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedPrincipals() const{ return m_authorizedPrincipals; }
    inline void SetAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { m_authorizedPrincipals = value; }
    inline void SetAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { m_authorizedPrincipals = std::move(value); }
    inline CreateSubscriptionTargetResult& WithAuthorizedPrincipals(const Aws::Vector<Aws::String>& value) { SetAuthorizedPrincipals(value); return *this;}
    inline CreateSubscriptionTargetResult& WithAuthorizedPrincipals(Aws::Vector<Aws::String>&& value) { SetAuthorizedPrincipals(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& AddAuthorizedPrincipals(const Aws::String& value) { m_authorizedPrincipals.push_back(value); return *this; }
    inline CreateSubscriptionTargetResult& AddAuthorizedPrincipals(Aws::String&& value) { m_authorizedPrincipals.push_back(std::move(value)); return *this; }
    inline CreateSubscriptionTargetResult& AddAuthorizedPrincipals(const char* value) { m_authorizedPrincipals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateSubscriptionTargetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateSubscriptionTargetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription target.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline CreateSubscriptionTargetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline CreateSubscriptionTargetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription target was
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline CreateSubscriptionTargetResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateSubscriptionTargetResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which the subscription target was created.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline CreateSubscriptionTargetResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateSubscriptionTargetResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription target.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateSubscriptionTargetResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateSubscriptionTargetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manage access role with which the subscription target was created.</p>
     */
    inline const Aws::String& GetManageAccessRole() const{ return m_manageAccessRole; }
    inline void SetManageAccessRole(const Aws::String& value) { m_manageAccessRole = value; }
    inline void SetManageAccessRole(Aws::String&& value) { m_manageAccessRole = std::move(value); }
    inline void SetManageAccessRole(const char* value) { m_manageAccessRole.assign(value); }
    inline CreateSubscriptionTargetResult& WithManageAccessRole(const Aws::String& value) { SetManageAccessRole(value); return *this;}
    inline CreateSubscriptionTargetResult& WithManageAccessRole(Aws::String&& value) { SetManageAccessRole(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithManageAccessRole(const char* value) { SetManageAccessRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the subscription target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSubscriptionTargetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSubscriptionTargetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>???</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline CreateSubscriptionTargetResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline CreateSubscriptionTargetResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the subscription target.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline void SetProvider(const Aws::String& value) { m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_provider.assign(value); }
    inline CreateSubscriptionTargetResult& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline CreateSubscriptionTargetResult& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the subscription target.</p>
     */
    inline const Aws::Vector<SubscriptionTargetForm>& GetSubscriptionTargetConfig() const{ return m_subscriptionTargetConfig; }
    inline void SetSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { m_subscriptionTargetConfig = value; }
    inline void SetSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { m_subscriptionTargetConfig = std::move(value); }
    inline CreateSubscriptionTargetResult& WithSubscriptionTargetConfig(const Aws::Vector<SubscriptionTargetForm>& value) { SetSubscriptionTargetConfig(value); return *this;}
    inline CreateSubscriptionTargetResult& WithSubscriptionTargetConfig(Aws::Vector<SubscriptionTargetForm>&& value) { SetSubscriptionTargetConfig(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& AddSubscriptionTargetConfig(const SubscriptionTargetForm& value) { m_subscriptionTargetConfig.push_back(value); return *this; }
    inline CreateSubscriptionTargetResult& AddSubscriptionTargetConfig(SubscriptionTargetForm&& value) { m_subscriptionTargetConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the subscription target.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline CreateSubscriptionTargetResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CreateSubscriptionTargetResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription target was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline CreateSubscriptionTargetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline CreateSubscriptionTargetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription target.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline CreateSubscriptionTargetResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline CreateSubscriptionTargetResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSubscriptionTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSubscriptionTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSubscriptionTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
