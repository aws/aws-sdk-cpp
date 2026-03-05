/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/EntityPattern.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

EntityPattern::EntityPattern(JsonView jsonValue) { *this = jsonValue; }

EntityPattern& EntityPattern::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entityType")) {
    m_entityType = GraphEntityTypeMapper::GetGraphEntityTypeForName(jsonValue.GetString("entityType"));
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filters")) {
    m_filters = jsonValue.GetObject("filters");
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue EntityPattern::Jsonize() const {
  JsonValue payload;

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", GraphEntityTypeMapper::GetNameForGraphEntityType(m_entityType));
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
