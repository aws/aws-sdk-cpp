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
    AWS_DATAZONE_API SubscriptionRequestSummary() = default;
    AWS_DATAZONE_API SubscriptionRequestSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscriptionRequestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when a subscription request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SubscriptionRequestSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    SubscriptionRequestSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const { return m_decisionComment; }
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }
    template<typename DecisionCommentT = Aws::String>
    void SetDecisionComment(DecisionCommentT&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::forward<DecisionCommentT>(value); }
    template<typename DecisionCommentT = Aws::String>
    SubscriptionRequestSummary& WithDecisionComment(DecisionCommentT&& value) { SetDecisionComment(std::forward<DecisionCommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SubscriptionRequestSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the existing subscription.</p>
     */
    inline const Aws::String& GetExistingSubscriptionId() const { return m_existingSubscriptionId; }
    inline bool ExistingSubscriptionIdHasBeenSet() const { return m_existingSubscriptionIdHasBeenSet; }
    template<typename ExistingSubscriptionIdT = Aws::String>
    void SetExistingSubscriptionId(ExistingSubscriptionIdT&& value) { m_existingSubscriptionIdHasBeenSet = true; m_existingSubscriptionId = std::forward<ExistingSubscriptionIdT>(value); }
    template<typename ExistingSubscriptionIdT = Aws::String>
    SubscriptionRequestSummary& WithExistingSubscriptionId(ExistingSubscriptionIdT&& value) { SetExistingSubscriptionId(std::forward<ExistingSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SubscriptionRequestSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the metadata forms.</p>
     */
    inline const Aws::Vector<MetadataFormSummary>& GetMetadataFormsSummary() const { return m_metadataFormsSummary; }
    inline bool MetadataFormsSummaryHasBeenSet() const { return m_metadataFormsSummaryHasBeenSet; }
    template<typename MetadataFormsSummaryT = Aws::Vector<MetadataFormSummary>>
    void SetMetadataFormsSummary(MetadataFormsSummaryT&& value) { m_metadataFormsSummaryHasBeenSet = true; m_metadataFormsSummary = std::forward<MetadataFormsSummaryT>(value); }
    template<typename MetadataFormsSummaryT = Aws::Vector<MetadataFormSummary>>
    SubscriptionRequestSummary& WithMetadataFormsSummary(MetadataFormsSummaryT&& value) { SetMetadataFormsSummary(std::forward<MetadataFormsSummaryT>(value)); return *this;}
    template<typename MetadataFormsSummaryT = MetadataFormSummary>
    SubscriptionRequestSummary& AddMetadataFormsSummary(MetadataFormsSummaryT&& value) { m_metadataFormsSummaryHasBeenSet = true; m_metadataFormsSummary.emplace_back(std::forward<MetadataFormsSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const { return m_requestReason; }
    inline bool RequestReasonHasBeenSet() const { return m_requestReasonHasBeenSet; }
    template<typename RequestReasonT = Aws::String>
    void SetRequestReason(RequestReasonT&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::forward<RequestReasonT>(value); }
    template<typename RequestReasonT = Aws::String>
    SubscriptionRequestSummary& WithRequestReason(RequestReasonT&& value) { SetRequestReason(std::forward<RequestReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request reviewer.</p>
     */
    inline const Aws::String& GetReviewerId() const { return m_reviewerId; }
    inline bool ReviewerIdHasBeenSet() const { return m_reviewerIdHasBeenSet; }
    template<typename ReviewerIdT = Aws::String>
    void SetReviewerId(ReviewerIdT&& value) { m_reviewerIdHasBeenSet = true; m_reviewerId = std::forward<ReviewerIdT>(value); }
    template<typename ReviewerIdT = Aws::String>
    SubscriptionRequestSummary& WithReviewerId(ReviewerIdT&& value) { SetReviewerId(std::forward<ReviewerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription request.</p>
     */
    inline SubscriptionRequestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriptionRequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SubscriptionRequestSummary& WithStatus(SubscriptionRequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listings included in the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const { return m_subscribedListings; }
    inline bool SubscribedListingsHasBeenSet() const { return m_subscribedListingsHasBeenSet; }
    template<typename SubscribedListingsT = Aws::Vector<SubscribedListing>>
    void SetSubscribedListings(SubscribedListingsT&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = std::forward<SubscribedListingsT>(value); }
    template<typename SubscribedListingsT = Aws::Vector<SubscribedListing>>
    SubscriptionRequestSummary& WithSubscribedListings(SubscribedListingsT&& value) { SetSubscribedListings(std::forward<SubscribedListingsT>(value)); return *this;}
    template<typename SubscribedListingsT = SubscribedListing>
    SubscriptionRequestSummary& AddSubscribedListings(SubscribedListingsT&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.emplace_back(std::forward<SubscribedListingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The principals included in the subscription request. </p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const { return m_subscribedPrincipals; }
    inline bool SubscribedPrincipalsHasBeenSet() const { return m_subscribedPrincipalsHasBeenSet; }
    template<typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipal>>
    void SetSubscribedPrincipals(SubscribedPrincipalsT&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = std::forward<SubscribedPrincipalsT>(value); }
    template<typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipal>>
    SubscriptionRequestSummary& WithSubscribedPrincipals(SubscribedPrincipalsT&& value) { SetSubscribedPrincipals(std::forward<SubscribedPrincipalsT>(value)); return *this;}
    template<typename SubscribedPrincipalsT = SubscribedPrincipal>
    SubscriptionRequestSummary& AddSubscribedPrincipals(SubscribedPrincipalsT&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.emplace_back(std::forward<SubscribedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SubscriptionRequestSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone user who updated the subscription
     * request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    SubscriptionRequestSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
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

    SubscriptionRequestStatus m_status{SubscriptionRequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<SubscribedListing> m_subscribedListings;
    bool m_subscribedListingsHasBeenSet = false;

    Aws::Vector<SubscribedPrincipal> m_subscribedPrincipals;
    bool m_subscribedPrincipalsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
