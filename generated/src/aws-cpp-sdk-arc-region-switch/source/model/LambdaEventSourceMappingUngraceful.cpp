/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/LambdaEventSourceMappingUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

LambdaEventSourceMappingUngraceful::LambdaEventSourceMappingUngraceful(JsonView jsonValue) { *this = jsonValue; }

LambdaEventSourceMappingUngraceful& LambdaEventSourceMappingUngraceful::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("behavior")) {
    m_behavior = LambdaEventSourceMappingUngracefulBehaviorMapper::GetLambdaEventSourceMappingUngracefulBehaviorForName(
        jsonValue.GetString("behavior"));
    m_behaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaEventSourceMappingUngraceful::Jsonize() const {
  JsonValue payload;

  if (m_behaviorHasBeenSet) {
    payload.WithString("behavior",
                       LambdaEventSourceMappingUngracefulBehaviorMapper::GetNameForLambdaEventSourceMappingUngracefulBehavior(m_behavior));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
