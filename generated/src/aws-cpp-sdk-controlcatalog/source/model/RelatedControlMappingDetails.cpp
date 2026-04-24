/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/RelatedControlMappingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ControlCatalog {
namespace Model {

RelatedControlMappingDetails::RelatedControlMappingDetails(JsonView jsonValue) { *this = jsonValue; }

RelatedControlMappingDetails& RelatedControlMappingDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ControlArn")) {
    m_controlArn = jsonValue.GetString("ControlArn");
    m_controlArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RelationType")) {
    m_relationType = ControlRelationTypeMapper::GetControlRelationTypeForName(jsonValue.GetString("RelationType"));
    m_relationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedControlMappingDetails::Jsonize() const {
  JsonValue payload;

  if (m_controlArnHasBeenSet) {
    payload.WithString("ControlArn", m_controlArn);
  }

  if (m_relationTypeHasBeenSet) {
    payload.WithString("RelationType", ControlRelationTypeMapper::GetNameForControlRelationType(m_relationType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
