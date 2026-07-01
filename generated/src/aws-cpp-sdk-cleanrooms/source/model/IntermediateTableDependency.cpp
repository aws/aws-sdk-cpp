/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableDependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableDependency::IntermediateTableDependency(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableDependency& IntermediateTableDependency::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = BaseTableDependencyTypeMapper::GetBaseTableDependencyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentType")) {
    m_parentType = BaseTableParentTypeMapper::GetBaseTableParentTypeForName(jsonValue.GetString("parentType"));
    m_parentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creatorAccountId")) {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableDependency::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", BaseTableDependencyTypeMapper::GetNameForBaseTableDependencyType(m_type));
  }

  if (m_parentTypeHasBeenSet) {
    payload.WithString("parentType", BaseTableParentTypeMapper::GetNameForBaseTableParentType(m_parentType));
  }

  if (m_creatorAccountIdHasBeenSet) {
    payload.WithString("creatorAccountId", m_creatorAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
