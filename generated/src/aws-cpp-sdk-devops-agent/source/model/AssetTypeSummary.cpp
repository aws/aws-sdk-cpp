/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssetTypeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AssetTypeSummary::AssetTypeSummary(JsonView jsonValue) { *this = jsonValue; }

AssetTypeSummary& AssetTypeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assetType")) {
    m_assetType = jsonValue.GetString("assetType");
    m_assetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetTypeSummary::Jsonize() const {
  JsonValue payload;

  if (m_assetTypeHasBeenSet) {
    payload.WithString("assetType", m_assetType);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
