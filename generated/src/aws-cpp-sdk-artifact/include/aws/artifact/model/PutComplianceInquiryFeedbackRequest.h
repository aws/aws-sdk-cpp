/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactRequest.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/FeedbackRating.h>
#include <aws/artifact/model/FeedbackReasonCode.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Artifact {
namespace Model {

/**
 */
class PutComplianceInquiryFeedbackRequest : public ArtifactRequest {
 public:
  AWS_ARTIFACT_API PutComplianceInquiryFeedbackRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutComplianceInquiryFeedback"; }

  AWS_ARTIFACT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the compliance inquiry.</p>
   */
  inline const Aws::String& GetComplianceInquiryId() const { return m_complianceInquiryId; }
  inline bool ComplianceInquiryIdHasBeenSet() const { return m_complianceInquiryIdHasBeenSet; }
  template <typename ComplianceInquiryIdT = Aws::String>
  void SetComplianceInquiryId(ComplianceInquiryIdT&& value) {
    m_complianceInquiryIdHasBeenSet = true;
    m_complianceInquiryId = std::forward<ComplianceInquiryIdT>(value);
  }
  template <typename ComplianceInquiryIdT = Aws::String>
  PutComplianceInquiryFeedbackRequest& WithComplianceInquiryId(ComplianceInquiryIdT&& value) {
    SetComplianceInquiryId(std::forward<ComplianceInquiryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sequential identifier of the query to provide feedback on.</p>
   */
  inline int GetQueryIdentifier() const { return m_queryIdentifier; }
  inline bool QueryIdentifierHasBeenSet() const { return m_queryIdentifierHasBeenSet; }
  inline void SetQueryIdentifier(int value) {
    m_queryIdentifierHasBeenSet = true;
    m_queryIdentifier = value;
  }
  inline PutComplianceInquiryFeedbackRequest& WithQueryIdentifier(int value) {
    SetQueryIdentifier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rating for the feedback. Valid values are THUMBS_UP and THUMBS_DOWN.</p>
   */
  inline FeedbackRating GetRating() const { return m_rating; }
  inline bool RatingHasBeenSet() const { return m_ratingHasBeenSet; }
  inline void SetRating(FeedbackRating value) {
    m_ratingHasBeenSet = true;
    m_rating = value;
  }
  inline PutComplianceInquiryFeedbackRequest& WithRating(FeedbackRating value) {
    SetRating(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response revision ID. Use this value to prevent submitting feedback on a
   * stale response.</p>
   */
  inline int GetResponseRevisionId() const { return m_responseRevisionId; }
  inline bool ResponseRevisionIdHasBeenSet() const { return m_responseRevisionIdHasBeenSet; }
  inline void SetResponseRevisionId(int value) {
    m_responseRevisionIdHasBeenSet = true;
    m_responseRevisionId = value;
  }
  inline PutComplianceInquiryFeedbackRequest& WithResponseRevisionId(int value) {
    SetResponseRevisionId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason codes that describe why you rated the response. Valid values are
   * OTHER, PARTIAL_RESPONSE, and IRRELEVANT_RESPONSE.</p>
   */
  inline const Aws::Vector<FeedbackReasonCode>& GetReasonCodes() const { return m_reasonCodes; }
  inline bool ReasonCodesHasBeenSet() const { return m_reasonCodesHasBeenSet; }
  template <typename ReasonCodesT = Aws::Vector<FeedbackReasonCode>>
  void SetReasonCodes(ReasonCodesT&& value) {
    m_reasonCodesHasBeenSet = true;
    m_reasonCodes = std::forward<ReasonCodesT>(value);
  }
  template <typename ReasonCodesT = Aws::Vector<FeedbackReasonCode>>
  PutComplianceInquiryFeedbackRequest& WithReasonCodes(ReasonCodesT&& value) {
    SetReasonCodes(std::forward<ReasonCodesT>(value));
    return *this;
  }
  inline PutComplianceInquiryFeedbackRequest& AddReasonCodes(FeedbackReasonCode value) {
    m_reasonCodesHasBeenSet = true;
    m_reasonCodes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional comment for the feedback.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  PutComplianceInquiryFeedbackRequest& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutComplianceInquiryFeedbackRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_complianceInquiryId;

  int m_queryIdentifier{0};

  FeedbackRating m_rating{FeedbackRating::NOT_SET};

  int m_responseRevisionId{0};

  Aws::Vector<FeedbackReasonCode> m_reasonCodes;

  Aws::String m_comment;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_complianceInquiryIdHasBeenSet = false;
  bool m_queryIdentifierHasBeenSet = false;
  bool m_ratingHasBeenSet = false;
  bool m_responseRevisionIdHasBeenSet = false;
  bool m_reasonCodesHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
