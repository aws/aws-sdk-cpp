/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/RelationPattern.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

RelationPattern::RelationPattern(JsonView jsonValue) { *this = jsonValue; }

RelationPattern& RelationPattern::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("relationType")) {
    m_relationType = RelationTypeMapper::GetRelationTypeForName(jsonValue.GetString("relationType"));
    m_relationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relationDirection")) {
    m_relationDirection = RelationDirectionMapper::GetRelationDirectionForName(jsonValue.GetString("relationDirection"));
    m_relationDirectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxPathLength")) {
    m_maxPathLength = jsonValue.GetInteger("maxPathLength");
    m_maxPathLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue RelationPattern::Jsonize() const {
  JsonValue payload;

  if (m_relationTypeHasBeenSet) {
    payload.WithString("relationType", RelationTypeMapper::GetNameForRelationType(m_relationType));
  }

  if (m_relationDirectionHasBeenSet) {
    payload.WithString("relationDirection", RelationDirectionMapper::GetNameForRelationDirection(m_relationDirection));
  }

  if (m_maxPathLengthHasBeenSet) {
    payload.WithInteger("maxPathLength", m_maxPathLength);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
