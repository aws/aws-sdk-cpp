/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/OutputStreamInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

OutputStreamInitialResponse::OutputStreamInitialResponse(JsonView jsonValue) { *this = jsonValue; }

OutputStreamInitialResponse& OutputStreamInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

OutputStreamInitialResponse::OutputStreamInitialResponse(const Http::HeaderValueCollection& headers) : OutputStreamInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue OutputStreamInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
