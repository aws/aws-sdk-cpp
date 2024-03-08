/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SubscriptionRequestStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateSubscriptionRequestResult
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionRequestResult();
    AWS_DATAZONE_API CreateSubscriptionRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateSubscriptionRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A timestamp of when the subscription request is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>A timestamp of when the subscription request is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>A timestamp of when the subscription request is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>A timestamp of when the subscription request is created.</p>
     */
    inline CreateSubscriptionRequestResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>A timestamp of when the subscription request is created.</p>
     */
    inline CreateSubscriptionRequestResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline void SetDecisionComment(const Aws::String& value) { m_decisionComment = value; }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline void SetDecisionComment(Aws::String&& value) { m_decisionComment = std::move(value); }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline void SetDecisionComment(const char* value) { m_decisionComment.assign(value); }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the subscription request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(const Aws::String& value) { m_requestReason = value; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(Aws::String&& value) { m_requestReason = std::move(value); }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(const char* value) { m_requestReason.assign(value); }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}


    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline const Aws::String& GetReviewerId() const{ return m_reviewerId; }

    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline void SetReviewerId(const Aws::String& value) { m_reviewerId = value; }

    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline void SetReviewerId(Aws::String&& value) { m_reviewerId = std::move(value); }

    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline void SetReviewerId(const char* value) { m_reviewerId.assign(value); }

    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithReviewerId(const Aws::String& value) { SetReviewerId(value); return *this;}

    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithReviewerId(Aws::String&& value) { SetReviewerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithReviewerId(const char* value) { SetReviewerId(value); return *this;}


    /**
     * <p>The status of the subscription request.</p>
     */
    inline const SubscriptionRequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline void SetStatus(const SubscriptionRequestStatus& value) { m_status = value; }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline void SetStatus(SubscriptionRequestStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithStatus(const SubscriptionRequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithStatus(SubscriptionRequestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const{ return m_subscribedListings; }

    /**
     * <p/>
     */
    inline void SetSubscribedListings(const Aws::Vector<SubscribedListing>& value) { m_subscribedListings = value; }

    /**
     * <p/>
     */
    inline void SetSubscribedListings(Aws::Vector<SubscribedListing>&& value) { m_subscribedListings = std::move(value); }

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestResult& WithSubscribedListings(const Aws::Vector<SubscribedListing>& value) { SetSubscribedListings(value); return *this;}

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestResult& WithSubscribedListings(Aws::Vector<SubscribedListing>&& value) { SetSubscribedListings(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestResult& AddSubscribedListings(const SubscribedListing& value) { m_subscribedListings.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestResult& AddSubscribedListings(SubscribedListing&& value) { m_subscribedListings.push_back(std::move(value)); return *this; }


    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const{ return m_subscribedPrincipals; }

    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline void SetSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { m_subscribedPrincipals = value; }

    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline void SetSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { m_subscribedPrincipals = std::move(value); }

    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { SetSubscribedPrincipals(value); return *this;}

    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { SetSubscribedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& AddSubscribedPrincipals(const SubscribedPrincipal& value) { m_subscribedPrincipals.push_back(value); return *this; }

    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& AddSubscribedPrincipals(SubscribedPrincipal&& value) { m_subscribedPrincipals.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline CreateSubscriptionRequestResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline CreateSubscriptionRequestResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline CreateSubscriptionRequestResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSubscriptionRequestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSubscriptionRequestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSubscriptionRequestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_decisionComment;

    Aws::String m_domainId;

    Aws::String m_id;

    Aws::String m_requestReason;

    Aws::String m_reviewerId;

    SubscriptionRequestStatus m_status;

    Aws::Vector<SubscribedListing> m_subscribedListings;

    Aws::Vector<SubscribedPrincipal> m_subscribedPrincipals;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
