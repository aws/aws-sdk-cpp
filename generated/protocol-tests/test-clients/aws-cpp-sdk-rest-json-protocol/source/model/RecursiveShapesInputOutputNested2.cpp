/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

RecursiveShapesInputOutputNested2::RecursiveShapesInputOutputNested2(JsonView jsonValue) { *this = jsonValue; }

RecursiveShapesInputOutputNested2& RecursiveShapesInputOutputNested2::operator=(JsonView) { return *this; }

JsonValue RecursiveShapesInputOutputNested2::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
