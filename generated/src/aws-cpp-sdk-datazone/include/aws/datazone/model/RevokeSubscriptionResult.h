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
  class RevokeSubscriptionResult
  {
  public:
    AWS_DATAZONE_API RevokeSubscriptionResult() = default;
    AWS_DATAZONE_API RevokeSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API RevokeSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the subscription was revoked.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RevokeSubscriptionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user who revoked the subscription.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    RevokeSubscriptionResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    RevokeSubscriptionResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RevokeSubscriptionResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether permissions are retained when the subscription is
     * revoked.</p>
     */
    inline bool GetRetainPermissions() const { return m_retainPermissions; }
    inline void SetRetainPermissions(bool value) { m_retainPermissionsHasBeenSet = true; m_retainPermissions = value; }
    inline RevokeSubscriptionResult& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the revoked subscription.</p>
     */
    inline SubscriptionStatus GetStatus() const { return m_status; }
    inline void SetStatus(SubscriptionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RevokeSubscriptionResult& WithStatus(SubscriptionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscribed listing of the revoked subscription.</p>
     */
    inline const SubscribedListing& GetSubscribedListing() const { return m_subscribedListing; }
    template<typename SubscribedListingT = SubscribedListing>
    void SetSubscribedListing(SubscribedListingT&& value) { m_subscribedListingHasBeenSet = true; m_subscribedListing = std::forward<SubscribedListingT>(value); }
    template<typename SubscribedListingT = SubscribedListing>
    RevokeSubscriptionResult& WithSubscribedListing(SubscribedListingT&& value) { SetSubscribedListing(std::forward<SubscribedListingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscribed principal of the revoked subscription.</p>
     */
    inline const SubscribedPrincipal& GetSubscribedPrincipal() const { return m_subscribedPrincipal; }
    template<typename SubscribedPrincipalT = SubscribedPrincipal>
    void SetSubscribedPrincipal(SubscribedPrincipalT&& value) { m_subscribedPrincipalHasBeenSet = true; m_subscribedPrincipal = std::forward<SubscribedPrincipalT>(value); }
    template<typename SubscribedPrincipalT = SubscribedPrincipal>
    RevokeSubscriptionResult& WithSubscribedPrincipal(SubscribedPrincipalT&& value) { SetSubscribedPrincipal(std::forward<SubscribedPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request for the revoked subscription.</p>
     */
    inline const Aws::String& GetSubscriptionRequestId() const { return m_subscriptionRequestId; }
    template<typename SubscriptionRequestIdT = Aws::String>
    void SetSubscriptionRequestId(SubscriptionRequestIdT&& value) { m_subscriptionRequestIdHasBeenSet = true; m_subscriptionRequestId = std::forward<SubscriptionRequestIdT>(value); }
    template<typename SubscriptionRequestIdT = Aws::String>
    RevokeSubscriptionResult& WithSubscriptionRequestId(SubscriptionRequestIdT&& value) { SetSubscriptionRequestId(std::forward<SubscriptionRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription was revoked.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    RevokeSubscriptionResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who revoked the subscription.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    RevokeSubscriptionResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RevokeSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
