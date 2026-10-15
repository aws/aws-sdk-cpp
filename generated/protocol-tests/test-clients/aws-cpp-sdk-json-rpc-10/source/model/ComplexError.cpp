/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-rpc-10/model/ComplexError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JSONRPC10 {
namespace Model {

ComplexError::ComplexError(JsonView jsonValue) { *this = jsonValue; }

ComplexError& ComplexError::operator=(JsonView) { return *this; }

JsonValue ComplexError::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws
