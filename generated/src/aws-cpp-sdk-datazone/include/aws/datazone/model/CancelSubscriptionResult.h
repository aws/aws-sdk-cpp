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
  class CancelSubscriptionResult
  {
  public:
    AWS_DATAZONE_API CancelSubscriptionResult();
    AWS_DATAZONE_API CancelSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CancelSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp that specifies when the request to cancel the subscription was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CancelSubscriptionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CancelSubscriptionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon DataZone user who is cancelling the subscription.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline CancelSubscriptionResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline CancelSubscriptionResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon DataZone domain where the subscription is
     * being cancelled.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline CancelSubscriptionResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CancelSubscriptionResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CancelSubscriptionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CancelSubscriptionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the permissions to the asset are retained after the
     * subscription is cancelled.</p>
     */
    inline bool GetRetainPermissions() const{ return m_retainPermissions; }
    inline void SetRetainPermissions(bool value) { m_retainPermissions = value; }
    inline CancelSubscriptionResult& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request to cancel the subscription.</p>
     */
    inline const SubscriptionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SubscriptionStatus& value) { m_status = value; }
    inline void SetStatus(SubscriptionStatus&& value) { m_status = std::move(value); }
    inline CancelSubscriptionResult& WithStatus(const SubscriptionStatus& value) { SetStatus(value); return *this;}
    inline CancelSubscriptionResult& WithStatus(SubscriptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset to which a subscription is being cancelled.</p>
     */
    inline const SubscribedListing& GetSubscribedListing() const{ return m_subscribedListing; }
    inline void SetSubscribedListing(const SubscribedListing& value) { m_subscribedListing = value; }
    inline void SetSubscribedListing(SubscribedListing&& value) { m_subscribedListing = std::move(value); }
    inline CancelSubscriptionResult& WithSubscribedListing(const SubscribedListing& value) { SetSubscribedListing(value); return *this;}
    inline CancelSubscriptionResult& WithSubscribedListing(SubscribedListing&& value) { SetSubscribedListing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who is made a subscriber to the specified asset by
     * the subscription that is being cancelled.</p>
     */
    inline const SubscribedPrincipal& GetSubscribedPrincipal() const{ return m_subscribedPrincipal; }
    inline void SetSubscribedPrincipal(const SubscribedPrincipal& value) { m_subscribedPrincipal = value; }
    inline void SetSubscribedPrincipal(SubscribedPrincipal&& value) { m_subscribedPrincipal = std::move(value); }
    inline CancelSubscriptionResult& WithSubscribedPrincipal(const SubscribedPrincipal& value) { SetSubscribedPrincipal(value); return *this;}
    inline CancelSubscriptionResult& WithSubscribedPrincipal(SubscribedPrincipal&& value) { SetSubscribedPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the subscripton request for the subscription that is being
     * cancelled.</p>
     */
    inline const Aws::String& GetSubscriptionRequestId() const{ return m_subscriptionRequestId; }
    inline void SetSubscriptionRequestId(const Aws::String& value) { m_subscriptionRequestId = value; }
    inline void SetSubscriptionRequestId(Aws::String&& value) { m_subscriptionRequestId = std::move(value); }
    inline void SetSubscriptionRequestId(const char* value) { m_subscriptionRequestId.assign(value); }
    inline CancelSubscriptionResult& WithSubscriptionRequestId(const Aws::String& value) { SetSubscriptionRequestId(value); return *this;}
    inline CancelSubscriptionResult& WithSubscriptionRequestId(Aws::String&& value) { SetSubscriptionRequestId(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithSubscriptionRequestId(const char* value) { SetSubscriptionRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that specifies when the subscription was cancelled.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline CancelSubscriptionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline CancelSubscriptionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user that cancelled the subscription.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline CancelSubscriptionResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline CancelSubscriptionResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    Aws::String m_id;

    bool m_retainPermissions;

    SubscriptionStatus m_status;

    SubscribedListing m_subscribedListing;

    SubscribedPrincipal m_subscribedPrincipal;

    Aws::String m_subscriptionRequestId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
