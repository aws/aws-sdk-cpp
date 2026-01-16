/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationReviewNotificationRecipient.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationReviewNotificationRecipient::EvaluationReviewNotificationRecipient(JsonView jsonValue) { *this = jsonValue; }

EvaluationReviewNotificationRecipient& EvaluationReviewNotificationRecipient::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type =
        EvaluationReviewNotificationRecipientTypeMapper::GetEvaluationReviewNotificationRecipientTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationReviewNotificationRecipient::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type",
                       EvaluationReviewNotificationRecipientTypeMapper::GetNameForEvaluationReviewNotificationRecipientType(m_type));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
