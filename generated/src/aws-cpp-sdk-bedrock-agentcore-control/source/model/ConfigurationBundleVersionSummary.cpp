/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConfigurationBundleVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ConfigurationBundleVersionSummary::ConfigurationBundleVersionSummary(JsonView jsonValue) { *this = jsonValue; }

ConfigurationBundleVersionSummary& ConfigurationBundleVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bundleArn")) {
    m_bundleArn = jsonValue.GetString("bundleArn");
    m_bundleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bundleId")) {
    m_bundleId = jsonValue.GetString("bundleId");
    m_bundleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineageMetadata")) {
    m_lineageMetadata = jsonValue.GetObject("lineageMetadata");
    m_lineageMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionCreatedAt")) {
    m_versionCreatedAt = jsonValue.GetDouble("versionCreatedAt");
    m_versionCreatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationBundleVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_bundleArnHasBeenSet) {
    payload.WithString("bundleArn", m_bundleArn);
  }

  if (m_bundleIdHasBeenSet) {
    payload.WithString("bundleId", m_bundleId);
  }

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_lineageMetadataHasBeenSet) {
    payload.WithObject("lineageMetadata", m_lineageMetadata.Jsonize());
  }

  if (m_versionCreatedAtHasBeenSet) {
    payload.WithDouble("versionCreatedAt", m_versionCreatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
