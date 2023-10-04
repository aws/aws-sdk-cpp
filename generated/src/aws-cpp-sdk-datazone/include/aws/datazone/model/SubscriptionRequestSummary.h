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
   * <p>The details of the subscription request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscriptionRequestSummary">AWS
   * API Reference</a></p>
   */
  class SubscriptionRequestSummary
  {
  public:
    AWS_DATAZONE_API SubscriptionRequestSummary();
    AWS_DATAZONE_API SubscriptionRequestSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionRequestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline SubscriptionRequestSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline SubscriptionRequestSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline void SetDecisionComment(const Aws::String& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = value; }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline void SetDecisionComment(Aws::String&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::move(value); }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline void SetDecisionComment(const char* value) { m_decisionCommentHasBeenSet = true; m_decisionComment.assign(value); }

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}

    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline SubscriptionRequestSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline SubscriptionRequestSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline SubscriptionRequestSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline bool RequestReasonHasBeenSet() const { return m_requestReasonHasBeenSet; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(const Aws::String& value) { m_requestReasonHasBeenSet = true; m_requestReason = value; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(Aws::String&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::move(value); }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(const char* value) { m_requestReasonHasBeenSet = true; m_requestReason.assign(value); }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}


    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline const Aws::String& GetReviewerId() const{ return m_reviewerId; }

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline bool ReviewerIdHasBeenSet() const { return m_reviewerIdHasBeenSet; }

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline void SetReviewerId(const Aws::String& value) { m_reviewerIdHasBeenSet = true; m_reviewerId = value; }

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline void SetReviewerId(Aws::String&& value) { m_reviewerIdHasBeenSet = true; m_reviewerId = std::move(value); }

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline void SetReviewerId(const char* value) { m_reviewerIdHasBeenSet = true; m_reviewerId.assign(value); }

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline SubscriptionRequestSummary& WithReviewerId(const Aws::String& value) { SetReviewerId(value); return *this;}

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline SubscriptionRequestSummary& WithReviewerId(Aws::String&& value) { SetReviewerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline SubscriptionRequestSummary& WithReviewerId(const char* value) { SetReviewerId(value); return *this;}


    /**
     * <p>The status of the subscription request.</p>
     */
    inline const SubscriptionRequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline void SetStatus(const SubscriptionRequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline void SetStatus(SubscriptionRequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithStatus(const SubscriptionRequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithStatus(SubscriptionRequestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const{ return m_subscribedListings; }

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline bool SubscribedListingsHasBeenSet() const { return m_subscribedListingsHasBeenSet; }

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline void SetSubscribedListings(const Aws::Vector<SubscribedListing>& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = value; }

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline void SetSubscribedListings(Aws::Vector<SubscribedListing>&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = std::move(value); }

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithSubscribedListings(const Aws::Vector<SubscribedListing>& value) { SetSubscribedListings(value); return *this;}

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline SubscriptionRequestSummary& WithSubscribedListings(Aws::Vector<SubscribedListing>&& value) { SetSubscribedListings(std::move(value)); return *this;}

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline SubscriptionRequestSummary& AddSubscribedListings(const SubscribedListing& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.push_back(value); return *this; }

    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline SubscriptionRequestSummary& AddSubscribedListings(SubscribedListing&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.push_back(std::move(value)); return *this; }


    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const{ return m_subscribedPrincipals; }

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline bool SubscribedPrincipalsHasBeenSet() const { return m_subscribedPrincipalsHasBeenSet; }

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline void SetSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = value; }

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline void SetSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = std::move(value); }

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline SubscriptionRequestSummary& WithSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { SetSubscribedPrincipals(value); return *this;}

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline SubscriptionRequestSummary& WithSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { SetSubscribedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline SubscriptionRequestSummary& AddSubscribedPrincipals(const SubscribedPrincipal& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.push_back(value); return *this; }

    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline SubscriptionRequestSummary& AddSubscribedPrincipals(SubscribedPrincipal&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline SubscriptionRequestSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline SubscriptionRequestSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline SubscriptionRequestSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline SubscriptionRequestSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline SubscriptionRequestSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_decisionComment;
    bool m_decisionCommentHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_requestReason;
    bool m_requestReasonHasBeenSet = false;

    Aws::String m_reviewerId;
    bool m_reviewerIdHasBeenSet = false;

    SubscriptionRequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<SubscribedListing> m_subscribedListings;
    bool m_subscribedListingsHasBeenSet = false;

    Aws::Vector<SubscribedPrincipal> m_subscribedPrincipals;
    bool m_subscribedPrincipalsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
