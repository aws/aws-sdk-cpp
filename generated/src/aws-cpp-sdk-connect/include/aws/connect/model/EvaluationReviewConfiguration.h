/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationReviewNotificationRecipient.h>
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
 * <p>Configuration settings for evaluation reviews.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationReviewConfiguration">AWS
 * API Reference</a></p>
 */
class EvaluationReviewConfiguration {
 public:
  AWS_CONNECT_API EvaluationReviewConfiguration() = default;
  AWS_CONNECT_API EvaluationReviewConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationReviewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of recipients who should be notified when a review is requested.</p>
   */
  inline const Aws::Vector<EvaluationReviewNotificationRecipient>& GetReviewNotificationRecipients() const {
    return m_reviewNotificationRecipients;
  }
  inline bool ReviewNotificationRecipientsHasBeenSet() const { return m_reviewNotificationRecipientsHasBeenSet; }
  template <typename ReviewNotificationRecipientsT = Aws::Vector<EvaluationReviewNotificationRecipient>>
  void SetReviewNotificationRecipients(ReviewNotificationRecipientsT&& value) {
    m_reviewNotificationRecipientsHasBeenSet = true;
    m_reviewNotificationRecipients = std::forward<ReviewNotificationRecipientsT>(value);
  }
  template <typename ReviewNotificationRecipientsT = Aws::Vector<EvaluationReviewNotificationRecipient>>
  EvaluationReviewConfiguration& WithReviewNotificationRecipients(ReviewNotificationRecipientsT&& value) {
    SetReviewNotificationRecipients(std::forward<ReviewNotificationRecipientsT>(value));
    return *this;
  }
  template <typename ReviewNotificationRecipientsT = EvaluationReviewNotificationRecipient>
  EvaluationReviewConfiguration& AddReviewNotificationRecipients(ReviewNotificationRecipientsT&& value) {
    m_reviewNotificationRecipientsHasBeenSet = true;
    m_reviewNotificationRecipients.emplace_back(std::forward<ReviewNotificationRecipientsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of days during which a request for review can be submitted for
   * evaluations created from this form.</p>
   */
  inline int GetEligibilityDays() const { return m_eligibilityDays; }
  inline bool EligibilityDaysHasBeenSet() const { return m_eligibilityDaysHasBeenSet; }
  inline void SetEligibilityDays(int value) {
    m_eligibilityDaysHasBeenSet = true;
    m_eligibilityDays = value;
  }
  inline EvaluationReviewConfiguration& WithEligibilityDays(int value) {
    SetEligibilityDays(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationReviewNotificationRecipient> m_reviewNotificationRecipients;

  int m_eligibilityDays{0};
  bool m_reviewNotificationRecipientsHasBeenSet = false;
  bool m_eligibilityDaysHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
