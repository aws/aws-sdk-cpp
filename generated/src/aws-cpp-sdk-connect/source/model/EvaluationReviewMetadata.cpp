/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationReviewMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationReviewMetadata::EvaluationReviewMetadata(JsonView jsonValue) { *this = jsonValue; }

EvaluationReviewMetadata& EvaluationReviewMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReviewId")) {
    m_reviewId = jsonValue.GetString("ReviewId");
    m_reviewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReviewRequestComments")) {
    Aws::Utils::Array<JsonView> reviewRequestCommentsJsonList = jsonValue.GetArray("ReviewRequestComments");
    for (unsigned reviewRequestCommentsIndex = 0; reviewRequestCommentsIndex < reviewRequestCommentsJsonList.GetLength();
         ++reviewRequestCommentsIndex) {
      m_reviewRequestComments.push_back(reviewRequestCommentsJsonList[reviewRequestCommentsIndex].AsObject());
    }
    m_reviewRequestCommentsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationReviewMetadata::Jsonize() const {
  JsonValue payload;

  if (m_reviewIdHasBeenSet) {
    payload.WithString("ReviewId", m_reviewId);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  if (m_reviewRequestCommentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> reviewRequestCommentsJsonList(m_reviewRequestComments.size());
    for (unsigned reviewRequestCommentsIndex = 0; reviewRequestCommentsIndex < reviewRequestCommentsJsonList.GetLength();
         ++reviewRequestCommentsIndex) {
      reviewRequestCommentsJsonList[reviewRequestCommentsIndex].AsObject(m_reviewRequestComments[reviewRequestCommentsIndex].Jsonize());
    }
    payload.WithArray("ReviewRequestComments", std::move(reviewRequestCommentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
