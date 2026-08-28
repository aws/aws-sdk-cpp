/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DailySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

DailySchedule::DailySchedule(JsonView jsonValue) { *this = jsonValue; }

DailySchedule& DailySchedule::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DailySchedule::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
