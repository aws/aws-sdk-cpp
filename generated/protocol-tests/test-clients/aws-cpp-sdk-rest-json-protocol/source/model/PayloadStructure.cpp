/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/PayloadStructure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

PayloadStructure::PayloadStructure(JsonView jsonValue) { *this = jsonValue; }

PayloadStructure& PayloadStructure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("structureMember")) {
    m_structureMember = jsonValue.GetString("structureMember");
    m_structureMemberHasBeenSet = true;
  }
  return *this;
}

JsonValue PayloadStructure::Jsonize() const {
  JsonValue payload;

  if (m_structureMemberHasBeenSet) {
    payload.WithString("structureMember", m_structureMember);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
