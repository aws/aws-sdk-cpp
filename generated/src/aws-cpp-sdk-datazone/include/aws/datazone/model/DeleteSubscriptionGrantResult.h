﻿/**
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
  class DeleteSubscriptionGrantResult
  {
  public:
    AWS_DATAZONE_API DeleteSubscriptionGrantResult();
    AWS_DATAZONE_API DeleteSubscriptionGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API DeleteSubscriptionGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assets for which the subsctiption grant that is deleted gave access.</p>
     */
    inline const Aws::Vector<SubscribedAsset>& GetAssets() const{ return m_assets; }
    inline void SetAssets(const Aws::Vector<SubscribedAsset>& value) { m_assets = value; }
    inline void SetAssets(Aws::Vector<SubscribedAsset>&& value) { m_assets = std::move(value); }
    inline DeleteSubscriptionGrantResult& WithAssets(const Aws::Vector<SubscribedAsset>& value) { SetAssets(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithAssets(Aws::Vector<SubscribedAsset>&& value) { SetAssets(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& AddAssets(const SubscribedAsset& value) { m_assets.push_back(value); return *this; }
    inline DeleteSubscriptionGrantResult& AddAssets(SubscribedAsset&& value) { m_assets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription grant that is deleted was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DeleteSubscriptionGrantResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription grant that is
     * deleted.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline DeleteSubscriptionGrantResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant is
     * deleted.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline DeleteSubscriptionGrantResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to which the subscription is deleted.</p>
     */
    inline const GrantedEntity& GetGrantedEntity() const{ return m_grantedEntity; }
    inline void SetGrantedEntity(const GrantedEntity& value) { m_grantedEntity = value; }
    inline void SetGrantedEntity(GrantedEntity&& value) { m_grantedEntity = std::move(value); }
    inline DeleteSubscriptionGrantResult& WithGrantedEntity(const GrantedEntity& value) { SetGrantedEntity(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithGrantedEntity(GrantedEntity&& value) { SetGrantedEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription grant that is deleted.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteSubscriptionGrantResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription grant that is deleted.</p>
     */
    inline const SubscriptionGrantOverallStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SubscriptionGrantOverallStatus& value) { m_status = value; }
    inline void SetStatus(SubscriptionGrantOverallStatus&& value) { m_status = std::move(value); }
    inline DeleteSubscriptionGrantResult& WithStatus(const SubscriptionGrantOverallStatus& value) { SetStatus(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithStatus(SubscriptionGrantOverallStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subsctiption whose subscription grant is to be
     * deleted.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionId = value; }
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionId = std::move(value); }
    inline void SetSubscriptionId(const char* value) { m_subscriptionId.assign(value); }
    inline DeleteSubscriptionGrantResult& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription target associated with the subscription grant that
     * is deleted.</p>
     */
    inline const Aws::String& GetSubscriptionTargetId() const{ return m_subscriptionTargetId; }
    inline void SetSubscriptionTargetId(const Aws::String& value) { m_subscriptionTargetId = value; }
    inline void SetSubscriptionTargetId(Aws::String&& value) { m_subscriptionTargetId = std::move(value); }
    inline void SetSubscriptionTargetId(const char* value) { m_subscriptionTargetId.assign(value); }
    inline DeleteSubscriptionGrantResult& WithSubscriptionTargetId(const Aws::String& value) { SetSubscriptionTargetId(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithSubscriptionTargetId(Aws::String&& value) { SetSubscriptionTargetId(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithSubscriptionTargetId(const char* value) { SetSubscriptionTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription grant that is deleted was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline DeleteSubscriptionGrantResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription grant that is
     * deleted.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline DeleteSubscriptionGrantResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteSubscriptionGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteSubscriptionGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteSubscriptionGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
