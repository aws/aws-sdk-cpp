/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RemoteAgentSigV4Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RemoteAgentSigV4Configuration::RemoteAgentSigV4Configuration(JsonView jsonValue) { *this = jsonValue; }

RemoteAgentSigV4Configuration& RemoteAgentSigV4Configuration::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue RemoteAgentSigV4Configuration::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
