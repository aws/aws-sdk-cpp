/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationAcknowledgement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationAcknowledgement::EvaluationAcknowledgement(JsonView jsonValue) { *this = jsonValue; }

EvaluationAcknowledgement& EvaluationAcknowledgement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcknowledgedTime")) {
    m_acknowledgedTime = jsonValue.GetDouble("AcknowledgedTime");
    m_acknowledgedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcknowledgedBy")) {
    m_acknowledgedBy = jsonValue.GetString("AcknowledgedBy");
    m_acknowledgedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcknowledgerComment")) {
    m_acknowledgerComment = jsonValue.GetString("AcknowledgerComment");
    m_acknowledgerCommentHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationAcknowledgement::Jsonize() const {
  JsonValue payload;

  if (m_acknowledgedTimeHasBeenSet) {
    payload.WithDouble("AcknowledgedTime", m_acknowledgedTime.SecondsWithMSPrecision());
  }

  if (m_acknowledgedByHasBeenSet) {
    payload.WithString("AcknowledgedBy", m_acknowledgedBy);
  }

  if (m_acknowledgerCommentHasBeenSet) {
    payload.WithString("AcknowledgerComment", m_acknowledgerComment);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
