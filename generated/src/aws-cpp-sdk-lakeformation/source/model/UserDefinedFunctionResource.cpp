/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/UserDefinedFunctionResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

UserDefinedFunctionResource::UserDefinedFunctionResource(JsonView jsonValue) { *this = jsonValue; }

UserDefinedFunctionResource& UserDefinedFunctionResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DatabaseName")) {
    m_databaseName = jsonValue.GetString("DatabaseName");
    m_databaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserDefinedFunctionWildcard")) {
    m_userDefinedFunctionWildcard = jsonValue.GetObject("UserDefinedFunctionWildcard");
    m_userDefinedFunctionWildcardHasBeenSet = true;
  }
  return *this;
}

JsonValue UserDefinedFunctionResource::Jsonize() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_databaseNameHasBeenSet) {
    payload.WithString("DatabaseName", m_databaseName);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_userDefinedFunctionWildcardHasBeenSet) {
    payload.WithObject("UserDefinedFunctionWildcard", m_userDefinedFunctionWildcard.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
