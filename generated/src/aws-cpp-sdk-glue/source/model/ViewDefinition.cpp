/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ViewDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ViewDefinition::ViewDefinition(JsonView jsonValue) { *this = jsonValue; }

ViewDefinition& ViewDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IsProtected")) {
    m_isProtected = jsonValue.GetBool("IsProtected");
    m_isProtectedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Definer")) {
    m_definer = jsonValue.GetString("Definer");
    m_definerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ViewVersionId")) {
    m_viewVersionId = jsonValue.GetInt64("ViewVersionId");
    m_viewVersionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ViewVersionToken")) {
    m_viewVersionToken = jsonValue.GetString("ViewVersionToken");
    m_viewVersionTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefreshSeconds")) {
    m_refreshSeconds = jsonValue.GetInt64("RefreshSeconds");
    m_refreshSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastRefreshType")) {
    m_lastRefreshType = LastRefreshTypeMapper::GetLastRefreshTypeForName(jsonValue.GetString("LastRefreshType"));
    m_lastRefreshTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubObjects")) {
    Aws::Utils::Array<JsonView> subObjectsJsonList = jsonValue.GetArray("SubObjects");
    for (unsigned subObjectsIndex = 0; subObjectsIndex < subObjectsJsonList.GetLength(); ++subObjectsIndex) {
      m_subObjects.push_back(subObjectsJsonList[subObjectsIndex].AsString());
    }
    m_subObjectsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubObjectVersionIds")) {
    Aws::Utils::Array<JsonView> subObjectVersionIdsJsonList = jsonValue.GetArray("SubObjectVersionIds");
    for (unsigned subObjectVersionIdsIndex = 0; subObjectVersionIdsIndex < subObjectVersionIdsJsonList.GetLength();
         ++subObjectVersionIdsIndex) {
      m_subObjectVersionIds.push_back(subObjectVersionIdsJsonList[subObjectVersionIdsIndex].AsInt64());
    }
    m_subObjectVersionIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Representations")) {
    Aws::Utils::Array<JsonView> representationsJsonList = jsonValue.GetArray("Representations");
    for (unsigned representationsIndex = 0; representationsIndex < representationsJsonList.GetLength(); ++representationsIndex) {
      m_representations.push_back(representationsJsonList[representationsIndex].AsObject());
    }
    m_representationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ViewDefinition::Jsonize() const {
  JsonValue payload;

  if (m_isProtectedHasBeenSet) {
    payload.WithBool("IsProtected", m_isProtected);
  }

  if (m_definerHasBeenSet) {
    payload.WithString("Definer", m_definer);
  }

  if (m_viewVersionIdHasBeenSet) {
    payload.WithInt64("ViewVersionId", m_viewVersionId);
  }

  if (m_viewVersionTokenHasBeenSet) {
    payload.WithString("ViewVersionToken", m_viewVersionToken);
  }

  if (m_refreshSecondsHasBeenSet) {
    payload.WithInt64("RefreshSeconds", m_refreshSeconds);
  }

  if (m_lastRefreshTypeHasBeenSet) {
    payload.WithString("LastRefreshType", LastRefreshTypeMapper::GetNameForLastRefreshType(m_lastRefreshType));
  }

  if (m_subObjectsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subObjectsJsonList(m_subObjects.size());
    for (unsigned subObjectsIndex = 0; subObjectsIndex < subObjectsJsonList.GetLength(); ++subObjectsIndex) {
      subObjectsJsonList[subObjectsIndex].AsString(m_subObjects[subObjectsIndex]);
    }
    payload.WithArray("SubObjects", std::move(subObjectsJsonList));
  }

  if (m_subObjectVersionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subObjectVersionIdsJsonList(m_subObjectVersionIds.size());
    for (unsigned subObjectVersionIdsIndex = 0; subObjectVersionIdsIndex < subObjectVersionIdsJsonList.GetLength();
         ++subObjectVersionIdsIndex) {
      subObjectVersionIdsJsonList[subObjectVersionIdsIndex].AsInt64(m_subObjectVersionIds[subObjectVersionIdsIndex]);
    }
    payload.WithArray("SubObjectVersionIds", std::move(subObjectVersionIdsJsonList));
  }

  if (m_representationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> representationsJsonList(m_representations.size());
    for (unsigned representationsIndex = 0; representationsIndex < representationsJsonList.GetLength(); ++representationsIndex) {
      representationsJsonList[representationsIndex].AsObject(m_representations[representationsIndex].Jsonize());
    }
    payload.WithArray("Representations", std::move(representationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
