/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/PayloadUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

PayloadUnion::PayloadUnion(JsonView jsonValue) { *this = jsonValue; }

PayloadUnion& PayloadUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("unionMember")) {
    m_unionMember = jsonValue.GetString("unionMember");
    m_unionMemberHasBeenSet = true;
  }
  return *this;
}

JsonValue PayloadUnion::Jsonize() const {
  JsonValue payload;

  if (m_unionMemberHasBeenSet) {
    payload.WithString("unionMember", m_unionMember);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
