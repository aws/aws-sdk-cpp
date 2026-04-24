/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssetManifestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyBuildResultAssetManifestEntry::AutomatedReasoningPolicyBuildResultAssetManifestEntry(JsonView jsonValue) {
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildResultAssetManifestEntry& AutomatedReasoningPolicyBuildResultAssetManifestEntry::operator=(
    JsonView jsonValue) {
  if (jsonValue.ValueExists("assetType")) {
    m_assetType = AutomatedReasoningPolicyBuildResultAssetTypeMapper::GetAutomatedReasoningPolicyBuildResultAssetTypeForName(
        jsonValue.GetString("assetType"));
    m_assetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assetName")) {
    m_assetName = jsonValue.GetString("assetName");
    m_assetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assetId")) {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildResultAssetManifestEntry::Jsonize() const {
  JsonValue payload;

  if (m_assetTypeHasBeenSet) {
    payload.WithString(
        "assetType",
        AutomatedReasoningPolicyBuildResultAssetTypeMapper::GetNameForAutomatedReasoningPolicyBuildResultAssetType(m_assetType));
  }

  if (m_assetNameHasBeenSet) {
    payload.WithString("assetName", m_assetName);
  }

  if (m_assetIdHasBeenSet) {
    payload.WithString("assetId", m_assetId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
