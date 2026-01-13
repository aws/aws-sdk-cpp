/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FormOutput.h>
#include <aws/datazone/model/SubscribedListing.h>
#include <aws/datazone/model/SubscribedPrincipal.h>
#include <aws/datazone/model/SubscriptionRequestStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class AcceptSubscriptionRequestResult {
 public:
  AWS_DATAZONE_API AcceptSubscriptionRequestResult() = default;
  AWS_DATAZONE_API AcceptSubscriptionRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API AcceptSubscriptionRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the subscription request.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AcceptSubscriptionRequestResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon DataZone user that accepted the specified subscription
   * request.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  AcceptSubscriptionRequestResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon DataZone user who updated the subscription request.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  AcceptSubscriptionRequestResult& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Amazon DataZone domain where the specified
   * subscription request was accepted.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  AcceptSubscriptionRequestResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the status of the subscription request.</p>
   */
  inline SubscriptionRequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(SubscriptionRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcceptSubscriptionRequestResult& WithStatus(SubscriptionRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that specifies when the subscription request was accepted.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcceptSubscriptionRequestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the timestamp when subscription request was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AcceptSubscriptionRequestResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the reason for requesting a subscription to the asset.</p>
   */
  inline const Aws::String& GetRequestReason() const { return m_requestReason; }
  template <typename RequestReasonT = Aws::String>
  void SetRequestReason(RequestReasonT&& value) {
    m_requestReasonHasBeenSet = true;
    m_requestReason = std::forward<RequestReasonT>(value);
  }
  template <typename RequestReasonT = Aws::String>
  AcceptSubscriptionRequestResult& WithRequestReason(RequestReasonT&& value) {
    SetRequestReason(std::forward<RequestReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon DataZone users who are subscribed to the asset specified
   * in the subscription request.</p>
   */
  inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const { return m_subscribedPrincipals; }
  template <typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipal>>
  void SetSubscribedPrincipals(SubscribedPrincipalsT&& value) {
    m_subscribedPrincipalsHasBeenSet = true;
    m_subscribedPrincipals = std::forward<SubscribedPrincipalsT>(value);
  }
  template <typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipal>>
  AcceptSubscriptionRequestResult& WithSubscribedPrincipals(SubscribedPrincipalsT&& value) {
    SetSubscribedPrincipals(std::forward<SubscribedPrincipalsT>(value));
    return *this;
  }
  template <typename SubscribedPrincipalsT = SubscribedPrincipal>
  AcceptSubscriptionRequestResult& AddSubscribedPrincipals(SubscribedPrincipalsT&& value) {
    m_subscribedPrincipalsHasBeenSet = true;
    m_subscribedPrincipals.emplace_back(std::forward<SubscribedPrincipalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the asset for which the subscription request was created.</p>
   */
  inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const { return m_subscribedListings; }
  template <typename SubscribedListingsT = Aws::Vector<SubscribedListing>>
  void SetSubscribedListings(SubscribedListingsT&& value) {
    m_subscribedListingsHasBeenSet = true;
    m_subscribedListings = std::forward<SubscribedListingsT>(value);
  }
  template <typename SubscribedListingsT = Aws::Vector<SubscribedListing>>
  AcceptSubscriptionRequestResult& WithSubscribedListings(SubscribedListingsT&& value) {
    SetSubscribedListings(std::forward<SubscribedListingsT>(value));
    return *this;
  }
  template <typename SubscribedListingsT = SubscribedListing>
  AcceptSubscriptionRequestResult& AddSubscribedListings(SubscribedListingsT&& value) {
    m_subscribedListingsHasBeenSet = true;
    m_subscribedListings.emplace_back(std::forward<SubscribedListingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifes the ID of the Amazon DataZone user who reviewed the subscription
   * request.</p>
   */
  inline const Aws::String& GetReviewerId() const { return m_reviewerId; }
  template <typename ReviewerIdT = Aws::String>
  void SetReviewerId(ReviewerIdT&& value) {
    m_reviewerIdHasBeenSet = true;
    m_reviewerId = std::forward<ReviewerIdT>(value);
  }
  template <typename ReviewerIdT = Aws::String>
  AcceptSubscriptionRequestResult& WithReviewerId(ReviewerIdT&& value) {
    SetReviewerId(std::forward<ReviewerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the reason for accepting the subscription request.</p>
   */
  inline const Aws::String& GetDecisionComment() const { return m_decisionComment; }
  template <typename DecisionCommentT = Aws::String>
  void SetDecisionComment(DecisionCommentT&& value) {
    m_decisionCommentHasBeenSet = true;
    m_decisionComment = std::forward<DecisionCommentT>(value);
  }
  template <typename DecisionCommentT = Aws::String>
  AcceptSubscriptionRequestResult& WithDecisionComment(DecisionCommentT&& value) {
    SetDecisionComment(std::forward<DecisionCommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the existing subscription.</p>
   */
  inline const Aws::String& GetExistingSubscriptionId() const { return m_existingSubscriptionId; }
  template <typename ExistingSubscriptionIdT = Aws::String>
  void SetExistingSubscriptionId(ExistingSubscriptionIdT&& value) {
    m_existingSubscriptionIdHasBeenSet = true;
    m_existingSubscriptionId = std::forward<ExistingSubscriptionIdT>(value);
  }
  template <typename ExistingSubscriptionIdT = Aws::String>
  AcceptSubscriptionRequestResult& WithExistingSubscriptionId(ExistingSubscriptionIdT&& value) {
    SetExistingSubscriptionId(std::forward<ExistingSubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata form in the subscription request.</p>
   */
  inline const Aws::Vector<FormOutput>& GetMetadataForms() const { return m_metadataForms; }
  template <typename MetadataFormsT = Aws::Vector<FormOutput>>
  void SetMetadataForms(MetadataFormsT&& value) {
    m_metadataFormsHasBeenSet = true;
    m_metadataForms = std::forward<MetadataFormsT>(value);
  }
  template <typename MetadataFormsT = Aws::Vector<FormOutput>>
  AcceptSubscriptionRequestResult& WithMetadataForms(MetadataFormsT&& value) {
    SetMetadataForms(std::forward<MetadataFormsT>(value));
    return *this;
  }
  template <typename MetadataFormsT = FormOutput>
  AcceptSubscriptionRequestResult& AddMetadataForms(MetadataFormsT&& value) {
    m_metadataFormsHasBeenSet = true;
    m_metadataForms.emplace_back(std::forward<MetadataFormsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  AcceptSubscriptionRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_createdBy;

  Aws::String m_updatedBy;

  Aws::String m_domainId;

  SubscriptionRequestStatus m_status{SubscriptionRequestStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestReason;

  Aws::Vector<SubscribedPrincipal> m_subscribedPrincipals;

  Aws::Vector<SubscribedListing> m_subscribedListings;

  Aws::String m_reviewerId;

  Aws::String m_decisionComment;

  Aws::String m_existingSubscriptionId;

  Aws::Vector<FormOutput> m_metadataForms;

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestReasonHasBeenSet = false;
  bool m_subscribedPrincipalsHasBeenSet = false;
  bool m_subscribedListingsHasBeenSet = false;
  bool m_reviewerIdHasBeenSet = false;
  bool m_decisionCommentHasBeenSet = false;
  bool m_existingSubscriptionIdHasBeenSet = false;
  bool m_metadataFormsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
