/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/FindingTypeAggregationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

FindingTypeAggregationResponse::FindingTypeAggregationResponse(JsonView jsonValue) { *this = jsonValue; }

FindingTypeAggregationResponse& FindingTypeAggregationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityCounts")) {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitAvailableCount")) {
    m_exploitAvailableCount = jsonValue.GetInt64("exploitAvailableCount");
    m_exploitAvailableCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixAvailableCount")) {
    m_fixAvailableCount = jsonValue.GetInt64("fixAvailableCount");
    m_fixAvailableCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProvider")) {
    m_cloudProvider = jsonValue.GetString("cloudProvider");
    m_cloudProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudAccountId")) {
    m_cloudAccountId = jsonValue.GetString("cloudAccountId");
    m_cloudAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudOrgId")) {
    m_cloudOrgId = jsonValue.GetString("cloudOrgId");
    m_cloudOrgIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudRegion")) {
    m_cloudRegion = jsonValue.GetString("cloudRegion");
    m_cloudRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudPartition")) {
    m_cloudPartition = jsonValue.GetString("cloudPartition");
    m_cloudPartitionHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingTypeAggregationResponse::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_severityCountsHasBeenSet) {
    payload.WithObject("severityCounts", m_severityCounts.Jsonize());
  }

  if (m_exploitAvailableCountHasBeenSet) {
    payload.WithInt64("exploitAvailableCount", m_exploitAvailableCount);
  }

  if (m_fixAvailableCountHasBeenSet) {
    payload.WithInt64("fixAvailableCount", m_fixAvailableCount);
  }

  if (m_cloudProviderHasBeenSet) {
    payload.WithString("cloudProvider", m_cloudProvider);
  }

  if (m_cloudAccountIdHasBeenSet) {
    payload.WithString("cloudAccountId", m_cloudAccountId);
  }

  if (m_cloudOrgIdHasBeenSet) {
    payload.WithString("cloudOrgId", m_cloudOrgId);
  }

  if (m_cloudRegionHasBeenSet) {
    payload.WithString("cloudRegion", m_cloudRegion);
  }

  if (m_cloudPartitionHasBeenSet) {
    payload.WithString("cloudPartition", m_cloudPartition);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
