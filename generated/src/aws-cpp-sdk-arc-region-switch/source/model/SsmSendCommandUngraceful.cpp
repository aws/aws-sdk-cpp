/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/SsmSendCommandUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

SsmSendCommandUngraceful::SsmSendCommandUngraceful(JsonView jsonValue) { *this = jsonValue; }

SsmSendCommandUngraceful& SsmSendCommandUngraceful::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("behavior")) {
    m_behavior = SsmSendCommandUngracefulBehaviorMapper::GetSsmSendCommandUngracefulBehaviorForName(jsonValue.GetString("behavior"));
    m_behaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue SsmSendCommandUngraceful::Jsonize() const {
  JsonValue payload;

  if (m_behaviorHasBeenSet) {
    payload.WithString("behavior", SsmSendCommandUngracefulBehaviorMapper::GetNameForSsmSendCommandUngracefulBehavior(m_behavior));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
