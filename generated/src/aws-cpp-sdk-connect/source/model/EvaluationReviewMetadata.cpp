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
  if (jsonValue.ValueExists("RequestedTime")) {
    m_requestedTime = jsonValue.GetDouble("RequestedTime");
    m_requestedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedBy")) {
    m_requestedBy = jsonValue.GetString("RequestedBy");
    m_requestedByHasBeenSet = true;
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

  if (m_requestedTimeHasBeenSet) {
    payload.WithDouble("RequestedTime", m_requestedTime.SecondsWithMSPrecision());
  }

  if (m_requestedByHasBeenSet) {
    payload.WithString("RequestedBy", m_requestedBy);
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
