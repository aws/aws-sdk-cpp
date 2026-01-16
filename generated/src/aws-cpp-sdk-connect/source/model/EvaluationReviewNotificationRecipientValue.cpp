/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationReviewNotificationRecipientValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationReviewNotificationRecipientValue::EvaluationReviewNotificationRecipientValue(JsonView jsonValue) { *this = jsonValue; }

EvaluationReviewNotificationRecipientValue& EvaluationReviewNotificationRecipientValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("UserId")) {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationReviewNotificationRecipientValue::Jsonize() const {
  JsonValue payload;

  if (m_userIdHasBeenSet) {
    payload.WithString("UserId", m_userId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
