/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/EventChannelConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

EventChannelConfiguration::EventChannelConfiguration(JsonView jsonValue) { *this = jsonValue; }

EventChannelConfiguration& EventChannelConfiguration::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EventChannelConfiguration::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
