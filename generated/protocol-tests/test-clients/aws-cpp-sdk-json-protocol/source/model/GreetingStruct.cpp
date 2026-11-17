/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/GreetingStruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

GreetingStruct::GreetingStruct(JsonView jsonValue) { *this = jsonValue; }

GreetingStruct& GreetingStruct::operator=(JsonView) { return *this; }

JsonValue GreetingStruct::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
