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
  class CreateSubscriptionGrantResult
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionGrantResult() = default;
    AWS_DATAZONE_API CreateSubscriptionGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateSubscriptionGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assets for which the subscription grant is created.</p>
     */
    inline const Aws::Vector<SubscribedAsset>& GetAssets() const { return m_assets; }
    template<typename AssetsT = Aws::Vector<SubscribedAsset>>
    void SetAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets = std::forward<AssetsT>(value); }
    template<typename AssetsT = Aws::Vector<SubscribedAsset>>
    CreateSubscriptionGrantResult& WithAssets(AssetsT&& value) { SetAssets(std::forward<AssetsT>(value)); return *this;}
    template<typename AssetsT = SubscribedAsset>
    CreateSubscriptionGrantResult& AddAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets.emplace_back(std::forward<AssetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp of when the subscription grant is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateSubscriptionGrantResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription grant.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    CreateSubscriptionGrantResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateSubscriptionGrantResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline const GrantedEntity& GetGrantedEntity() const { return m_grantedEntity; }
    template<typename GrantedEntityT = GrantedEntity>
    void SetGrantedEntity(GrantedEntityT&& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = std::forward<GrantedEntityT>(value); }
    template<typename GrantedEntityT = GrantedEntity>
    CreateSubscriptionGrantResult& WithGrantedEntity(GrantedEntityT&& value) { SetGrantedEntity(std::forward<GrantedEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateSubscriptionGrantResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription grant.</p>
     */
    inline SubscriptionGrantOverallStatus GetStatus() const { return m_status; }
    inline void SetStatus(SubscriptionGrantOverallStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateSubscriptionGrantResult& WithStatus(SubscriptionGrantOverallStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription target for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetSubscriptionTargetId() const { return m_subscriptionTargetId; }
    template<typename SubscriptionTargetIdT = Aws::String>
    void SetSubscriptionTargetId(SubscriptionTargetIdT&& value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId = std::forward<SubscriptionTargetIdT>(value); }
    template<typename SubscriptionTargetIdT = Aws::String>
    CreateSubscriptionGrantResult& WithSubscriptionTargetId(SubscriptionTargetIdT&& value) { SetSubscriptionTargetId(std::forward<SubscriptionTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when the subscription grant was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CreateSubscriptionGrantResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    CreateSubscriptionGrantResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSubscriptionGrantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SubscribedAsset> m_assets;
    bool m_assetsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    GrantedEntity m_grantedEntity;
    bool m_grantedEntityHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SubscriptionGrantOverallStatus m_status{SubscriptionGrantOverallStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionTargetId;
    bool m_subscriptionTargetIdHasBeenSet = false;

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
