/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/UnionWithJsonName.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

UnionWithJsonName::UnionWithJsonName(JsonView jsonValue) { *this = jsonValue; }

UnionWithJsonName& UnionWithJsonName::operator=(JsonView) { return *this; }

JsonValue UnionWithJsonName::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
