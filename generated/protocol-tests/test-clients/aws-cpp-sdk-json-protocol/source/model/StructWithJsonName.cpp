/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/StructWithJsonName.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

StructWithJsonName::StructWithJsonName(JsonView jsonValue) { *this = jsonValue; }

StructWithJsonName& StructWithJsonName::operator=(JsonView) { return *this; }

JsonValue StructWithJsonName::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
