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
  class GetSubscriptionResult
  {
  public:
    AWS_DATAZONE_API GetSubscriptionResult();
    AWS_DATAZONE_API GetSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline GetSubscriptionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription was created.</p>
     */
    inline GetSubscriptionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline GetSubscriptionResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline GetSubscriptionResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription.</p>
     */
    inline GetSubscriptionResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline GetSubscriptionResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline GetSubscriptionResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription exists.</p>
     */
    inline GetSubscriptionResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline GetSubscriptionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the subscription.</p>
     */
    inline GetSubscriptionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription.</p>
     */
    inline GetSubscriptionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The retain permissions of the subscription.</p>
     */
    inline bool GetRetainPermissions() const{ return m_retainPermissions; }

    /**
     * <p>The retain permissions of the subscription.</p>
     */
    inline void SetRetainPermissions(bool value) { m_retainPermissions = value; }

    /**
     * <p>The retain permissions of the subscription.</p>
     */
    inline GetSubscriptionResult& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}


    /**
     * <p>The status of the subscription.</p>
     */
    inline const SubscriptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the subscription.</p>
     */
    inline void SetStatus(const SubscriptionStatus& value) { m_status = value; }

    /**
     * <p>The status of the subscription.</p>
     */
    inline void SetStatus(SubscriptionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the subscription.</p>
     */
    inline GetSubscriptionResult& WithStatus(const SubscriptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the subscription.</p>
     */
    inline GetSubscriptionResult& WithStatus(SubscriptionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const SubscribedListing& GetSubscribedListing() const{ return m_subscribedListing; }

    /**
     * <p/>
     */
    inline void SetSubscribedListing(const SubscribedListing& value) { m_subscribedListing = value; }

    /**
     * <p/>
     */
    inline void SetSubscribedListing(SubscribedListing&& value) { m_subscribedListing = std::move(value); }

    /**
     * <p/>
     */
    inline GetSubscriptionResult& WithSubscribedListing(const SubscribedListing& value) { SetSubscribedListing(value); return *this;}

    /**
     * <p/>
     */
    inline GetSubscriptionResult& WithSubscribedListing(SubscribedListing&& value) { SetSubscribedListing(std::move(value)); return *this;}


    /**
     * <p>The principal that owns the subscription.</p>
     */
    inline const SubscribedPrincipal& GetSubscribedPrincipal() const{ return m_subscribedPrincipal; }

    /**
     * <p>The principal that owns the subscription.</p>
     */
    inline void SetSubscribedPrincipal(const SubscribedPrincipal& value) { m_subscribedPrincipal = value; }

    /**
     * <p>The principal that owns the subscription.</p>
     */
    inline void SetSubscribedPrincipal(SubscribedPrincipal&& value) { m_subscribedPrincipal = std::move(value); }

    /**
     * <p>The principal that owns the subscription.</p>
     */
    inline GetSubscriptionResult& WithSubscribedPrincipal(const SubscribedPrincipal& value) { SetSubscribedPrincipal(value); return *this;}

    /**
     * <p>The principal that owns the subscription.</p>
     */
    inline GetSubscriptionResult& WithSubscribedPrincipal(SubscribedPrincipal&& value) { SetSubscribedPrincipal(std::move(value)); return *this;}


    /**
     * <p>The ID of the subscription request.</p>
     */
    inline const Aws::String& GetSubscriptionRequestId() const{ return m_subscriptionRequestId; }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline void SetSubscriptionRequestId(const Aws::String& value) { m_subscriptionRequestId = value; }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline void SetSubscriptionRequestId(Aws::String&& value) { m_subscriptionRequestId = std::move(value); }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline void SetSubscriptionRequestId(const char* value) { m_subscriptionRequestId.assign(value); }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionRequestId(const Aws::String& value) { SetSubscriptionRequestId(value); return *this;}

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionRequestId(Aws::String&& value) { SetSubscriptionRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionRequestId(const char* value) { SetSubscriptionRequestId(value); return *this;}


    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline GetSubscriptionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription was updated.</p>
     */
    inline GetSubscriptionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline GetSubscriptionResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline GetSubscriptionResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription.</p>
     */
    inline GetSubscriptionResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
