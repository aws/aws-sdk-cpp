/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SubscriptionStatus.h>
#include <aws/datazone/model/SubscribedListing.h>
#include <aws/datazone/model/SubscribedPrincipal.h>
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
   * <p>The details of the subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscriptionSummary">AWS
   * API Reference</a></p>
   */
  class SubscriptionSummary
  {
  public:
    AWS_DATAZONE_API SubscriptionSummary();
    AWS_DATAZONE_API SubscriptionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SubscriptionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SubscriptionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline SubscriptionSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline SubscriptionSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline SubscriptionSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline SubscriptionSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline SubscriptionSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline SubscriptionSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SubscriptionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SubscriptionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SubscriptionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retain permissions included in the subscription.</p>
     */
    inline bool GetRetainPermissions() const{ return m_retainPermissions; }
    inline bool RetainPermissionsHasBeenSet() const { return m_retainPermissionsHasBeenSet; }
    inline void SetRetainPermissions(bool value) { m_retainPermissionsHasBeenSet = true; m_retainPermissions = value; }
    inline SubscriptionSummary& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription.</p>
     */
    inline const SubscriptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SubscriptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SubscriptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SubscriptionSummary& WithStatus(const SubscriptionStatus& value) { SetStatus(value); return *this;}
    inline SubscriptionSummary& WithStatus(SubscriptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listing included in the subscription.</p>
     */
    inline const SubscribedListing& GetSubscribedListing() const{ return m_subscribedListing; }
    inline bool SubscribedListingHasBeenSet() const { return m_subscribedListingHasBeenSet; }
    inline void SetSubscribedListing(const SubscribedListing& value) { m_subscribedListingHasBeenSet = true; m_subscribedListing = value; }
    inline void SetSubscribedListing(SubscribedListing&& value) { m_subscribedListingHasBeenSet = true; m_subscribedListing = std::move(value); }
    inline SubscriptionSummary& WithSubscribedListing(const SubscribedListing& value) { SetSubscribedListing(value); return *this;}
    inline SubscriptionSummary& WithSubscribedListing(SubscribedListing&& value) { SetSubscribedListing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal included in the subscription.</p>
     */
    inline const SubscribedPrincipal& GetSubscribedPrincipal() const{ return m_subscribedPrincipal; }
    inline bool SubscribedPrincipalHasBeenSet() const { return m_subscribedPrincipalHasBeenSet; }
    inline void SetSubscribedPrincipal(const SubscribedPrincipal& value) { m_subscribedPrincipalHasBeenSet = true; m_subscribedPrincipal = value; }
    inline void SetSubscribedPrincipal(SubscribedPrincipal&& value) { m_subscribedPrincipalHasBeenSet = true; m_subscribedPrincipal = std::move(value); }
    inline SubscriptionSummary& WithSubscribedPrincipal(const SubscribedPrincipal& value) { SetSubscribedPrincipal(value); return *this;}
    inline SubscriptionSummary& WithSubscribedPrincipal(SubscribedPrincipal&& value) { SetSubscribedPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request for the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionRequestId() const{ return m_subscriptionRequestId; }
    inline bool SubscriptionRequestIdHasBeenSet() const { return m_subscriptionRequestIdHasBeenSet; }
    inline void SetSubscriptionRequestId(const Aws::String& value) { m_subscriptionRequestIdHasBeenSet = true; m_subscriptionRequestId = value; }
    inline void SetSubscriptionRequestId(Aws::String&& value) { m_subscriptionRequestIdHasBeenSet = true; m_subscriptionRequestId = std::move(value); }
    inline void SetSubscriptionRequestId(const char* value) { m_subscriptionRequestIdHasBeenSet = true; m_subscriptionRequestId.assign(value); }
    inline SubscriptionSummary& WithSubscriptionRequestId(const Aws::String& value) { SetSubscriptionRequestId(value); return *this;}
    inline SubscriptionSummary& WithSubscriptionRequestId(Aws::String&& value) { SetSubscriptionRequestId(std::move(value)); return *this;}
    inline SubscriptionSummary& WithSubscriptionRequestId(const char* value) { SetSubscriptionRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline SubscriptionSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline SubscriptionSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline SubscriptionSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline SubscriptionSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline SubscriptionSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_retainPermissions;
    bool m_retainPermissionsHasBeenSet = false;

    SubscriptionStatus m_status;
    bool m_statusHasBeenSet = false;

    SubscribedListing m_subscribedListing;
    bool m_subscribedListingHasBeenSet = false;

    SubscribedPrincipal m_subscribedPrincipal;
    bool m_subscribedPrincipalHasBeenSet = false;

    Aws::String m_subscriptionRequestId;
    bool m_subscriptionRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
