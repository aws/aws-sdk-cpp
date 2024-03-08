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
    AWS_DATAZONE_API SubscriptionGrantSummary();
    AWS_DATAZONE_API SubscriptionGrantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionGrantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline const Aws::Vector<SubscribedAsset>& GetAssets() const{ return m_assets; }

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline void SetAssets(const Aws::Vector<SubscribedAsset>& value) { m_assetsHasBeenSet = true; m_assets = value; }

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline void SetAssets(Aws::Vector<SubscribedAsset>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithAssets(const Aws::Vector<SubscribedAsset>& value) { SetAssets(value); return *this;}

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithAssets(Aws::Vector<SubscribedAsset>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& AddAssets(const SubscribedAsset& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }

    /**
     * <p>The assets included in the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& AddAssets(SubscribedAsset&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline SubscriptionGrantSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when a subscription grant was created.</p>
     */
    inline SubscriptionGrantSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The datazone user who created the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline SubscriptionGrantSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline SubscriptionGrantSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * exists.</p>
     */
    inline SubscriptionGrantSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline const GrantedEntity& GetGrantedEntity() const{ return m_grantedEntity; }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline bool GrantedEntityHasBeenSet() const { return m_grantedEntityHasBeenSet; }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline void SetGrantedEntity(const GrantedEntity& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = value; }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline void SetGrantedEntity(GrantedEntity&& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = std::move(value); }

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline SubscriptionGrantSummary& WithGrantedEntity(const GrantedEntity& value) { SetGrantedEntity(value); return *this;}

    /**
     * <p>The entity to which the subscription is granted.</p>
     */
    inline SubscriptionGrantSummary& WithGrantedEntity(GrantedEntity&& value) { SetGrantedEntity(std::move(value)); return *this;}


    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the subscription grant.</p>
     */
    inline const SubscriptionGrantOverallStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline void SetStatus(const SubscriptionGrantOverallStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline void SetStatus(SubscriptionGrantOverallStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithStatus(const SubscriptionGrantOverallStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithStatus(SubscriptionGrantOverallStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}


    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline const Aws::String& GetSubscriptionTargetId() const{ return m_subscriptionTargetId; }

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline bool SubscriptionTargetIdHasBeenSet() const { return m_subscriptionTargetIdHasBeenSet; }

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline void SetSubscriptionTargetId(const Aws::String& value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId = value; }

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline void SetSubscriptionTargetId(Aws::String&& value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId = std::move(value); }

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline void SetSubscriptionTargetId(const char* value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId.assign(value); }

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithSubscriptionTargetId(const Aws::String& value) { SetSubscriptionTargetId(value); return *this;}

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithSubscriptionTargetId(Aws::String&& value) { SetSubscriptionTargetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target of the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithSubscriptionTargetId(const char* value) { SetSubscriptionTargetId(value); return *this;}


    /**
     * <p>The timestampf of when the subscription grant was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestampf of when the subscription grant was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestampf of when the subscription grant was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestampf of when the subscription grant was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestampf of when the subscription grant was updated.</p>
     */
    inline SubscriptionGrantSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestampf of when the subscription grant was updated.</p>
     */
    inline SubscriptionGrantSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription grant.</p>
     */
    inline SubscriptionGrantSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Vector<SubscribedAsset> m_assets;
    bool m_assetsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    GrantedEntity m_grantedEntity;
    bool m_grantedEntityHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SubscriptionGrantOverallStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    Aws::String m_subscriptionTargetId;
    bool m_subscriptionTargetIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
