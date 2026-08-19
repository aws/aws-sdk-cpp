/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/NamespaceKeyEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

NamespaceKeyEntry::NamespaceKeyEntry(JsonView jsonValue) { *this = jsonValue; }

NamespaceKeyEntry& NamespaceKeyEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validation")) {
    m_validation = jsonValue.GetObject("validation");
    m_validationHasBeenSet = true;
  }
  return *this;
}

JsonValue NamespaceKeyEntry::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_validationHasBeenSet) {
    payload.WithObject("validation", m_validation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
