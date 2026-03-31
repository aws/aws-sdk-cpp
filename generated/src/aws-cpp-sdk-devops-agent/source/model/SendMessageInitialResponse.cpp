/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageInitialResponse::SendMessageInitialResponse(JsonView jsonValue) { *this = jsonValue; }

SendMessageInitialResponse& SendMessageInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

SendMessageInitialResponse::SendMessageInitialResponse(const Http::HeaderValueCollection& headers) : SendMessageInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue SendMessageInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
