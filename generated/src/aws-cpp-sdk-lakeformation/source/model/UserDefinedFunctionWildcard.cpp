/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/UserDefinedFunctionWildcard.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

UserDefinedFunctionWildcard::UserDefinedFunctionWildcard(JsonView jsonValue) { *this = jsonValue; }

UserDefinedFunctionWildcard& UserDefinedFunctionWildcard::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue UserDefinedFunctionWildcard::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
