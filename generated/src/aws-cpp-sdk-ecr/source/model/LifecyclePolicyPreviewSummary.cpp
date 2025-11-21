/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/LifecyclePolicyPreviewSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

LifecyclePolicyPreviewSummary::LifecyclePolicyPreviewSummary(JsonView jsonValue) { *this = jsonValue; }

LifecyclePolicyPreviewSummary& LifecyclePolicyPreviewSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("expiringImageTotalCount")) {
    m_expiringImageTotalCount = jsonValue.GetInteger("expiringImageTotalCount");
    m_expiringImageTotalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transitioningImageTotalCounts")) {
    Aws::Utils::Array<JsonView> transitioningImageTotalCountsJsonList = jsonValue.GetArray("transitioningImageTotalCounts");
    for (unsigned transitioningImageTotalCountsIndex = 0;
         transitioningImageTotalCountsIndex < transitioningImageTotalCountsJsonList.GetLength(); ++transitioningImageTotalCountsIndex) {
      m_transitioningImageTotalCounts.push_back(transitioningImageTotalCountsJsonList[transitioningImageTotalCountsIndex].AsObject());
    }
    m_transitioningImageTotalCountsHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecyclePolicyPreviewSummary::Jsonize() const {
  JsonValue payload;

  if (m_expiringImageTotalCountHasBeenSet) {
    payload.WithInteger("expiringImageTotalCount", m_expiringImageTotalCount);
  }

  if (m_transitioningImageTotalCountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> transitioningImageTotalCountsJsonList(m_transitioningImageTotalCounts.size());
    for (unsigned transitioningImageTotalCountsIndex = 0;
         transitioningImageTotalCountsIndex < transitioningImageTotalCountsJsonList.GetLength(); ++transitioningImageTotalCountsIndex) {
      transitioningImageTotalCountsJsonList[transitioningImageTotalCountsIndex].AsObject(
          m_transitioningImageTotalCounts[transitioningImageTotalCountsIndex].Jsonize());
    }
    payload.WithArray("transitioningImageTotalCounts", std::move(transitioningImageTotalCountsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
