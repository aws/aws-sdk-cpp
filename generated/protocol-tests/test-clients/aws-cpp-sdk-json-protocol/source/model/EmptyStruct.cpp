/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/model/EmptyStruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

EmptyStruct::EmptyStruct(JsonView jsonValue) { *this = jsonValue; }

EmptyStruct& EmptyStruct::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EmptyStruct::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
