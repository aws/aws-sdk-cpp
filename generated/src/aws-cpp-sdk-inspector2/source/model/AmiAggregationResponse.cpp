/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/AmiAggregationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

AmiAggregationResponse::AmiAggregationResponse(JsonView jsonValue) { *this = jsonValue; }

AmiAggregationResponse& AmiAggregationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ami")) {
    m_ami = jsonValue.GetString("ami");
    m_amiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProvider")) {
    m_cloudProvider = ProviderMapper::GetProviderForName(jsonValue.GetString("cloudProvider"));
    m_cloudProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudPartition")) {
    m_cloudPartition = jsonValue.GetString("cloudPartition");
    m_cloudPartitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudRegion")) {
    m_cloudRegion = jsonValue.GetString("cloudRegion");
    m_cloudRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudOrgId")) {
    m_cloudOrgId = jsonValue.GetString("cloudOrgId");
    m_cloudOrgIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudAccountId")) {
    m_cloudAccountId = jsonValue.GetString("cloudAccountId");
    m_cloudAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityCounts")) {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedInstances")) {
    m_affectedInstances = jsonValue.GetInt64("affectedInstances");
    m_affectedInstancesHasBeenSet = true;
  }
  return *this;
}

JsonValue AmiAggregationResponse::Jsonize() const {
  JsonValue payload;

  if (m_amiHasBeenSet) {
    payload.WithString("ami", m_ami);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_cloudProviderHasBeenSet) {
    payload.WithString("cloudProvider", ProviderMapper::GetNameForProvider(m_cloudProvider));
  }

  if (m_cloudPartitionHasBeenSet) {
    payload.WithString("cloudPartition", m_cloudPartition);
  }

  if (m_cloudRegionHasBeenSet) {
    payload.WithString("cloudRegion", m_cloudRegion);
  }

  if (m_cloudOrgIdHasBeenSet) {
    payload.WithString("cloudOrgId", m_cloudOrgId);
  }

  if (m_cloudAccountIdHasBeenSet) {
    payload.WithString("cloudAccountId", m_cloudAccountId);
  }

  if (m_severityCountsHasBeenSet) {
    payload.WithObject("severityCounts", m_severityCounts.Jsonize());
  }

  if (m_affectedInstancesHasBeenSet) {
    payload.WithInt64("affectedInstances", m_affectedInstances);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
