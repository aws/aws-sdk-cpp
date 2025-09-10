/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/NestedPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

NestedPayload::NestedPayload(JsonView jsonValue) { *this = jsonValue; }

NestedPayload& NestedPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("greeting")) {
    m_greeting = jsonValue.GetString("greeting");
    m_greetingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue NestedPayload::Jsonize() const {
  JsonValue payload;

  if (m_greetingHasBeenSet) {
    payload.WithString("greeting", m_greeting);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
