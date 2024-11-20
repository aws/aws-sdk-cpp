/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/SubscriptionRequestStatus.h>
#include <aws/datazone/model/FormOutput.h>
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
  class AcceptSubscriptionRequestResult
  {
  public:
    AWS_DATAZONE_API AcceptSubscriptionRequestResult();
    AWS_DATAZONE_API AcceptSubscriptionRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API AcceptSubscriptionRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp that specifies when the subscription request was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline AcceptSubscriptionRequestResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon DataZone user that accepted the specified subscription
     * request.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline AcceptSubscriptionRequestResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for accepting the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }
    inline void SetDecisionComment(const Aws::String& value) { m_decisionComment = value; }
    inline void SetDecisionComment(Aws::String&& value) { m_decisionComment = std::move(value); }
    inline void SetDecisionComment(const char* value) { m_decisionComment.assign(value); }
    inline AcceptSubscriptionRequestResult& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon DataZone domain where the specified
     * subscription request was accepted.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline AcceptSubscriptionRequestResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the existing subscription.</p>
     */
    inline const Aws::String& GetExistingSubscriptionId() const{ return m_existingSubscriptionId; }
    inline void SetExistingSubscriptionId(const Aws::String& value) { m_existingSubscriptionId = value; }
    inline void SetExistingSubscriptionId(Aws::String&& value) { m_existingSubscriptionId = std::move(value); }
    inline void SetExistingSubscriptionId(const char* value) { m_existingSubscriptionId.assign(value); }
    inline AcceptSubscriptionRequestResult& WithExistingSubscriptionId(const Aws::String& value) { SetExistingSubscriptionId(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithExistingSubscriptionId(Aws::String&& value) { SetExistingSubscriptionId(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithExistingSubscriptionId(const char* value) { SetExistingSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline AcceptSubscriptionRequestResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata form in the subscription request.</p>
     */
    inline const Aws::Vector<FormOutput>& GetMetadataForms() const{ return m_metadataForms; }
    inline void SetMetadataForms(const Aws::Vector<FormOutput>& value) { m_metadataForms = value; }
    inline void SetMetadataForms(Aws::Vector<FormOutput>&& value) { m_metadataForms = std::move(value); }
    inline AcceptSubscriptionRequestResult& WithMetadataForms(const Aws::Vector<FormOutput>& value) { SetMetadataForms(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithMetadataForms(Aws::Vector<FormOutput>&& value) { SetMetadataForms(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& AddMetadataForms(const FormOutput& value) { m_metadataForms.push_back(value); return *this; }
    inline AcceptSubscriptionRequestResult& AddMetadataForms(FormOutput&& value) { m_metadataForms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for requesting a subscription to the asset.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }
    inline void SetRequestReason(const Aws::String& value) { m_requestReason = value; }
    inline void SetRequestReason(Aws::String&& value) { m_requestReason = std::move(value); }
    inline void SetRequestReason(const char* value) { m_requestReason.assign(value); }
    inline AcceptSubscriptionRequestResult& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifes the ID of the Amazon DataZone user who reviewed the subscription
     * request.</p>
     */
    inline const Aws::String& GetReviewerId() const{ return m_reviewerId; }
    inline void SetReviewerId(const Aws::String& value) { m_reviewerId = value; }
    inline void SetReviewerId(Aws::String&& value) { m_reviewerId = std::move(value); }
    inline void SetReviewerId(const char* value) { m_reviewerId.assign(value); }
    inline AcceptSubscriptionRequestResult& WithReviewerId(const Aws::String& value) { SetReviewerId(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithReviewerId(Aws::String&& value) { SetReviewerId(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithReviewerId(const char* value) { SetReviewerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the subscription request.</p>
     */
    inline const SubscriptionRequestStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SubscriptionRequestStatus& value) { m_status = value; }
    inline void SetStatus(SubscriptionRequestStatus&& value) { m_status = std::move(value); }
    inline AcceptSubscriptionRequestResult& WithStatus(const SubscriptionRequestStatus& value) { SetStatus(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithStatus(SubscriptionRequestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the asset for which the subscription request was created.</p>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const{ return m_subscribedListings; }
    inline void SetSubscribedListings(const Aws::Vector<SubscribedListing>& value) { m_subscribedListings = value; }
    inline void SetSubscribedListings(Aws::Vector<SubscribedListing>&& value) { m_subscribedListings = std::move(value); }
    inline AcceptSubscriptionRequestResult& WithSubscribedListings(const Aws::Vector<SubscribedListing>& value) { SetSubscribedListings(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithSubscribedListings(Aws::Vector<SubscribedListing>&& value) { SetSubscribedListings(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& AddSubscribedListings(const SubscribedListing& value) { m_subscribedListings.push_back(value); return *this; }
    inline AcceptSubscriptionRequestResult& AddSubscribedListings(SubscribedListing&& value) { m_subscribedListings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon DataZone users who are subscribed to the asset specified
     * in the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const{ return m_subscribedPrincipals; }
    inline void SetSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { m_subscribedPrincipals = value; }
    inline void SetSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { m_subscribedPrincipals = std::move(value); }
    inline AcceptSubscriptionRequestResult& WithSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { SetSubscribedPrincipals(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { SetSubscribedPrincipals(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& AddSubscribedPrincipals(const SubscribedPrincipal& value) { m_subscribedPrincipals.push_back(value); return *this; }
    inline AcceptSubscriptionRequestResult& AddSubscribedPrincipals(SubscribedPrincipal&& value) { m_subscribedPrincipals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the timestamp when subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline AcceptSubscriptionRequestResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon DataZone user who updated the subscription request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline AcceptSubscriptionRequestResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AcceptSubscriptionRequestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AcceptSubscriptionRequestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_decisionComment;

    Aws::String m_domainId;

    Aws::String m_existingSubscriptionId;

    Aws::String m_id;

    Aws::Vector<FormOutput> m_metadataForms;

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
