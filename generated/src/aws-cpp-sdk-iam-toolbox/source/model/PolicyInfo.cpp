/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iam-toolbox/model/PolicyInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {

PolicyInfo::PolicyInfo(JsonView jsonValue) { *this = jsonValue; }

PolicyInfo& PolicyInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inline")) {
    m_inline = jsonValue.GetBool("inline");
    m_inlineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachedTo")) {
    Aws::Utils::Array<JsonView> attachedToJsonList = jsonValue.GetArray("attachedTo");
    for (unsigned attachedToIndex = 0; attachedToIndex < attachedToJsonList.GetLength(); ++attachedToIndex) {
      m_attachedTo.push_back(attachedToJsonList[attachedToIndex].AsObject());
    }
    m_attachedToHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyInfo::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", PolicyTypeMapper::GetNameForPolicyType(m_type));
  }

  if (m_inlineHasBeenSet) {
    payload.WithBool("inline", m_inline);
  }

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  if (m_attachedToHasBeenSet) {
    Aws::Utils::Array<JsonValue> attachedToJsonList(m_attachedTo.size());
    for (unsigned attachedToIndex = 0; attachedToIndex < attachedToJsonList.GetLength(); ++attachedToIndex) {
      attachedToJsonList[attachedToIndex].AsObject(m_attachedTo[attachedToIndex].Jsonize());
    }
    payload.WithArray("attachedTo", std::move(attachedToJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
