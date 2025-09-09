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
   * <p>The details of the subscription grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscriptionGrantSummary">AWS
   * API Reference</a></p>
   */
  class SubscriptionGrantSummary
  {
  public:
    AWS_DATAZONE_API SubscriptionGrantSummary() = default;
    AWS_DATAZONE_API SubscriptionGrantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionGrantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline const Aws::Vector<SubscribedAsset>& GetAssets() const { return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    template<typename AssetsT = Aws::Vector<SubscribedAsset>>
    void SetAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets = std::forward<AssetsT>(value); }
    template<typename AssetsT = Aws::Vector<SubscribedAsset>>
    SubscriptionGrantSummary& WithAssets(AssetsT&& value) { SetAssets(std::forward<AssetsT>(value)); return *this;}
    template<typename AssetsT = SubscribedAsset>
    SubscriptionGrantSummary& AddAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets.emplace_back(std::forward<AssetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SubscriptionGrantSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    SubscriptionGrantSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SubscriptionGrantSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline const GrantedEntity& GetGrantedEntity() const { return m_grantedEntity; }
    inline bool GrantedEntityHasBeenSet() const { return m_grantedEntityHasBeenSet; }
    template<typename GrantedEntityT = GrantedEntity>
    void SetGrantedEntity(GrantedEntityT&& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = std::forward<GrantedEntityT>(value); }
    template<typename GrantedEntityT = GrantedEntity>
    SubscriptionGrantSummary& WithGrantedEntity(GrantedEntityT&& value) { SetGrantedEntity(std::forward<GrantedEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SubscriptionGrantSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription grant.</p>
     */
    inline SubscriptionGrantOverallStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriptionGrantOverallStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SubscriptionGrantSummary& WithStatus(SubscriptionGrantOverallStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline const Aws::String& GetSubscriptionTargetId() const { return m_subscriptionTargetId; }
    inline bool SubscriptionTargetIdHasBeenSet() const { return m_subscriptionTargetIdHasBeenSet; }
    template<typename SubscriptionTargetIdT = Aws::String>
    void SetSubscriptionTargetId(SubscriptionTargetIdT&& value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId = std::forward<SubscriptionTargetIdT>(value); }
    template<typename SubscriptionTargetIdT = Aws::String>
    SubscriptionGrantSummary& WithSubscriptionTargetId(SubscriptionTargetIdT&& value) { SetSubscriptionTargetId(std::forward<SubscriptionTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription grant was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SubscriptionGrantSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    SubscriptionGrantSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
