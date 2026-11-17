/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ShotTrigger.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ShotTrigger::ShotTrigger(JsonView jsonValue) { *this = jsonValue; }

ShotTrigger& ShotTrigger::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ShotTrigger::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
