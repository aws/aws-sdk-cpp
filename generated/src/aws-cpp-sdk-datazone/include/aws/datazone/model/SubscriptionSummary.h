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
    AWS_DATAZONE_API SubscriptionSummary() = default;
    AWS_DATAZONE_API SubscriptionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SubscriptionSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    SubscriptionSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SubscriptionSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SubscriptionSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retain permissions included in the subscription.</p>
     */
    inline bool GetRetainPermissions() const { return m_retainPermissions; }
    inline bool RetainPermissionsHasBeenSet() const { return m_retainPermissionsHasBeenSet; }
    inline void SetRetainPermissions(bool value) { m_retainPermissionsHasBeenSet = true; m_retainPermissions = value; }
    inline SubscriptionSummary& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription.</p>
     */
    inline SubscriptionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriptionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SubscriptionSummary& WithStatus(SubscriptionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listing included in the subscription.</p>
     */
    inline const SubscribedListing& GetSubscribedListing() const { return m_subscribedListing; }
    inline bool SubscribedListingHasBeenSet() const { return m_subscribedListingHasBeenSet; }
    template<typename SubscribedListingT = SubscribedListing>
    void SetSubscribedListing(SubscribedListingT&& value) { m_subscribedListingHasBeenSet = true; m_subscribedListing = std::forward<SubscribedListingT>(value); }
    template<typename SubscribedListingT = SubscribedListing>
    SubscriptionSummary& WithSubscribedListing(SubscribedListingT&& value) { SetSubscribedListing(std::forward<SubscribedListingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal included in the subscription.</p>
     */
    inline const SubscribedPrincipal& GetSubscribedPrincipal() const { return m_subscribedPrincipal; }
    inline bool SubscribedPrincipalHasBeenSet() const { return m_subscribedPrincipalHasBeenSet; }
    template<typename SubscribedPrincipalT = SubscribedPrincipal>
    void SetSubscribedPrincipal(SubscribedPrincipalT&& value) { m_subscribedPrincipalHasBeenSet = true; m_subscribedPrincipal = std::forward<SubscribedPrincipalT>(value); }
    template<typename SubscribedPrincipalT = SubscribedPrincipal>
    SubscriptionSummary& WithSubscribedPrincipal(SubscribedPrincipalT&& value) { SetSubscribedPrincipal(std::forward<SubscribedPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request for the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionRequestId() const { return m_subscriptionRequestId; }
    inline bool SubscriptionRequestIdHasBeenSet() const { return m_subscriptionRequestIdHasBeenSet; }
    template<typename SubscriptionRequestIdT = Aws::String>
    void SetSubscriptionRequestId(SubscriptionRequestIdT&& value) { m_subscriptionRequestIdHasBeenSet = true; m_subscriptionRequestId = std::forward<SubscriptionRequestIdT>(value); }
    template<typename SubscriptionRequestIdT = Aws::String>
    SubscriptionSummary& WithSubscriptionRequestId(SubscriptionRequestIdT&& value) { SetSubscriptionRequestId(std::forward<SubscriptionRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SubscriptionSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    SubscriptionSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_retainPermissions{false};
    bool m_retainPermissionsHasBeenSet = false;

    SubscriptionStatus m_status{SubscriptionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SubscribedListing m_subscribedListing;
    bool m_subscribedListingHasBeenSet = false;

    SubscribedPrincipal m_subscribedPrincipal;
    bool m_subscribedPrincipalHasBeenSet = false;

    Aws::String m_subscriptionRequestId;
    bool m_subscriptionRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
