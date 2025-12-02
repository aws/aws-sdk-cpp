/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/MetadataGenerationRunItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

MetadataGenerationRunItem::MetadataGenerationRunItem(JsonView jsonValue) { *this = jsonValue; }

MetadataGenerationRunItem& MetadataGenerationRunItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainId")) {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owningProjectId")) {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = MetadataGenerationRunStatusMapper::GetMetadataGenerationRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("types")) {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      m_types.push_back(MetadataGenerationRunTypeMapper::GetMetadataGenerationRunTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataGenerationRunItem::Jsonize() const {
  JsonValue payload;

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_owningProjectIdHasBeenSet) {
    payload.WithString("owningProjectId", m_owningProjectId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", MetadataGenerationRunStatusMapper::GetNameForMetadataGenerationRunStatus(m_status));
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  if (m_typesHasBeenSet) {
    Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      typesJsonList[typesIndex].AsString(MetadataGenerationRunTypeMapper::GetNameForMetadataGenerationRunType(m_types[typesIndex]));
    }
    payload.WithArray("types", std::move(typesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
