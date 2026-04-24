/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderUpdate::RecommenderUpdate(JsonView jsonValue) { *this = jsonValue; }

RecommenderUpdate& RecommenderUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommenderConfig")) {
    m_recommenderConfig = jsonValue.GetObject("RecommenderConfig");
    m_recommenderConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommenderStatusMapper::GetRecommenderStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderUpdate::Jsonize() const {
  JsonValue payload;

  if (m_recommenderConfigHasBeenSet) {
    payload.WithObject("RecommenderConfig", m_recommenderConfig.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RecommenderStatusMapper::GetNameForRecommenderStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
