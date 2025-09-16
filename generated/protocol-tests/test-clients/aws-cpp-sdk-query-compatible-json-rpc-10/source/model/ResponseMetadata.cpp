/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-compatible-json-rpc-10/model/ResponseMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
namespace Model {

ResponseMetadata::ResponseMetadata(JsonView jsonValue) { *this = jsonValue; }

ResponseMetadata& ResponseMetadata::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ResponseMetadata::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
