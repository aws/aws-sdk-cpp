/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/VmInstanceAggregationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

VmInstanceAggregationResponse::VmInstanceAggregationResponse(JsonView jsonValue) { *this = jsonValue; }

VmInstanceAggregationResponse& VmInstanceAggregationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProvider")) {
    m_cloudProvider = ProviderMapper::GetProviderForName(jsonValue.GetString("cloudProvider"));
    m_cloudProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudAccountId")) {
    m_cloudAccountId = jsonValue.GetString("cloudAccountId");
    m_cloudAccountIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("vmImageReference")) {
    m_vmImageReference = jsonValue.GetString("vmImageReference");
    m_vmImageReferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatingSystem")) {
    m_operatingSystem = jsonValue.GetString("operatingSystem");
    m_operatingSystemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityCounts")) {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkFindings")) {
    m_networkFindings = jsonValue.GetInt64("networkFindings");
    m_networkFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitAvailableActiveFindingsCount")) {
    m_exploitAvailableActiveFindingsCount = jsonValue.GetInt64("exploitAvailableActiveFindingsCount");
    m_exploitAvailableActiveFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixAvailableActiveFindingsCount")) {
    m_fixAvailableActiveFindingsCount = jsonValue.GetInt64("fixAvailableActiveFindingsCount");
    m_fixAvailableActiveFindingsCountHasBeenSet = true;
  }
  return *this;
}

JsonValue VmInstanceAggregationResponse::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_cloudProviderHasBeenSet) {
    payload.WithString("cloudProvider", ProviderMapper::GetNameForProvider(m_cloudProvider));
  }

  if (m_cloudAccountIdHasBeenSet) {
    payload.WithString("cloudAccountId", m_cloudAccountId);
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

  if (m_vmImageReferenceHasBeenSet) {
    payload.WithString("vmImageReference", m_vmImageReference);
  }

  if (m_operatingSystemHasBeenSet) {
    payload.WithString("operatingSystem", m_operatingSystem);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_severityCountsHasBeenSet) {
    payload.WithObject("severityCounts", m_severityCounts.Jsonize());
  }

  if (m_networkFindingsHasBeenSet) {
    payload.WithInt64("networkFindings", m_networkFindings);
  }

  if (m_exploitAvailableActiveFindingsCountHasBeenSet) {
    payload.WithInt64("exploitAvailableActiveFindingsCount", m_exploitAvailableActiveFindingsCount);
  }

  if (m_fixAvailableActiveFindingsCountHasBeenSet) {
    payload.WithInt64("fixAvailableActiveFindingsCount", m_fixAvailableActiveFindingsCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
