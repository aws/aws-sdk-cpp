/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/StructureListMember.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

StructureListMember::StructureListMember(JsonView jsonValue) { *this = jsonValue; }

StructureListMember& StructureListMember::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_a = jsonValue.GetString("value");
    m_aHasBeenSet = true;
  }
  if (jsonValue.ValueExists("other")) {
    m_b = jsonValue.GetString("other");
    m_bHasBeenSet = true;
  }
  return *this;
}

JsonValue StructureListMember::Jsonize() const {
  JsonValue payload;

  if (m_aHasBeenSet) {
    payload.WithString("value", m_a);
  }

  if (m_bHasBeenSet) {
    payload.WithString("other", m_b);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
