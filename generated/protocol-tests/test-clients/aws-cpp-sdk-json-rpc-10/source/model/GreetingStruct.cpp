/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/model/GreetingStruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JSONRPC10 {
namespace Model {

GreetingStruct::GreetingStruct(JsonView jsonValue) { *this = jsonValue; }

GreetingStruct& GreetingStruct::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hi")) {
    m_hi = jsonValue.GetString("hi");
    m_hiHasBeenSet = true;
  }
  return *this;
}

JsonValue GreetingStruct::Jsonize() const {
  JsonValue payload;

  if (m_hiHasBeenSet) {
    payload.WithString("hi", m_hi);
  }

  return payload;
}

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws
