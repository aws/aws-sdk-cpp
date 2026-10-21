/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/UpdateProfileWithAgentInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

UpdateProfileWithAgentInitialResponse::UpdateProfileWithAgentInitialResponse(JsonView jsonValue) { *this = jsonValue; }

UpdateProfileWithAgentInitialResponse& UpdateProfileWithAgentInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

UpdateProfileWithAgentInitialResponse::UpdateProfileWithAgentInitialResponse(const Http::HeaderValueCollection& headers)
    : UpdateProfileWithAgentInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue UpdateProfileWithAgentInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
