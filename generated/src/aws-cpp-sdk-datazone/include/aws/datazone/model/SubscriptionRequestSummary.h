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
#include <aws/datazone/model/MetadataFormSummary.h>
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


    ///@{
    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SubscriptionRequestSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SubscriptionRequestSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline SubscriptionRequestSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline SubscriptionRequestSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }
    inline void SetDecisionComment(const Aws::String& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = value; }
    inline void SetDecisionComment(Aws::String&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::move(value); }
    inline void SetDecisionComment(const char* value) { m_decisionCommentHasBeenSet = true; m_decisionComment.assign(value); }
    inline SubscriptionRequestSummary& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}
    inline SubscriptionRequestSummary& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline SubscriptionRequestSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline SubscriptionRequestSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the existing subscription.</p>
     */
    inline const Aws::String& GetExistingSubscriptionId() const{ return m_existingSubscriptionId; }
    inline bool ExistingSubscriptionIdHasBeenSet() const { return m_existingSubscriptionIdHasBeenSet; }
    inline void SetExistingSubscriptionId(const Aws::String& value) { m_existingSubscriptionIdHasBeenSet = true; m_existingSubscriptionId = value; }
    inline void SetExistingSubscriptionId(Aws::String&& value) { m_existingSubscriptionIdHasBeenSet = true; m_existingSubscriptionId = std::move(value); }
    inline void SetExistingSubscriptionId(const char* value) { m_existingSubscriptionIdHasBeenSet = true; m_existingSubscriptionId.assign(value); }
    inline SubscriptionRequestSummary& WithExistingSubscriptionId(const Aws::String& value) { SetExistingSubscriptionId(value); return *this;}
    inline SubscriptionRequestSummary& WithExistingSubscriptionId(Aws::String&& value) { SetExistingSubscriptionId(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithExistingSubscriptionId(const char* value) { SetExistingSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SubscriptionRequestSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SubscriptionRequestSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the metadata forms.</p>
     */
    inline const Aws::Vector<MetadataFormSummary>& GetMetadataFormsSummary() const{ return m_metadataFormsSummary; }
    inline bool MetadataFormsSummaryHasBeenSet() const { return m_metadataFormsSummaryHasBeenSet; }
    inline void SetMetadataFormsSummary(const Aws::Vector<MetadataFormSummary>& value) { m_metadataFormsSummaryHasBeenSet = true; m_metadataFormsSummary = value; }
    inline void SetMetadataFormsSummary(Aws::Vector<MetadataFormSummary>&& value) { m_metadataFormsSummaryHasBeenSet = true; m_metadataFormsSummary = std::move(value); }
    inline SubscriptionRequestSummary& WithMetadataFormsSummary(const Aws::Vector<MetadataFormSummary>& value) { SetMetadataFormsSummary(value); return *this;}
    inline SubscriptionRequestSummary& WithMetadataFormsSummary(Aws::Vector<MetadataFormSummary>&& value) { SetMetadataFormsSummary(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& AddMetadataFormsSummary(const MetadataFormSummary& value) { m_metadataFormsSummaryHasBeenSet = true; m_metadataFormsSummary.push_back(value); return *this; }
    inline SubscriptionRequestSummary& AddMetadataFormsSummary(MetadataFormSummary&& value) { m_metadataFormsSummaryHasBeenSet = true; m_metadataFormsSummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }
    inline bool RequestReasonHasBeenSet() const { return m_requestReasonHasBeenSet; }
    inline void SetRequestReason(const Aws::String& value) { m_requestReasonHasBeenSet = true; m_requestReason = value; }
    inline void SetRequestReason(Aws::String&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::move(value); }
    inline void SetRequestReason(const char* value) { m_requestReasonHasBeenSet = true; m_requestReason.assign(value); }
    inline SubscriptionRequestSummary& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}
    inline SubscriptionRequestSummary& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline const Aws::String& GetReviewerId() const{ return m_reviewerId; }
    inline bool ReviewerIdHasBeenSet() const { return m_reviewerIdHasBeenSet; }
    inline void SetReviewerId(const Aws::String& value) { m_reviewerIdHasBeenSet = true; m_reviewerId = value; }
    inline void SetReviewerId(Aws::String&& value) { m_reviewerIdHasBeenSet = true; m_reviewerId = std::move(value); }
    inline void SetReviewerId(const char* value) { m_reviewerIdHasBeenSet = true; m_reviewerId.assign(value); }
    inline SubscriptionRequestSummary& WithReviewerId(const Aws::String& value) { SetReviewerId(value); return *this;}
    inline SubscriptionRequestSummary& WithReviewerId(Aws::String&& value) { SetReviewerId(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithReviewerId(const char* value) { SetReviewerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription request.</p>
     */
    inline const SubscriptionRequestStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SubscriptionRequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SubscriptionRequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SubscriptionRequestSummary& WithStatus(const SubscriptionRequestStatus& value) { SetStatus(value); return *this;}
    inline SubscriptionRequestSummary& WithStatus(SubscriptionRequestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const{ return m_subscribedListings; }
    inline bool SubscribedListingsHasBeenSet() const { return m_subscribedListingsHasBeenSet; }
    inline void SetSubscribedListings(const Aws::Vector<SubscribedListing>& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = value; }
    inline void SetSubscribedListings(Aws::Vector<SubscribedListing>&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = std::move(value); }
    inline SubscriptionRequestSummary& WithSubscribedListings(const Aws::Vector<SubscribedListing>& value) { SetSubscribedListings(value); return *this;}
    inline SubscriptionRequestSummary& WithSubscribedListings(Aws::Vector<SubscribedListing>&& value) { SetSubscribedListings(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& AddSubscribedListings(const SubscribedListing& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.push_back(value); return *this; }
    inline SubscriptionRequestSummary& AddSubscribedListings(SubscribedListing&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const{ return m_subscribedPrincipals; }
    inline bool SubscribedPrincipalsHasBeenSet() const { return m_subscribedPrincipalsHasBeenSet; }
    inline void SetSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = value; }
    inline void SetSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = std::move(value); }
    inline SubscriptionRequestSummary& WithSubscribedPrincipals(const Aws::Vector<SubscribedPrincipal>& value) { SetSubscribedPrincipals(value); return *this;}
    inline SubscriptionRequestSummary& WithSubscribedPrincipals(Aws::Vector<SubscribedPrincipal>&& value) { SetSubscribedPrincipals(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& AddSubscribedPrincipals(const SubscribedPrincipal& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.push_back(value); return *this; }
    inline SubscriptionRequestSummary& AddSubscribedPrincipals(SubscribedPrincipal&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline SubscriptionRequestSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline SubscriptionRequestSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline SubscriptionRequestSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline SubscriptionRequestSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline SubscriptionRequestSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_decisionComment;
    bool m_decisionCommentHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_existingSubscriptionId;
    bool m_existingSubscriptionIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<MetadataFormSummary> m_metadataFormsSummary;
    bool m_metadataFormsSummaryHasBeenSet = false;

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
