/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ToolReference::ToolReference(JsonView jsonValue) { *this = jsonValue; }

ToolReference& ToolReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverName")) {
    m_serverName = jsonValue.GetString("serverName");
    m_serverNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolReference::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_serverNameHasBeenSet) {
    payload.WithString("serverName", m_serverName);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
