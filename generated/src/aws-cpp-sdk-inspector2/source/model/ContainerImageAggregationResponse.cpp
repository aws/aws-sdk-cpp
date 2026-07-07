/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ContainerImageAggregationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ContainerImageAggregationResponse::ContainerImageAggregationResponse(JsonView jsonValue) { *this = jsonValue; }

ContainerImageAggregationResponse& ContainerImageAggregationResponse::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("imageDigest")) {
    m_imageDigest = jsonValue.GetString("imageDigest");
    m_imageDigestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repository")) {
    m_repository = jsonValue.GetString("repository");
    m_repositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registry")) {
    m_registry = jsonValue.GetString("registry");
    m_registryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architecture")) {
    m_architecture = jsonValue.GetString("architecture");
    m_architectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageTags")) {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("imageTags");
    for (unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex) {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsString());
    }
    m_imageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityCounts")) {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastInUseAt")) {
    m_lastInUseAt = jsonValue.GetDouble("lastInUseAt");
    m_lastInUseAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inUseCount")) {
    m_inUseCount = jsonValue.GetInt64("inUseCount");
    m_inUseCountHasBeenSet = true;
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

JsonValue ContainerImageAggregationResponse::Jsonize() const {
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

  if (m_imageDigestHasBeenSet) {
    payload.WithString("imageDigest", m_imageDigest);
  }

  if (m_repositoryHasBeenSet) {
    payload.WithString("repository", m_repository);
  }

  if (m_registryHasBeenSet) {
    payload.WithString("registry", m_registry);
  }

  if (m_architectureHasBeenSet) {
    payload.WithString("architecture", m_architecture);
  }

  if (m_imageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
    for (unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex) {
      imageTagsJsonList[imageTagsIndex].AsString(m_imageTags[imageTagsIndex]);
    }
    payload.WithArray("imageTags", std::move(imageTagsJsonList));
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_severityCountsHasBeenSet) {
    payload.WithObject("severityCounts", m_severityCounts.Jsonize());
  }

  if (m_lastInUseAtHasBeenSet) {
    payload.WithDouble("lastInUseAt", m_lastInUseAt.SecondsWithMSPrecision());
  }

  if (m_inUseCountHasBeenSet) {
    payload.WithInt64("inUseCount", m_inUseCount);
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
