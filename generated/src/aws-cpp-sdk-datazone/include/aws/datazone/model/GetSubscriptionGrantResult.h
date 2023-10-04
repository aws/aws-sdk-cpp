/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GrantedEntity.h>
#include <aws/datazone/model/SubscriptionGrantOverallStatus.h>
#include <aws/datazone/model/SubscribedAsset.h>
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
  class GetSubscriptionGrantResult
  {
  public:
    AWS_DATAZONE_API GetSubscriptionGrantResult();
    AWS_DATAZONE_API GetSubscriptionGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetSubscriptionGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline const Aws::Vector<SubscribedAsset>& GetAssets() const{ return m_assets; }

    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline void SetAssets(const Aws::Vector<SubscribedAsset>& value) { m_assets = value; }

    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline void SetAssets(Aws::Vector<SubscribedAsset>&& value) { m_assets = std::move(value); }

    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline GetSubscriptionGrantResult& WithAssets(const Aws::Vector<SubscribedAsset>& value) { SetAssets(value); return *this;}

    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline GetSubscriptionGrantResult& WithAssets(Aws::Vector<SubscribedAsset>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline GetSubscriptionGrantResult& AddAssets(const SubscribedAsset& value) { m_assets.push_back(value); return *this; }

    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline GetSubscriptionGrantResult& AddAssets(SubscribedAsset&& value) { m_assets.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp of when the subscription grant is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the subscription grant is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the subscription grant is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription grant is created.</p>
     */
    inline GetSubscriptionGrantResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription grant is created.</p>
     */
    inline GetSubscriptionGrantResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline GetSubscriptionGrantResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline GetSubscriptionGrantResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant
     * exists.</p>
     */
    inline GetSubscriptionGrantResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline const GrantedEntity& GetGrantedEntity() const{ return m_grantedEntity; }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline void SetGrantedEntity(const GrantedEntity& value) { m_grantedEntity = value; }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline void SetGrantedEntity(GrantedEntity&& value) { m_grantedEntity = std::move(value); }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline GetSubscriptionGrantResult& WithGrantedEntity(const GrantedEntity& value) { SetGrantedEntity(value); return *this;}

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline GetSubscriptionGrantResult& WithGrantedEntity(GrantedEntity&& value) { SetGrantedEntity(std::move(value)); return *this;}


    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the subscription grant.</p>
     */
    inline const SubscriptionGrantOverallStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline void SetStatus(const SubscriptionGrantOverallStatus& value) { m_status = value; }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline void SetStatus(SubscriptionGrantOverallStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithStatus(const SubscriptionGrantOverallStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithStatus(SubscriptionGrantOverallStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The identifier of the subscription.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionId = value; }

    /**
     * <p>The identifier of the subscription.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionId = std::move(value); }

    /**
     * <p>The identifier of the subscription.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionId.assign(value); }

    /**
     * <p>The identifier of the subscription.</p>
     */
    inline GetSubscriptionGrantResult& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The identifier of the subscription.</p>
     */
    inline GetSubscriptionGrantResult& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription.</p>
     */
    inline GetSubscriptionGrantResult& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}


    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline const Aws::String& GetSubscriptionTargetId() const{ return m_subscriptionTargetId; }

    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline void SetSubscriptionTargetId(const Aws::String& value) { m_subscriptionTargetId = value; }

    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline void SetSubscriptionTargetId(Aws::String&& value) { m_subscriptionTargetId = std::move(value); }

    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline void SetSubscriptionTargetId(const char* value) { m_subscriptionTargetId.assign(value); }

    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithSubscriptionTargetId(const Aws::String& value) { SetSubscriptionTargetId(value); return *this;}

    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithSubscriptionTargetId(Aws::String&& value) { SetSubscriptionTargetId(std::move(value)); return *this;}

    /**
     * <p>The subscription target ID associated with the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithSubscriptionTargetId(const char* value) { SetSubscriptionTargetId(value); return *this;}


    /**
     * <p>The timestamp of when the subscription grant was upated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the subscription grant was upated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the subscription grant was upated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription grant was upated.</p>
     */
    inline GetSubscriptionGrantResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription grant was upated.</p>
     */
    inline GetSubscriptionGrantResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline GetSubscriptionGrantResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSubscriptionGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSubscriptionGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSubscriptionGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SubscribedAsset> m_assets;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    GrantedEntity m_grantedEntity;

    Aws::String m_id;

    SubscriptionGrantOverallStatus m_status;

    Aws::String m_subscriptionId;

    Aws::String m_subscriptionTargetId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
