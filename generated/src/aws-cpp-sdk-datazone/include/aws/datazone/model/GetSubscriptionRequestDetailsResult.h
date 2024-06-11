﻿/**
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
  class GetSubscriptionRequestDetailsResult
  {
  public:
    AWS_DATAZONE_API GetSubscriptionRequestDetailsResult();
    AWS_DATAZONE_API GetSubscriptionRequestDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetSubscriptionRequestDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the specified subscription request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetSubscriptionRequestDetailsResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }
    inline void SetDecisionComment(const Aws::String& value) { m_decisionComment = value; }
    inline void SetDecisionComment(Aws::String&& value) { m_decisionComment = std::move(value); }
    inline void SetDecisionComment(const char* value) { m_decisionComment.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone domain of the subscription request.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }
    inline void SetRequestReason(const Aws::String& value) { m_requestReason = value; }
    inline void SetRequestReason(Aws::String&& value) { m_requestReason = std::move(value); }
    inline void SetRequestReason(const char* value) { m_requestReason.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone user who reviewed the subscription
     * request.</p>
     */
    inline const Aws::String& GetReviewerId() const{ return m_reviewerId; }
    inline void SetReviewerId(const Aws::String& value) { m_reviewerId = value; }
    inline void SetReviewerId(Aws::String&& value) { m_reviewerId = std::move(value); }
    inline void SetReviewerId(const char* value) { m_reviewerId.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithReviewerId(const Aws::String& value) { SetReviewerId(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithReviewerId(Aws::String&& value) { SetReviewerId(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithReviewerId(const char* value) { SetReviewerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription request.</p>
     */
    inline const SubscriptionRequestStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SubscriptionRequestStatus& value) { m_status = value; }
    inline void SetStatus(SubscriptionRequestStatus&& value) { m_status = std::move(value); }
    inline GetSubscriptionRequestDetailsResult& WithStatus(const SubscriptionRequestStatus& value) { SetStatus(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithStatus(SubscriptionRequestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscribed listings in the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const{ return m_subscribedListings; }
    inline void SetSubscribedListings(const Aws::Vector<SubscribedListing>& value) { m_subscribedListings = value; }
    inline void SetSubscribedListings(Aws::Vector<SubscribedListing>&& value) { m_subscribedListings = std::move(value); }
    inline GetSubscriptionRequestDetailsResult& WithSubscribedListings(const Aws::Vector<SubscribedListing>& value) { SetSubscribedListings(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithSubscribedListings(Aws::Vector<SubscribedListing>&& value) { SetSubscribedListings(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& AddSubscribedListings(const SubscribedListing& value) { m_subscribedListings.push_back(value); return *this; }
    inline GetSubscriptionRequestDetailsResult& AddSubscribedListings(SubscribedListing&& value) { m_subscribedListings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subscribed principals in the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const{ return m_subscribedPrincipals; }
    inline void SetSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { m_subscribedPrincipals = value; }
    inline void SetSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { m_subscribedPrincipals = std::move(value); }
    inline GetSubscriptionRequestDetailsResult& WithSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { SetSubscribedPrincipals(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { SetSubscribedPrincipals(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& AddSubscribedPrincipals(const SubscribedPrincipal& value) { m_subscribedPrincipals.push_back(value); return *this; }
    inline GetSubscriptionRequestDetailsResult& AddSubscribedPrincipals(SubscribedPrincipal&& value) { m_subscribedPrincipals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetSubscriptionRequestDetailsResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSubscriptionRequestDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSubscriptionRequestDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
