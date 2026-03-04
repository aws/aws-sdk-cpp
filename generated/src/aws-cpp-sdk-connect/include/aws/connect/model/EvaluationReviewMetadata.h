/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationReviewRequestComment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Metadata information about an evaluation review.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationReviewMetadata">AWS
 * API Reference</a></p>
 */
class EvaluationReviewMetadata {
 public:
  AWS_CONNECT_API EvaluationReviewMetadata() = default;
  AWS_CONNECT_API EvaluationReviewMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationReviewMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the evaluation review.</p>
   */
  inline const Aws::String& GetReviewId() const { return m_reviewId; }
  inline bool ReviewIdHasBeenSet() const { return m_reviewIdHasBeenSet; }
  template <typename ReviewIdT = Aws::String>
  void SetReviewId(ReviewIdT&& value) {
    m_reviewIdHasBeenSet = true;
    m_reviewId = std::forward<ReviewIdT>(value);
  }
  template <typename ReviewIdT = Aws::String>
  EvaluationReviewMetadata& WithReviewId(ReviewIdT&& value) {
    SetReviewId(std::forward<ReviewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the evaluation review was requested.</p>
   */
  inline const Aws::Utils::DateTime& GetRequestedTime() const { return m_requestedTime; }
  inline bool RequestedTimeHasBeenSet() const { return m_requestedTimeHasBeenSet; }
  template <typename RequestedTimeT = Aws::Utils::DateTime>
  void SetRequestedTime(RequestedTimeT&& value) {
    m_requestedTimeHasBeenSet = true;
    m_requestedTime = std::forward<RequestedTimeT>(value);
  }
  template <typename RequestedTimeT = Aws::Utils::DateTime>
  EvaluationReviewMetadata& WithRequestedTime(RequestedTimeT&& value) {
    SetRequestedTime(std::forward<RequestedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user who requested the evaluation review.</p>
   */
  inline const Aws::String& GetRequestedBy() const { return m_requestedBy; }
  inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
  template <typename RequestedByT = Aws::String>
  void SetRequestedBy(RequestedByT&& value) {
    m_requestedByHasBeenSet = true;
    m_requestedBy = std::forward<RequestedByT>(value);
  }
  template <typename RequestedByT = Aws::String>
  EvaluationReviewMetadata& WithRequestedBy(RequestedByT&& value) {
    SetRequestedBy(std::forward<RequestedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Comments provided when requesting the evaluation review.</p>
   */
  inline const Aws::Vector<EvaluationReviewRequestComment>& GetReviewRequestComments() const { return m_reviewRequestComments; }
  inline bool ReviewRequestCommentsHasBeenSet() const { return m_reviewRequestCommentsHasBeenSet; }
  template <typename ReviewRequestCommentsT = Aws::Vector<EvaluationReviewRequestComment>>
  void SetReviewRequestComments(ReviewRequestCommentsT&& value) {
    m_reviewRequestCommentsHasBeenSet = true;
    m_reviewRequestComments = std::forward<ReviewRequestCommentsT>(value);
  }
  template <typename ReviewRequestCommentsT = Aws::Vector<EvaluationReviewRequestComment>>
  EvaluationReviewMetadata& WithReviewRequestComments(ReviewRequestCommentsT&& value) {
    SetReviewRequestComments(std::forward<ReviewRequestCommentsT>(value));
    return *this;
  }
  template <typename ReviewRequestCommentsT = EvaluationReviewRequestComment>
  EvaluationReviewMetadata& AddReviewRequestComments(ReviewRequestCommentsT&& value) {
    m_reviewRequestCommentsHasBeenSet = true;
    m_reviewRequestComments.emplace_back(std::forward<ReviewRequestCommentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reviewId;

  Aws::Utils::DateTime m_requestedTime{};

  Aws::String m_requestedBy;

  Aws::Vector<EvaluationReviewRequestComment> m_reviewRequestComments;
  bool m_reviewIdHasBeenSet = false;
  bool m_requestedTimeHasBeenSet = false;
  bool m_requestedByHasBeenSet = false;
  bool m_reviewRequestCommentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
