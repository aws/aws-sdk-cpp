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
    AWS_DATAZONE_API RevokeSubscriptionResult();
    AWS_DATAZONE_API RevokeSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API RevokeSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the subscription was revoked.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline RevokeSubscriptionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline RevokeSubscriptionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user who revoked the subscription.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline RevokeSubscriptionResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline RevokeSubscriptionResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline RevokeSubscriptionResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline RevokeSubscriptionResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline RevokeSubscriptionResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline RevokeSubscriptionResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline RevokeSubscriptionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RevokeSubscriptionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RevokeSubscriptionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether permissions are retained when the subscription is
     * revoked.</p>
     */
    inline bool GetRetainPermissions() const{ return m_retainPermissions; }
    inline void SetRetainPermissions(bool value) { m_retainPermissions = value; }
    inline RevokeSubscriptionResult& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the revoked subscription.</p>
     */
    inline const SubscriptionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SubscriptionStatus& value) { m_status = value; }
    inline void SetStatus(SubscriptionStatus&& value) { m_status = std::move(value); }
    inline RevokeSubscriptionResult& WithStatus(const SubscriptionStatus& value) { SetStatus(value); return *this;}
    inline RevokeSubscriptionResult& WithStatus(SubscriptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscribed listing of the revoked subscription.</p>
     */
    inline const SubscribedListing& GetSubscribedListing() const{ return m_subscribedListing; }
    inline void SetSubscribedListing(const SubscribedListing& value) { m_subscribedListing = value; }
    inline void SetSubscribedListing(SubscribedListing&& value) { m_subscribedListing = std::move(value); }
    inline RevokeSubscriptionResult& WithSubscribedListing(const SubscribedListing& value) { SetSubscribedListing(value); return *this;}
    inline RevokeSubscriptionResult& WithSubscribedListing(SubscribedListing&& value) { SetSubscribedListing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscribed principal of the revoked subscription.</p>
     */
    inline const SubscribedPrincipal& GetSubscribedPrincipal() const{ return m_subscribedPrincipal; }
    inline void SetSubscribedPrincipal(const SubscribedPrincipal& value) { m_subscribedPrincipal = value; }
    inline void SetSubscribedPrincipal(SubscribedPrincipal&& value) { m_subscribedPrincipal = std::move(value); }
    inline RevokeSubscriptionResult& WithSubscribedPrincipal(const SubscribedPrincipal& value) { SetSubscribedPrincipal(value); return *this;}
    inline RevokeSubscriptionResult& WithSubscribedPrincipal(SubscribedPrincipal&& value) { SetSubscribedPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request for the revoked subscription.</p>
     */
    inline const Aws::String& GetSubscriptionRequestId() const{ return m_subscriptionRequestId; }
    inline void SetSubscriptionRequestId(const Aws::String& value) { m_subscriptionRequestId = value; }
    inline void SetSubscriptionRequestId(Aws::String&& value) { m_subscriptionRequestId = std::move(value); }
    inline void SetSubscriptionRequestId(const char* value) { m_subscriptionRequestId.assign(value); }
    inline RevokeSubscriptionResult& WithSubscriptionRequestId(const Aws::String& value) { SetSubscriptionRequestId(value); return *this;}
    inline RevokeSubscriptionResult& WithSubscriptionRequestId(Aws::String&& value) { SetSubscriptionRequestId(std::move(value)); return *this;}
    inline RevokeSubscriptionResult& WithSubscriptionRequestId(const char* value) { SetSubscriptionRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription was revoked.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline RevokeSubscriptionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline RevokeSubscriptionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who revoked the subscription.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline RevokeSubscriptionResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline RevokeSubscriptionResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline RevokeSubscriptionResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RevokeSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RevokeSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RevokeSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
