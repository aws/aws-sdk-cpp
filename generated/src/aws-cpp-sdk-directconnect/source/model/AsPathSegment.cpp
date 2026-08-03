/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/AsPathSegment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

AsPathSegment::AsPathSegment(JsonView jsonValue) { *this = jsonValue; }

AsPathSegment& AsPathSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pathType")) {
    m_pathType = AsPathTypeMapper::GetAsPathTypeForName(jsonValue.GetString("pathType"));
    m_pathTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    Aws::Utils::Array<JsonView> pathJsonList = jsonValue.GetArray("path");
    for (unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex) {
      m_path.push_back(pathJsonList[pathIndex].AsInt64());
    }
    m_pathHasBeenSet = true;
  }
  return *this;
}

JsonValue AsPathSegment::Jsonize() const {
  JsonValue payload;

  if (m_pathTypeHasBeenSet) {
    payload.WithString("pathType", AsPathTypeMapper::GetNameForAsPathType(m_pathType));
  }

  if (m_pathHasBeenSet) {
    Aws::Utils::Array<JsonValue> pathJsonList(m_path.size());
    for (unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex) {
      pathJsonList[pathIndex].AsInt64(m_path[pathIndex]);
    }
    payload.WithArray("path", std::move(pathJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
