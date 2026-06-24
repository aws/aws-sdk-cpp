/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DocumentAccessControlEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

DocumentAccessControlEntry::DocumentAccessControlEntry(JsonView jsonValue) { *this = jsonValue; }

DocumentAccessControlEntry& DocumentAccessControlEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = AccessControlPrincipalTypeMapper::GetAccessControlPrincipalTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("access")) {
    m_access = AccessControlAccessMapper::GetAccessControlAccessForName(jsonValue.GetString("access"));
    m_accessHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAccessControlEntry::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", AccessControlPrincipalTypeMapper::GetNameForAccessControlPrincipalType(m_type));
  }

  if (m_accessHasBeenSet) {
    payload.WithString("access", AccessControlAccessMapper::GetNameForAccessControlAccess(m_access));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
