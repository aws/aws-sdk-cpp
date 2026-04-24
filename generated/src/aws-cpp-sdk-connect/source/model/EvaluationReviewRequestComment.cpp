/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationReviewRequestComment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationReviewRequestComment::EvaluationReviewRequestComment(JsonView jsonValue) { *this = jsonValue; }

EvaluationReviewRequestComment& EvaluationReviewRequestComment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Comment")) {
    m_comment = jsonValue.GetString("Comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationReviewRequestComment::Jsonize() const {
  JsonValue payload;

  if (m_commentHasBeenSet) {
    payload.WithString("Comment", m_comment);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
