/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchResultItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchResultItem::SearchResultItem(JsonView jsonValue) { *this = jsonValue; }

SearchResultItem& SearchResultItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssetName")) {
    m_assetName = jsonValue.GetString("AssetName");
    m_assetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssetDescription")) {
    m_assetDescription = jsonValue.GetString("AssetDescription");
    m_assetDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssetTypeId")) {
    m_assetTypeId = jsonValue.GetString("AssetTypeId");
    m_assetTypeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchResultItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_assetNameHasBeenSet) {
    payload.WithString("AssetName", m_assetName);
  }

  if (m_assetDescriptionHasBeenSet) {
    payload.WithString("AssetDescription", m_assetDescription);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_assetTypeIdHasBeenSet) {
    payload.WithString("AssetTypeId", m_assetTypeId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
