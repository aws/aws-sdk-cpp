/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationReviewConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationReviewConfiguration::EvaluationReviewConfiguration(JsonView jsonValue) { *this = jsonValue; }

EvaluationReviewConfiguration& EvaluationReviewConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReviewNotificationRecipients")) {
    Aws::Utils::Array<JsonView> reviewNotificationRecipientsJsonList = jsonValue.GetArray("ReviewNotificationRecipients");
    for (unsigned reviewNotificationRecipientsIndex = 0;
         reviewNotificationRecipientsIndex < reviewNotificationRecipientsJsonList.GetLength(); ++reviewNotificationRecipientsIndex) {
      m_reviewNotificationRecipients.push_back(reviewNotificationRecipientsJsonList[reviewNotificationRecipientsIndex].AsObject());
    }
    m_reviewNotificationRecipientsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EligibilityDays")) {
    m_eligibilityDays = jsonValue.GetInteger("EligibilityDays");
    m_eligibilityDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationReviewConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_reviewNotificationRecipientsHasBeenSet) {
    Aws::Utils::Array<JsonValue> reviewNotificationRecipientsJsonList(m_reviewNotificationRecipients.size());
    for (unsigned reviewNotificationRecipientsIndex = 0;
         reviewNotificationRecipientsIndex < reviewNotificationRecipientsJsonList.GetLength(); ++reviewNotificationRecipientsIndex) {
      reviewNotificationRecipientsJsonList[reviewNotificationRecipientsIndex].AsObject(
          m_reviewNotificationRecipients[reviewNotificationRecipientsIndex].Jsonize());
    }
    payload.WithArray("ReviewNotificationRecipients", std::move(reviewNotificationRecipientsJsonList));
  }

  if (m_eligibilityDaysHasBeenSet) {
    payload.WithInteger("EligibilityDays", m_eligibilityDays);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
