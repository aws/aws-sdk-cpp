/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/Permissions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

Permissions::Permissions(JsonView jsonValue) { *this = jsonValue; }

Permissions& Permissions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3")) {
    Aws::Utils::Array<JsonView> s3JsonList = jsonValue.GetArray("s3");
    for (unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index) {
      m_s3.push_back(S3PermissionMapper::GetS3PermissionForName(s3JsonList[s3Index].AsString()));
    }
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue Permissions::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    Aws::Utils::Array<JsonValue> s3JsonList(m_s3.size());
    for (unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index) {
      s3JsonList[s3Index].AsString(S3PermissionMapper::GetNameForS3Permission(m_s3[s3Index]));
    }
    payload.WithArray("s3", std::move(s3JsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
